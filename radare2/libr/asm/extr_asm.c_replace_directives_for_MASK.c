
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RStrBuf ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static char *FUNC_8(char *VAR_0, char *VAR_1) {
 RStrBuf *VAR_2 = FUNC_5 ("");
 char *VAR_3 = ((void*)0);
 char *VAR_4 = VAR_0;
 bool VAR_5 = 0;
 for (;;) {
  if (VAR_4) {
   VAR_3 = FUNC_7 (VAR_4, VAR_1);
  }
  if (VAR_3) {
   char *VAR_6 = FUNC_6 (VAR_3, '\n');
   if (VAR_6) {
    *VAR_6 ++ = 0;
   }
   char VAR_7 = *VAR_3;
   *VAR_3 = 0;
   FUNC_1 (VAR_2, VAR_4);
   *VAR_3 = VAR_7;
   FUNC_2 (VAR_2, "<{%s}>\n", VAR_3 + 1);
   VAR_4 = VAR_6;
   VAR_5 = 1;
  } else {
   if (VAR_4) {
    FUNC_1 (VAR_2, VAR_4);
   }
   break;
  }
 }
 if (VAR_5) {
  FUNC_0 (VAR_0);
  return FUNC_3 (VAR_2);
 }
 FUNC_4 (VAR_2);
 return VAR_0;
}
