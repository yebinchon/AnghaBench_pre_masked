
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1) {
 int VAR_2 = VAR_0 >> VAR_1;
 if (VAR_2 == 0) {
  return 0xff;
 }


 int VAR_3 = 0x400;
 while (!(VAR_3 & VAR_2) && VAR_2 != 0 && VAR_3 != 0) {
  VAR_3 = VAR_3 >> 1;
 }
 VAR_3 = VAR_3 & (VAR_3 - 1);
 VAR_2 = VAR_2 ^ VAR_3;

 if (FUNC_0(VAR_0) > VAR_1) {
  VAR_2--;
 }
 return 0xff & (0xff - VAR_2);
}
