
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



const char * FUNC_0(ut8 VAR_0, char * VAR_1)
{
 static const char * VAR_2[16] = {
  "ac0", "ac1", "ac2", "ac3", "t0", "t1", "t2", "t3",
  "ar0", "ar1", "ar2", "ar3", "ar4", "ar5", "ar6", "ar7",
 };

 return VAR_2[ VAR_0 & 15 ];
}
