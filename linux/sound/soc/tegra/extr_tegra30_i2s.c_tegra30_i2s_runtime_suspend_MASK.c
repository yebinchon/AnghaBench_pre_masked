
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra30_i2s {int clk_i2s; int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tegra30_i2s* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct tegra30_i2s *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->regmap, 1);

 FUNC_0(VAR_1->clk_i2s);

 return 0;
}
