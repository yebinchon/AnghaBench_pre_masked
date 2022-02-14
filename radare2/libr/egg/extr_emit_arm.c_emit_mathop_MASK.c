
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REgg ;


 char* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(REgg *VAR_1, int VAR_2, int VAR_3, int VAR_4, const char *VAR_5, const char *VAR_6) {
 char *VAR_7;
 switch (VAR_2) {
 case '^': VAR_7 = "eor"; break;
 case '&': VAR_7 = "and"; break;
 case '|': VAR_7 = "orr"; break;
 case '-': VAR_7 = "sub"; break;
 case '+': VAR_7 = "add"; break;
 case '*': VAR_7 = "mul"; break;
 case '/': VAR_7 = "div"; break;
 default: VAR_7 = "mov"; break;
 }
 if (!VAR_5) {
  VAR_5 = VAR_0;
 }
 if (!VAR_6) {
  VAR_6 = VAR_0;
 }






 if (VAR_4 == '*') {
  FUNC_1 (VAR_1, "  %s %s, [%s]\n", VAR_7, VAR_6, VAR_5);
 } else {
  FUNC_1 (VAR_1, "  %s %s, %s\n", VAR_7, VAR_6, VAR_5);
 }
}
