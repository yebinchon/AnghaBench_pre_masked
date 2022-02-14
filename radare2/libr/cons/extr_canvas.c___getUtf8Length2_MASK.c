
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1, int VAR_2) {
 int VAR_3 = 0, VAR_4 = 0;
 while (VAR_1 > -1 && VAR_3 < VAR_2 && VAR_0[VAR_3]) {
  if (FUNC_0 (VAR_0 + VAR_3, VAR_2 - VAR_3)) {
   VAR_4++;
  }
  if ((VAR_0[VAR_3] & 0xc0) != 0x80) {
   VAR_1--;
  }
  VAR_3++;
 }
 VAR_3 -= VAR_4;
 return VAR_1 == -1 ? VAR_3 - 1 : VAR_3;
}
