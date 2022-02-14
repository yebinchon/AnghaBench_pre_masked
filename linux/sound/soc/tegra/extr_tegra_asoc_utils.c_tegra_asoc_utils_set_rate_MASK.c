
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_asoc_utils_data {int set_baseclock; int set_mclk; int dev; int clk_cdev1; int clk_pll_a_out0; int clk_pll_a; int soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(struct tegra_asoc_utils_data *VAR_3, int VAR_4,
         int VAR_5)
{
 int VAR_6;
 bool VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 11025:
 case 22050:
 case 44100:
 case 88200:
  if (VAR_3->soc == VAR_1)
   VAR_6 = 56448000;
  else if (VAR_3->soc == VAR_2)
   VAR_6 = 564480000;
  else
   VAR_6 = 282240000;
  break;
 case 8000:
 case 16000:
 case 32000:
 case 48000:
 case 64000:
 case 96000:
  if (VAR_3->soc == VAR_1)
   VAR_6 = 73728000;
  else if (VAR_3->soc == VAR_2)
   VAR_6 = 552960000;
  else
   VAR_6 = 368640000;
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = ((VAR_6 != VAR_3->set_baseclock) ||
   (VAR_5 != VAR_3->set_mclk));
 if (!VAR_7)
  return 0;

 VAR_3->set_baseclock = 0;
 VAR_3->set_mclk = 0;

 FUNC_0(VAR_3->clk_cdev1);
 FUNC_0(VAR_3->clk_pll_a_out0);
 FUNC_0(VAR_3->clk_pll_a);

 VAR_8 = FUNC_2(VAR_3->clk_pll_a, VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_3->dev, "Can't set pll_a rate: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_3->clk_pll_a_out0, VAR_5);
 if (VAR_8) {
  FUNC_3(VAR_3->dev, "Can't set pll_a_out0 rate: %d\n", VAR_8);
  return VAR_8;
 }



 VAR_8 = FUNC_1(VAR_3->clk_pll_a);
 if (VAR_8) {
  FUNC_3(VAR_3->dev, "Can't enable pll_a: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_3->clk_pll_a_out0);
 if (VAR_8) {
  FUNC_3(VAR_3->dev, "Can't enable pll_a_out0: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_3->clk_cdev1);
 if (VAR_8) {
  FUNC_3(VAR_3->dev, "Can't enable cdev1: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_3->set_baseclock = VAR_6;
 VAR_3->set_mclk = VAR_5;

 return 0;
}
