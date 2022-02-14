
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



const char * FUNC_0(ut8 VAR_0, char * VAR_1)
{
 static const char * VAR_2[4] = {
  "*cdp", "*cdp+", "*cdp-", "*(cdp+t0)",
 };

 return VAR_2[ VAR_0 & 3 ];
}
