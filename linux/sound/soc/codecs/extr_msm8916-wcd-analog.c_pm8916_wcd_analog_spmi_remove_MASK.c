
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8916_wcd_analog_priv {int mclk; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct pm8916_wcd_analog_priv* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct pm8916_wcd_analog_priv *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1->mclk);

 return 0;
}
