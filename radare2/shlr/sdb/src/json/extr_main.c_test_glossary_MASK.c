
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(char *VAR_0) {
 char *VAR_1;
{
 VAR_1 = "glossary.title";
 char *VAR_2= FUNC_1 (VAR_0, VAR_1, "patata");
 if (VAR_2) {
  FUNC_3 ("%s\n", VAR_2);
  FUNC_2 (VAR_2);
 } else FUNC_3 ("set failed\n");
}
{
 VAR_1 = "glossary.title";
 char *VAR_3= FUNC_0 (VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_3 ("%s\n", VAR_3);
  FUNC_2 (VAR_3);
 } else FUNC_3 ("set failed\n");
}
{
 VAR_1 = "glossary.title";
 char *VAR_4= FUNC_0 (VAR_0, VAR_1);
 if (VAR_4) {
  FUNC_3 ("%s\n", VAR_4);
  FUNC_2 (VAR_4);
 } else FUNC_3 ("set failed\n");
}
return 0;
}
