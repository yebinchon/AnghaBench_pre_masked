
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ldo1_en; int jd_src; int dmic1_clk_pin; int dmic1_data_pin; } ;
struct rt5668_priv {TYPE_1__ pdata; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct rt5668_priv *VAR_0, struct device *VAR_1)
{

 FUNC_1(VAR_1->of_node, "realtek,dmic1-data-pin",
  &VAR_0->pdata.dmic1_data_pin);
 FUNC_1(VAR_1->of_node, "realtek,dmic1-clk-pin",
  &VAR_0->pdata.dmic1_clk_pin);
 FUNC_1(VAR_1->of_node, "realtek,jd-src",
  &VAR_0->pdata.jd_src);

 VAR_0->pdata.ldo1_en = FUNC_0(VAR_1->of_node,
  "realtek,ldo1-en-gpios", 0);

 return 0;
}
