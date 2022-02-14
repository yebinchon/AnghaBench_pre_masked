
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(void){
  static unsigned int VAR_0 = 0x333a13cd;
  static unsigned int VAR_1 = 0xecb2adea;
  VAR_0 = (VAR_0>>1) ^ ((1+~(VAR_0&1)) & 0xd0000001);
  VAR_1 = VAR_1*1103515245 + 12345;
  return VAR_0^VAR_1;
}
