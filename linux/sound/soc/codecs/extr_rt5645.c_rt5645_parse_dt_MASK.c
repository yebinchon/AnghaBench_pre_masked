
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jd_mode; int dmic2_data_pin; int dmic1_data_pin; int in2_diff; } ;
struct rt5645_priv {TYPE_1__ pdata; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct rt5645_priv *VAR_0, struct device *VAR_1)
{
 VAR_0->pdata.in2_diff = FUNC_0(VAR_1,
  "realtek,in2-differential");
 FUNC_1(VAR_1,
  "realtek,dmic1-data-pin", &VAR_0->pdata.dmic1_data_pin);
 FUNC_1(VAR_1,
  "realtek,dmic2-data-pin", &VAR_0->pdata.dmic2_data_pin);
 FUNC_1(VAR_1,
  "realtek,jd-mode", &VAR_0->pdata.jd_mode);

 return 0;
}
