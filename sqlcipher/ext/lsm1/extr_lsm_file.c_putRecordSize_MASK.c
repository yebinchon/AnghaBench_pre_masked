
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, int VAR_1, int VAR_2){
  VAR_0[0] = (u8)(VAR_1 >> 14) | 0x80;
  VAR_0[1] = ((u8)(VAR_1 >> 7) & 0x7F) | (VAR_2 ? 0x00 : 0x80);
  VAR_0[2] = (u8)VAR_1 | 0x80;
}
