
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct msm8916_wcd_digital_priv {void* mclk; void* ahbclk; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0,
     struct msm8916_wcd_digital_priv *VAR_1)
{
 struct device *VAR_2 = &VAR_0->dev;

 VAR_1->ahbclk = FUNC_3(VAR_2, "ahbix-clk");
 if (FUNC_0(VAR_1->ahbclk)) {
  FUNC_2(VAR_2, "failed to get ahbix clk\n");
  return FUNC_1(VAR_1->ahbclk);
 }

 VAR_1->mclk = FUNC_3(VAR_2, "mclk");
 if (FUNC_0(VAR_1->mclk)) {
  FUNC_2(VAR_2, "failed to get mclk\n");
  return FUNC_1(VAR_1->mclk);
 }

 return 0;
}
