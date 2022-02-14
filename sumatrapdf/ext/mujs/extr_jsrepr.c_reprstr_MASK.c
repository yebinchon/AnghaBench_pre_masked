
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;
typedef int js_Buffer ;
typedef int Rune ;


 int FUNC_0 (int*,char const*) ;
 int FUNC_1 (int *,int **,char const) ;
 int FUNC_2 (int *,int **,char*) ;

__attribute__((used)) static void FUNC_3(js_State *VAR_0, js_Buffer **VAR_1, const char *VAR_2)
{
 static const char *VAR_3 = "0123456789ABCDEF";
 Rune VAR_4;
 FUNC_1(VAR_0, VAR_1, '"');
 while (*VAR_2) {
  VAR_2 += FUNC_0(&VAR_4, VAR_2);
  switch (VAR_4) {
  case '"': FUNC_2(VAR_0, VAR_1, "\\\""); break;
  case '\\': FUNC_2(VAR_0, VAR_1, "\\\\"); break;
  case '\b': FUNC_2(VAR_0, VAR_1, "\\b"); break;
  case '\f': FUNC_2(VAR_0, VAR_1, "\\f"); break;
  case '\n': FUNC_2(VAR_0, VAR_1, "\\n"); break;
  case '\r': FUNC_2(VAR_0, VAR_1, "\\r"); break;
  case '\t': FUNC_2(VAR_0, VAR_1, "\\t"); break;
  default:
   if (VAR_4 < ' ' || VAR_4 > 127) {
    FUNC_2(VAR_0, VAR_1, "\\u");
    FUNC_1(VAR_0, VAR_1, VAR_3[(VAR_4>>12)&15]);
    FUNC_1(VAR_0, VAR_1, VAR_3[(VAR_4>>8)&15]);
    FUNC_1(VAR_0, VAR_1, VAR_3[(VAR_4>>4)&15]);
    FUNC_1(VAR_0, VAR_1, VAR_3[VAR_4&15]);
   } else {
    FUNC_1(VAR_0, VAR_1, VAR_4); break;
   }
  }
 }
 FUNC_1(VAR_0, VAR_1, '"');
}
