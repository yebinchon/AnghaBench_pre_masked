
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;



void FUNC_0(u8 *VAR_0, u16 VAR_1){
  VAR_0[0] = (u8)((VAR_1>>8) & 0xFF);
  VAR_0[1] = (u8)(VAR_1 & 0xFF);
}
