
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_pdm_dev {int hclk; int clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rk_pdm_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct rk_pdm_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk);
 FUNC_0(VAR_1->hclk);

 return 0;
}
