
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct wm8903_platform_data {int* gpio_cfg; void* micdet_delay; void* micdet_cfg; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int,int) ;
 scalar_t__ FUNC_2 (struct device_node const*,char*,void**) ;
 scalar_t__ FUNC_3 (struct device_node const*,char*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2,
        struct wm8903_platform_data *VAR_3)
{
 const struct device_node *VAR_4 = VAR_2->dev.of_node;
 u32 VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_4, "micdet-cfg", &VAR_5) >= 0)
  VAR_3->micdet_cfg = VAR_5;

 if (FUNC_2(VAR_4, "micdet-delay", &VAR_5) >= 0)
  VAR_3->micdet_delay = VAR_5;

 if (FUNC_3(VAR_4, "gpio-cfg", VAR_3->gpio_cfg,
           FUNC_0(VAR_3->gpio_cfg)) >= 0) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->gpio_cfg); VAR_6++) {
   if (VAR_3->gpio_cfg[VAR_6] == 0) {
    VAR_3->gpio_cfg[VAR_6] = VAR_1;
   } else if (VAR_3->gpio_cfg[VAR_6] == 0xffffffff) {
    VAR_3->gpio_cfg[VAR_6] = 0;
   } else if (VAR_3->gpio_cfg[VAR_6] > 0x7fff) {
    FUNC_1(&VAR_2->dev, "Invalid gpio-cfg[%d] %x\n",
     VAR_6, VAR_3->gpio_cfg[VAR_6]);
    return -VAR_0;
   }
  }
 }

 return 0;
}
