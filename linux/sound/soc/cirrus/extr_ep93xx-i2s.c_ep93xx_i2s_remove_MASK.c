
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ep93xx_i2s_info {int mclk; int sclk; int lrclk; } ;


 int FUNC_0 (int ) ;
 struct ep93xx_i2s_info* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct ep93xx_i2s_info *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1->lrclk);
 FUNC_0(VAR_1->sclk);
 FUNC_0(VAR_1->mclk);
 return 0;
}
