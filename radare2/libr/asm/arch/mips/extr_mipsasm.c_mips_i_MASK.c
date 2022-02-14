
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static int FUNC_0(ut8 *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 if (VAR_2 == -1 || VAR_3 == -1) {
  return -1;
 }
 if (VAR_5) {
  if (VAR_4 > 4) {
   VAR_4 /= 4;
   VAR_4--;
  } else {
   VAR_4 = 0;
  }
 }
 VAR_0[3] = ((VAR_1<<2)&0xfc) | ((VAR_2>>3)&3);
 VAR_0[2] = (VAR_2<<5) | (VAR_3);
 VAR_0[1] = (VAR_4>>8) &0xff;
 VAR_0[0] = VAR_4 & 0xff;
 return 4;
}
