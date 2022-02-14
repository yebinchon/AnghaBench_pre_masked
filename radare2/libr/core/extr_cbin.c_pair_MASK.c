
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int const VAR_0 ;
 int FUNC_1 (char*,char,int const) ;
 int FUNC_2 (char*,char const*,char const*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const char *VAR_2, int VAR_3, bool VAR_4) {
 if (!VAR_2 || !*VAR_2) {
  return;
 }
 if (FUNC_0 (VAR_3)) {
  const char *VAR_5 = VAR_4 ? "" : ",";
  FUNC_2 ("\"%s\":%s%s", VAR_1, VAR_2, VAR_5);
 } else {
  char VAR_6[16];
  const int VAR_7 = FUNC_3 (VAR_1);
  const int VAR_8 = (VAR_7 > VAR_0) ? 0 : VAR_0 - VAR_7;
  FUNC_1 (VAR_6, ' ', VAR_8);
  VAR_6[VAR_8] = 0;
  FUNC_2 ("%s%s%s\n", VAR_1, VAR_6, VAR_2);
 }
}
