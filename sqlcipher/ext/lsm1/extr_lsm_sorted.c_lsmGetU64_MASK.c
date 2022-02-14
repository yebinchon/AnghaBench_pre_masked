
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;



u64 FUNC_0(u8 *VAR_0){
  return ((u64)VAR_0[0] << 56)
       + ((u64)VAR_0[1] << 48)
       + ((u64)VAR_0[2] << 40)
       + ((u64)VAR_0[3] << 32)
       + ((u64)VAR_0[4] << 24)
       + ((u32)VAR_0[5] << 16)
       + ((u32)VAR_0[6] << 8)
       + ((u32)VAR_0[7]);
}
