
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_codec {int clk_bus; int clk_module; int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sun8i_codec* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct sun8i_codec *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->regmap, 1);
 FUNC_3(VAR_1->regmap);

 FUNC_0(VAR_1->clk_module);
 FUNC_0(VAR_1->clk_bus);

 return 0;
}
