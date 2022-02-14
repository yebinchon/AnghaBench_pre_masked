
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_module {scalar_t__ state; } ;
struct sst_hsw {int dsp; } ;


 scalar_t__ VAR_0 ;
 struct sst_module* FUNC_0 (int ,int ) ;

bool FUNC_1(struct sst_hsw *VAR_1, u32 VAR_2)
{
 struct sst_module *VAR_3;

 VAR_3 = FUNC_0(VAR_1->dsp, VAR_2);
 if (VAR_3 == ((void*)0) || VAR_3->state == VAR_0)
  return 0;
 else
  return 1;
}
