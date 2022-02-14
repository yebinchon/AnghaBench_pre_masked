
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static int FUNC_0(ut8 *VAR_0, int VAR_1, int VAR_2) {
 VAR_2 /= 4;
 VAR_0[3] = ((VAR_1<<2)&0xfc) | ((VAR_2>>24)&3);
 VAR_0[2] = (VAR_2>>16)&0xff;
 VAR_0[1] = (VAR_2>>8) &0xff;
 VAR_0[0] = VAR_2 & 0xff;
 return 4;
}
