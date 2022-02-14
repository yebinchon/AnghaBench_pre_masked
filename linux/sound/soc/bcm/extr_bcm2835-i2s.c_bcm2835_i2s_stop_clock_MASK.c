
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_i2s_dev {int clk_prepared; int clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bcm2835_i2s_dev *VAR_0)
{
 if (VAR_0->clk_prepared)
  FUNC_0(VAR_0->clk);
 VAR_0->clk_prepared = 0;
}
