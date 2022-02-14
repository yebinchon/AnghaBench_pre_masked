
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_asoc_utils_data {int set_baseclock; int set_mclk; int dev; int clk_cdev1; int clk_pll_a_out0; int clk_pll_a; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(struct tegra_asoc_utils_data *VAR_0)
{
 const int VAR_1 = 73728000;
 const int VAR_2 = 24576000;
 int VAR_3;

 FUNC_0(VAR_0->clk_cdev1);
 FUNC_0(VAR_0->clk_pll_a_out0);
 FUNC_0(VAR_0->clk_pll_a);





 VAR_3 = FUNC_2(VAR_0->clk_pll_a, VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_0->dev, "Can't set pll_a rate: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_0->clk_pll_a_out0, VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_0->dev, "Can't set pll_a_out0 rate: %d\n", VAR_3);
  return VAR_3;
 }



 VAR_3 = FUNC_1(VAR_0->clk_pll_a);
 if (VAR_3) {
  FUNC_3(VAR_0->dev, "Can't enable pll_a: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_0->clk_pll_a_out0);
 if (VAR_3) {
  FUNC_3(VAR_0->dev, "Can't enable pll_a_out0: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_0->clk_cdev1);
 if (VAR_3) {
  FUNC_3(VAR_0->dev, "Can't enable cdev1: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_0->set_baseclock = VAR_1;
 VAR_0->set_mclk = VAR_2;

 return 0;
}
