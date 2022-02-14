
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_pdm_dev {int dev; int hclk; int clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct rk_pdm_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct rk_pdm_dev *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "clock enable failed %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_1->hclk);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "hclock enable failed %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
