
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 scalar_t__ FUNC_0 (int,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;

char *FUNC_6 (char *VAR_0, ut32 VAR_1) {
 st32 VAR_2;
 char *VAR_3 = ((void*)0);
 char *VAR_4;
 VAR_2 = VAR_1 & 3;
 switch (VAR_2) {
 case 0:
  if(VAR_0 && FUNC_4 (VAR_0, 'w')) {
   if(VAR_2 == 62) {
    return FUNC_5 ("sim0");
   }
   if(VAR_2 == 63) {
    return FUNC_5 ("sim0");
   }
  }
  VAR_4 = FUNC_1 (VAR_1 >> 2);
  VAR_3 = FUNC_3 ("@", VAR_4, 2);
  break;
 case 2:
  VAR_4 = (char *)FUNC_0 (1, 50);
  if (!VAR_4) {
   return ((void*)0);
  }
  FUNC_2 (VAR_4, "@#0x%x", VAR_2);
  VAR_3 = VAR_4;
  break;
 case 1:
 case 3:
  VAR_3 = FUNC_5 ("<reserved>");
  break;
 }
 return VAR_3;
}
