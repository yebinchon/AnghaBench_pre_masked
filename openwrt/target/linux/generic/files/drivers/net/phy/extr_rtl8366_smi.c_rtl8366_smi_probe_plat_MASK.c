
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_smi {int hw_reset; int gpio_sck; int gpio_sda; } ;
struct rtl8366_platform_data {int hw_reset; int gpio_sck; int gpio_sda; } ;
struct TYPE_2__ {struct rtl8366_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;

int FUNC_1(struct platform_device *VAR_1, struct rtl8366_smi *VAR_2)
{
 struct rtl8366_platform_data *VAR_3 = VAR_1->dev.platform_data;

 if (!VAR_1->dev.platform_data) {
  FUNC_0(&VAR_1->dev, "no platform data specified\n");
  return -VAR_0;
 }

 VAR_2->gpio_sda = VAR_3->gpio_sda;
 VAR_2->gpio_sck = VAR_3->gpio_sck;
 VAR_2->hw_reset = VAR_3->hw_reset;

 return 0;
}
