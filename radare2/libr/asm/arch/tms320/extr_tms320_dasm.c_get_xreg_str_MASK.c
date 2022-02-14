
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



const char * FUNC_0(ut8 VAR_0, char * VAR_1)
{
 static const char * VAR_2[16] = {
  "ac0", "ac1", "ac2", "ac3", "xsp", "xssp", "xdp", "xcdp",
  "xar0", "xar1", "xar2", "xar3", "xar4", "xar5", "xar6", "xar7",
 };

 return VAR_2[ VAR_0 & 15 ];
}
