
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int *VAR_1, int *VAR_2) {
 int VAR_3, VAR_4;
 for (VAR_3 = 0;VAR_3 < 0xff; VAR_3++) {
  for (VAR_4 = 0;VAR_4 < 0xf;VAR_4++) {
   int VAR_5 = VAR_3 << VAR_4;
   if (VAR_5 > VAR_0) {
    continue;
   }
   if (VAR_5 == VAR_0) {
    *VAR_1 = VAR_3;
    *VAR_2 = 16 - (VAR_4 / 2);
    return 1;
   }
  }
 }
 return 0;
}
