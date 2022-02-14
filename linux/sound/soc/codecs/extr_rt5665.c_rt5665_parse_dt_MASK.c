
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ldo1_en; int jd_src; int dmic2_data_pin; int dmic1_data_pin; void* in4_diff; void* in3_diff; void* in2_diff; void* in1_diff; } ;
struct rt5665_priv {TYPE_1__ pdata; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ,char*,int ) ;
 void* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct rt5665_priv *VAR_0, struct device *VAR_1)
{
 VAR_0->pdata.in1_diff = FUNC_1(VAR_1->of_node,
     "realtek,in1-differential");
 VAR_0->pdata.in2_diff = FUNC_1(VAR_1->of_node,
     "realtek,in2-differential");
 VAR_0->pdata.in3_diff = FUNC_1(VAR_1->of_node,
     "realtek,in3-differential");
 VAR_0->pdata.in4_diff = FUNC_1(VAR_1->of_node,
     "realtek,in4-differential");

 FUNC_2(VAR_1->of_node, "realtek,dmic1-data-pin",
  &VAR_0->pdata.dmic1_data_pin);
 FUNC_2(VAR_1->of_node, "realtek,dmic2-data-pin",
  &VAR_0->pdata.dmic2_data_pin);
 FUNC_2(VAR_1->of_node, "realtek,jd-src",
  &VAR_0->pdata.jd_src);

 VAR_0->pdata.ldo1_en = FUNC_0(VAR_1->of_node,
  "realtek,ldo1-en-gpios", 0);

 return 0;
}
