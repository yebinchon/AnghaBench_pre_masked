
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, unsigned VAR_1){
  if( VAR_1<0x00080 ){
    VAR_0[0] = (unsigned char)(VAR_1&0xff);
    return 1;
  }
  if( VAR_1<0x00800 ){
    VAR_0[0] = 0xC0 + (unsigned char)((VAR_1>>6)&0x1F);
    VAR_0[1] = 0x80 + (unsigned char)(VAR_1 & 0x3F);
    return 2;
  }
  if( VAR_1<0x10000 ){
    VAR_0[0] = 0xE0 + (unsigned char)((VAR_1>>12)&0x0F);
    VAR_0[1] = 0x80 + (unsigned char)((VAR_1>>6) & 0x3F);
    VAR_0[2] = 0x80 + (unsigned char)(VAR_1 & 0x3F);
    return 3;
  }
  VAR_0[0] = 0xF0 + (unsigned char)((VAR_1>>18) & 0x07);
  VAR_0[1] = 0x80 + (unsigned char)((VAR_1>>12) & 0x3F);
  VAR_0[2] = 0x80 + (unsigned char)((VAR_1>>6) & 0x3F);
  VAR_0[3] = 0x80 + (unsigned char)(VAR_1 & 0x3F);
  return 4;
}
