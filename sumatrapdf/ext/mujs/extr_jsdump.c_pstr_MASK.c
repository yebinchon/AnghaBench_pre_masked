
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Rune ;


 int FUNC_0 (int*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1)
{
 static const char *VAR_2 = "0123456789ABCDEF";
 Rune VAR_3;
 FUNC_1(VAR_0 ? '\'' : '"');
 while (*VAR_1) {
  VAR_1 += FUNC_0(&VAR_3, VAR_1);
  switch (VAR_3) {
  case '\'': FUNC_2("\\'"); break;
  case '"': FUNC_2("\\\""); break;
  case '\\': FUNC_2("\\\\"); break;
  case '\b': FUNC_2("\\b"); break;
  case '\f': FUNC_2("\\f"); break;
  case '\n': FUNC_2("\\n"); break;
  case '\r': FUNC_2("\\r"); break;
  case '\t': FUNC_2("\\t"); break;
  default:
   if (VAR_3 < ' ' || VAR_3 > 127) {
    FUNC_2("\\u");
    FUNC_1(VAR_2[(VAR_3>>12)&15]);
    FUNC_1(VAR_2[(VAR_3>>8)&15]);
    FUNC_1(VAR_2[(VAR_3>>4)&15]);
    FUNC_1(VAR_2[VAR_3&15]);
   } else {
    FUNC_1(VAR_3); break;
   }
  }
 }
 FUNC_1(VAR_0 ? '\'' : '"');
}
