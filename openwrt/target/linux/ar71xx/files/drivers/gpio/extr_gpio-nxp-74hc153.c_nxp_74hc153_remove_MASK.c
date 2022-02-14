
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nxp_74hc153_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct nxp_74hc153_platform_data {int gpio_pin_s0; int gpio_pin_s1; int gpio_pin_1y; int gpio_pin_2y; } ;
struct nxp_74hc153_chip {int gpio_chip; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nxp_74hc153_chip*) ;
 struct nxp_74hc153_chip* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct nxp_74hc153_chip *VAR_1 = FUNC_3(VAR_0);
 struct nxp_74hc153_platform_data *VAR_2 = VAR_0->dev.platform_data;

 if (VAR_1) {
  FUNC_1(&VAR_1->gpio_chip);
  FUNC_0(VAR_2->gpio_pin_2y);
  FUNC_0(VAR_2->gpio_pin_1y);
  FUNC_0(VAR_2->gpio_pin_s1);
  FUNC_0(VAR_2->gpio_pin_s0);

  FUNC_2(VAR_1);
  FUNC_4(VAR_0, ((void*)0));
 }

 return 0;
}
