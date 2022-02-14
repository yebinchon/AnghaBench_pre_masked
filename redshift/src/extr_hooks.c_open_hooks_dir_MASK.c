
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef int DIR ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,char*,char*) ;

__attribute__((used)) static DIR *
FUNC_5(char *VAR_1)
{
 char *VAR_2;

 if ((VAR_2 = FUNC_0("XDG_CONFIG_HOME")) != ((void*)0) &&
     VAR_2[0] != '\0') {
  FUNC_4(VAR_1, VAR_0, "%s/redshift/hooks", VAR_2);
  return FUNC_3(VAR_1);
 }

 if ((VAR_2 = FUNC_0("HOME")) != ((void*)0) &&
     VAR_2[0] != '\0') {
  FUNC_4(VAR_1, VAR_0, "%s/.config/redshift/hooks", VAR_2);
  return FUNC_3(VAR_1);
 }


 struct passwd *VAR_3 = FUNC_1(FUNC_2());
 FUNC_4(VAR_1, VAR_0, "%s/.config/redshift/hooks", VAR_3->pw_dir);
 return FUNC_3(VAR_1);



}
