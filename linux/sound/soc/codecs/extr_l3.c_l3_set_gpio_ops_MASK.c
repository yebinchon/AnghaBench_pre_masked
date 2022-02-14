
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l3_pins {int setmode; int gpio_mode; int setclk; int gpio_clk; int setdat; int gpio_data; int use_gpios; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct device *VAR_5, struct l3_pins *VAR_6)
{
 int VAR_7;

 if (!VAR_6->use_gpios)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_6->gpio_data,
    VAR_1, "l3_data");
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6->setdat = VAR_3;

 VAR_7 = FUNC_0(VAR_5, VAR_6->gpio_clk,
    VAR_1, "l3_clk");
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6->setclk = VAR_2;

 VAR_7 = FUNC_0(VAR_5, VAR_6->gpio_mode,
    VAR_1, "l3_mode");
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6->setmode = VAR_4;

 return 0;
}
