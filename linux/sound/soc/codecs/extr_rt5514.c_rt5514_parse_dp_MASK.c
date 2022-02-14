
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dsp_calib_clk_rate; int dsp_calib_clk_name; int dmic_init_delay; } ;
struct rt5514_priv {TYPE_1__ pdata; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int *) ;
 int FUNC_1 (struct device*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct rt5514_priv *VAR_0, struct device *VAR_1)
{
 FUNC_1(VAR_1, "realtek,dmic-init-delay-ms",
  &VAR_0->pdata.dmic_init_delay);
 FUNC_0(VAR_1, "realtek,dsp-calib-clk-name",
  &VAR_0->pdata.dsp_calib_clk_name);
 FUNC_1(VAR_1, "realtek,dsp-calib-clk-rate",
  &VAR_0->pdata.dsp_calib_clk_rate);

 return 0;
}
