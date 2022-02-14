
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



void FUNC_0(u8 *VAR_0, int VAR_1){
  VAR_0[0] = (VAR_1>>24) & 0x00FF;
  VAR_0[1] = (VAR_1>>16) & 0x00FF;
  VAR_0[2] = (VAR_1>> 8) & 0x00FF;
  VAR_0[3] = (VAR_1>> 0) & 0x00FF;
}
