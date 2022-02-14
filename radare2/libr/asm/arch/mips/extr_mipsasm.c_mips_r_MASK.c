
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static int FUNC_0(ut8 *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {



 if (VAR_2 == -1 || VAR_3 == -1) {
  return -1;
 }
 VAR_0[3] = ((VAR_1<<2)&0xfc) | ((VAR_2>>3)&3);
 VAR_0[2] = (VAR_2<<5) | (VAR_3&0x1f);
 VAR_0[1] = ((VAR_4<<3)&0xff) | (VAR_5>>2);
 VAR_0[0] = (VAR_6&0x3f) | ((VAR_5&3)<<6);
 return 4;
}
