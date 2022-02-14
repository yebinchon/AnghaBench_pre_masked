
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1) {
 int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
 while (VAR_0[VAR_2] && VAR_1 > 0) {
  if ((VAR_0[VAR_2] & 0xc0) != 0x80) {
   VAR_3++;
   if (FUNC_0 (VAR_0 + VAR_2, VAR_1)) {
    VAR_4++;
   }
  }
  VAR_1--;
  VAR_2++;
 }
 return VAR_3 + VAR_4;
}
