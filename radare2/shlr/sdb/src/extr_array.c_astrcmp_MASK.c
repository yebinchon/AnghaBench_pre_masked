
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;

__attribute__((used)) static int FUNC_0(const char *VAR_1, const char *VAR_2) {
 register char VAR_3 = *VAR_1;
 register char VAR_4 = *VAR_2;
 for (;;) {
  if (VAR_3 == '\0' || VAR_3 == VAR_0) {
   if (VAR_4 == '\0' || VAR_4 == VAR_0) {
    return 0;
   }
   return -1;
  }
  if (VAR_4 == '\0' || VAR_4 == VAR_0) {
   return 1;
  }
  if (VAR_3 != VAR_4) {
   return (VAR_3 > VAR_4) ? 1 : -1;
  }
  VAR_3 = *(++VAR_1);
  VAR_4 = *(++VAR_2);
 }
}
