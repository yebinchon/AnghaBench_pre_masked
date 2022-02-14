
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0, char *VAR_1){
  static const char VAR_2[] =
    "0123456789"
    "ABCDEFGHIJ"
    "KLMNOPQRST"
    "UVWXYZ^abc"
    "defghijklm"
    "nopqrstuvw"
    "xyz~";
  VAR_1[0] = VAR_2[(VAR_0>>18)&0x3f];
  VAR_1[1] = VAR_2[(VAR_0>>12)&0x3f];
  VAR_1[2] = VAR_2[(VAR_0>>6)&0x3f];
  VAR_1[3] = VAR_2[VAR_0&0x3f];
}
