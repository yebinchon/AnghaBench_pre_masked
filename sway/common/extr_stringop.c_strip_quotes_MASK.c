
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,int ) ;

void FUNC_2(char *VAR_0) {
 bool VAR_1 = 0;
 bool VAR_2 = 0;
 bool VAR_3 = 0;
 char *VAR_4 = FUNC_1(VAR_0,0);
 while (*VAR_0) {
  if (*VAR_0 == '\'' && !VAR_1 && !VAR_3) {
   VAR_2 = !VAR_2;
   goto shift_over;
  } else if (*VAR_0 == '\"' && !VAR_2 && !VAR_3) {
   VAR_1 = !VAR_1;
   goto shift_over;
  } else if (*VAR_0 == '\\') {
   VAR_3 = !VAR_3;
   ++VAR_0;
   continue;
  }
  VAR_3 = 0;
  ++VAR_0;
  continue;
  shift_over:
  FUNC_0(VAR_0, VAR_0+1, VAR_4-- - VAR_0);
 }
 *VAR_4 = '\0';
}
