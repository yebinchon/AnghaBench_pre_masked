
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



u64 FUNC_0(u64 VAR_0, u64 VAR_1, int VAR_2,
   u64 (*VAR_3)(u64))
{
 u64 VAR_4 = (VAR_0 & VAR_1) >> VAR_2;

 VAR_4 = VAR_3(VAR_4) << VAR_2;
 return (VAR_0 & ~VAR_1) | VAR_4;
}
