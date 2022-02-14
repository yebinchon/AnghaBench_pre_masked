
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_i2s_dev {unsigned int fmt; int clk_prepared; int clk; } ;




 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bcm2835_i2s_dev *VAR_1)
{
 unsigned int VAR_2 = VAR_1->fmt & VAR_0;

 if (VAR_1->clk_prepared)
  return;

 switch (VAR_2) {
 case 128:
 case 129:
  FUNC_0(VAR_1->clk);
  VAR_1->clk_prepared = 1;
  break;
 default:
  break;
 }
}
