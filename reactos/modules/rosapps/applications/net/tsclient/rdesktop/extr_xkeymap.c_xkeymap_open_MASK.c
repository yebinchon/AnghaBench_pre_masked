
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int * FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;

FILE *
FUNC_4(const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 char *VAR_4;
 FILE *VAR_5;


 VAR_4 = FUNC_1("HOME");
 if (VAR_4)
 {
  VAR_2 = FUNC_2(VAR_4, ".rdesktop/keymaps");
  VAR_3 = FUNC_2(VAR_2, VAR_1);
  FUNC_3(VAR_2);
  VAR_5 = FUNC_0(VAR_3, "r");
  FUNC_3(VAR_3);
  if (VAR_5)
   return VAR_5;
 }


 VAR_2 = FUNC_2(VAR_0, VAR_1);
 VAR_5 = FUNC_0(VAR_2, "r");
 FUNC_3(VAR_2);
 if (VAR_5)
  return VAR_5;



 VAR_2 = FUNC_2("keymaps", VAR_1);
 VAR_5 = FUNC_0(VAR_2, "r");
 FUNC_3(VAR_2);
 if (VAR_5)
  return VAR_5;

 return ((void*)0);
}
