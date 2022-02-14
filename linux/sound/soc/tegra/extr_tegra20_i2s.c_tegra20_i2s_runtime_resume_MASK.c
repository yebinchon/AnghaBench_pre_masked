
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra20_i2s {int clk_i2s; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct tegra20_i2s* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct tegra20_i2s *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk_i2s);
 if (VAR_2) {
  FUNC_1(VAR_0, "clk_enable failed: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
