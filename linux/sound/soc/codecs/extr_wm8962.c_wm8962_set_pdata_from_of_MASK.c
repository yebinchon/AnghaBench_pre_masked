
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wm8962_pdata {int spk_mono; int* gpio_init; int mclk; int mic_cfg; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (struct device_node const*,char*) ;
 scalar_t__ FUNC_3 (struct device_node const*,char*,int *) ;
 scalar_t__ FUNC_4 (struct device_node const*,char*,int*,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0,
        struct wm8962_pdata *VAR_1)
{
 const struct device_node *VAR_2 = VAR_0->dev.of_node;
 u32 VAR_3;
 int VAR_4;

 if (FUNC_2(VAR_2, "spk-mono"))
  VAR_1->spk_mono = 1;

 if (FUNC_3(VAR_2, "mic-cfg", &VAR_3) >= 0)
  VAR_1->mic_cfg = VAR_3;

 if (FUNC_4(VAR_2, "gpio-cfg", VAR_1->gpio_init,
           FUNC_0(VAR_1->gpio_init)) >= 0)
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->gpio_init); VAR_4++) {





   if (VAR_1->gpio_init[VAR_4] > 0xffff)
    VAR_1->gpio_init[VAR_4] = 0x0;
  }

 VAR_1->mclk = FUNC_1(&VAR_0->dev, ((void*)0));

 return 0;
}
