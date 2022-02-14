
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniperif {void* valid_sel; void* clk_sel; int id; } ;
struct regmap {int dummy; } ;
struct reg_field {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct reg_field FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 void* FUNC_4 (struct regmap*,struct reg_field) ;
 struct regmap* FUNC_5 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1,
       struct uniperif *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct regmap *VAR_4;
 struct reg_field VAR_5[2] = {

  FUNC_2(VAR_0,
     8 + VAR_2->id,
     8 + VAR_2->id),

  FUNC_2(VAR_0, 0, 1)
 };

 VAR_4 = FUNC_5(VAR_3, "st,syscfg");

 if (FUNC_0(VAR_4)) {
  FUNC_3(&VAR_1->dev, "sti-audio-clk-glue syscf not found\n");
  return FUNC_1(VAR_4);
 }

 VAR_2->clk_sel = FUNC_4(VAR_4, VAR_5[0]);
 VAR_2->valid_sel = FUNC_4(VAR_4, VAR_5[1]);

 return 0;
}
