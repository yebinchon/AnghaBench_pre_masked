
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_asoc_utils_data {void* clk_pll_a; void* clk_pll_a_out0; void* clk_cdev1; struct device* dev; int soc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (struct tegra_asoc_utils_data*,int,int) ;

int FUNC_7(struct tegra_asoc_utils_data *VAR_5,
     struct device *VAR_6)
{
 int VAR_7;

 VAR_5->dev = VAR_6;

 if (FUNC_5("nvidia,tegra20"))
  VAR_5->soc = VAR_3;
 else if (FUNC_5("nvidia,tegra30"))
  VAR_5->soc = VAR_4;
 else if (FUNC_5("nvidia,tegra114"))
  VAR_5->soc = VAR_1;
 else if (FUNC_5("nvidia,tegra124"))
  VAR_5->soc = VAR_2;
 else {
  FUNC_4(VAR_5->dev, "SoC unknown to Tegra ASoC utils\n");
  return -VAR_0;
 }

 VAR_5->clk_pll_a = FUNC_2(VAR_6, "pll_a");
 if (FUNC_0(VAR_5->clk_pll_a)) {
  FUNC_4(VAR_5->dev, "Can't retrieve clk pll_a\n");
  VAR_7 = FUNC_1(VAR_5->clk_pll_a);
  goto err;
 }

 VAR_5->clk_pll_a_out0 = FUNC_2(VAR_6, "pll_a_out0");
 if (FUNC_0(VAR_5->clk_pll_a_out0)) {
  FUNC_4(VAR_5->dev, "Can't retrieve clk pll_a_out0\n");
  VAR_7 = FUNC_1(VAR_5->clk_pll_a_out0);
  goto err_put_pll_a;
 }

 VAR_5->clk_cdev1 = FUNC_2(VAR_6, "mclk");
 if (FUNC_0(VAR_5->clk_cdev1)) {
  FUNC_4(VAR_5->dev, "Can't retrieve clk cdev1\n");
  VAR_7 = FUNC_1(VAR_5->clk_cdev1);
  goto err_put_pll_a_out0;
 }

 VAR_7 = FUNC_6(VAR_5, 44100, 256 * 44100);
 if (VAR_7)
  goto err_put_cdev1;

 return 0;

err_put_cdev1:
 FUNC_3(VAR_5->clk_cdev1);
err_put_pll_a_out0:
 FUNC_3(VAR_5->clk_pll_a_out0);
err_put_pll_a:
 FUNC_3(VAR_5->clk_pll_a);
err:
 return VAR_7;
}
