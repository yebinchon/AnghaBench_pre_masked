
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ nVal ;



void FUNC_0(u8 *VAR_0, u64 VAR_1){
  VAR_0[0] = (u8)((VAR_1>>56) & 0xFF);
  VAR_0[1] = (u8)((VAR_1>>48) & 0xFF);
  VAR_0[2] = (u8)((VAR_1>>40) & 0xFF);
  VAR_0[3] = (u8)((VAR_1>>32) & 0xFF);
  VAR_0[4] = (u8)((VAR_1>>24) & 0xFF);
  VAR_0[5] = (u8)((VAR_1>>16) & 0xFF);
  VAR_0[6] = (u8)((VAR_1>> 8) & 0xFF);
  VAR_0[7] = (u8)((VAR_1 ) & 0xFF);
}
