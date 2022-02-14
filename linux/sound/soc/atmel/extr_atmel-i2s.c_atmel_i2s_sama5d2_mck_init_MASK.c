
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct atmel_i2s_dev {int gclk; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 struct clk* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct atmel_i2s_dev *VAR_1,
          struct device_node *VAR_2)
{
 struct clk *VAR_3;
 int VAR_4;

 if (!VAR_1->gclk)
  return 0;


 VAR_3 = FUNC_4(VAR_1->dev, "muxclk");
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == -VAR_0)
   return -VAR_0;
  FUNC_3(VAR_1->dev,
    "failed to get the I2S clock control: %d\n", VAR_4);
  return 0;
 }

 return FUNC_2(VAR_3, VAR_1->gclk);
}
