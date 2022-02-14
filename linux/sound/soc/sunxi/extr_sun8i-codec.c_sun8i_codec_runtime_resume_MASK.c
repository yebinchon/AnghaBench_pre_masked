
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_codec {int clk_module; int clk_bus; int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct sun8i_codec* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct sun8i_codec *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk_module);
 if (VAR_2) {
  FUNC_2(VAR_0, "Failed to enable the module clock\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->clk_bus);
 if (VAR_2) {
  FUNC_2(VAR_0, "Failed to enable the bus clock\n");
  goto err_disable_modclk;
 }

 FUNC_4(VAR_1->regmap, 0);

 VAR_2 = FUNC_5(VAR_1->regmap);
 if (VAR_2) {
  FUNC_2(VAR_0, "Failed to sync regmap cache\n");
  goto err_disable_clk;
 }

 return 0;

err_disable_clk:
 FUNC_0(VAR_1->clk_bus);

err_disable_modclk:
 FUNC_0(VAR_1->clk_module);

 return VAR_2;
}
