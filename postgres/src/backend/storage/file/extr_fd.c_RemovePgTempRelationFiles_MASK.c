
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int dbspace_path ;
typedef int DIR ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dirent* FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2)
{
 DIR *VAR_3;
 struct dirent *VAR_4;
 char VAR_5[VAR_1 * 2];

 VAR_3 = FUNC_0(VAR_2);

 while ((VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_0)) != ((void*)0))
 {





  if (FUNC_6(VAR_4->d_name, "0123456789") != FUNC_5(VAR_4->d_name))
   continue;

  FUNC_4(VAR_5, sizeof(VAR_5), "%s/%s",
     VAR_2, VAR_4->d_name);
  FUNC_3(VAR_5);
 }

 FUNC_1(VAR_3);
}
