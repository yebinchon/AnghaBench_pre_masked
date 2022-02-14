
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;

int FUNC_3(char **VAR_1, char **VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_1(*VAR_1, "brl,");
 if (VAR_3) {
  *VAR_2 = "";
  *VAR_1 += VAR_3;
  return 0;
 }

 VAR_3 = FUNC_1(*VAR_1, "brl=");
 if (VAR_3) {
  *VAR_2 = *VAR_1 + VAR_3;
  *VAR_1 = FUNC_2(*VAR_2, ',');
  if (!*VAR_1) {
   FUNC_0("need port name after brl=\n");
   return -VAR_0;
  }
  *((*VAR_1)++) = 0;
 }

 return 0;
}
