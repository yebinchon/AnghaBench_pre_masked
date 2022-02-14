
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_hsw {int enabled_modules_rtd3; } ;



void FUNC_0(struct sst_hsw *VAR_0, u32 VAR_1)
{
 VAR_0->enabled_modules_rtd3 &= ~(1 << VAR_1);
}
