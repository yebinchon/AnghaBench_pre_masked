
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int rm_path ;
typedef int DIR ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dirent* FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_2)
{
 DIR *VAR_3;
 struct dirent *VAR_4;
 char VAR_5[VAR_1 * 2];

 VAR_3 = FUNC_0(VAR_2);

 while ((VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_0)) != ((void*)0))
 {
  if (!FUNC_6(VAR_4->d_name))
   continue;

  FUNC_7(VAR_5, sizeof(VAR_5), "%s/%s",
     VAR_2, VAR_4->d_name);

  if (FUNC_8(VAR_5) < 0)
   FUNC_3(VAR_0,
     (FUNC_4(),
      FUNC_5("could not remove file \"%s\": %m",
       VAR_5)));
 }

 FUNC_1(VAR_3);
}
