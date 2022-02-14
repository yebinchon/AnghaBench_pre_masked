
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int dbspace_path ;
typedef int DIR ;


 int * FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dirent* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_4, int VAR_5)
{
 DIR *VAR_6;
 struct dirent *VAR_7;
 char VAR_8[VAR_2 * 2];

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 == ((void*)0) && VAR_3 == VAR_0)
 {
  FUNC_4(VAR_1,
    (FUNC_5(),
     FUNC_6("could not open directory \"%s\": %m",
      VAR_4)));
  return;
 }

 while ((VAR_7 = FUNC_2(VAR_6, VAR_4)) != ((void*)0))
 {





  if (FUNC_9(VAR_7->d_name, "0123456789") != FUNC_8(VAR_7->d_name))
   continue;

  FUNC_7(VAR_8, sizeof(VAR_8), "%s/%s",
     VAR_4, VAR_7->d_name);
  FUNC_3(VAR_8, VAR_5);
 }

 FUNC_1(VAR_6);
}
