
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int in1_diff; int in2_diff; int lout1_diff; int lout2_diff; int lout3_diff; void* jd3_gpio; void* jd2_gpio; void* jd1_gpio; void* dmic2_clk_pin; int gpio_config; } ;
struct rt5677_priv {TYPE_1__ pdata; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,void**) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rt5677_priv *VAR_1,
  struct device *VAR_2)
{
 u32 VAR_3;

 VAR_1->pdata.in1_diff =
  FUNC_0(VAR_2, "IN1") ||
  FUNC_0(VAR_2, "realtek,in1-differential");

 VAR_1->pdata.in2_diff =
  FUNC_0(VAR_2, "IN2") ||
  FUNC_0(VAR_2, "realtek,in2-differential");

 VAR_1->pdata.lout1_diff =
  FUNC_0(VAR_2, "OUT1") ||
  FUNC_0(VAR_2, "realtek,lout1-differential");

 VAR_1->pdata.lout2_diff =
  FUNC_0(VAR_2, "OUT2") ||
  FUNC_0(VAR_2, "realtek,lout2-differential");

 VAR_1->pdata.lout3_diff =
  FUNC_0(VAR_2, "OUT3") ||
  FUNC_0(VAR_2, "realtek,lout3-differential");

 FUNC_2(VAR_2, "realtek,gpio-config",
          VAR_1->pdata.gpio_config,
          VAR_0);

 if (!FUNC_1(VAR_2, "DCLK", &VAR_3) ||
     !FUNC_1(VAR_2, "realtek,dmic2_clk_pin", &VAR_3))
  VAR_1->pdata.dmic2_clk_pin = VAR_3;

 if (!FUNC_1(VAR_2, "JD1", &VAR_3) ||
     !FUNC_1(VAR_2, "realtek,jd1-gpio", &VAR_3))
  VAR_1->pdata.jd1_gpio = VAR_3;

 if (!FUNC_1(VAR_2, "JD2", &VAR_3) ||
     !FUNC_1(VAR_2, "realtek,jd2-gpio", &VAR_3))
  VAR_1->pdata.jd2_gpio = VAR_3;

 if (!FUNC_1(VAR_2, "JD3", &VAR_3) ||
     !FUNC_1(VAR_2, "realtek,jd3-gpio", &VAR_3))
  VAR_1->pdata.jd3_gpio = VAR_3;
}
