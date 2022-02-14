
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmic1_data_pin; void* poweroff_codec_in_suspend; void* in3_diff; void* in1_diff; } ;
struct rt5660_priv {TYPE_1__ pdata; } ;
struct device {int dummy; } ;


 void* FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct rt5660_priv *VAR_0, struct device *VAR_1)
{
 VAR_0->pdata.in1_diff = FUNC_0(VAR_1,
     "realtek,in1-differential");
 VAR_0->pdata.in3_diff = FUNC_0(VAR_1,
     "realtek,in3-differential");
 VAR_0->pdata.poweroff_codec_in_suspend = FUNC_0(VAR_1,
     "realtek,poweroff-in-suspend");
 FUNC_1(VAR_1, "realtek,dmic1-data-pin",
  &VAR_0->pdata.dmic1_data_pin);

 return 0;
}
