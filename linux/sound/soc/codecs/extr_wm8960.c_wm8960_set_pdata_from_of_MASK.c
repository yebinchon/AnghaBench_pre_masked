
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8960_data {int capless; int shared_lrclk; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node const*,char*) ;

__attribute__((used)) static void FUNC_1(struct i2c_client *VAR_0,
    struct wm8960_data *VAR_1)
{
 const struct device_node *VAR_2 = VAR_0->dev.of_node;

 if (FUNC_0(VAR_2, "wlf,capless"))
  VAR_1->capless = 1;

 if (FUNC_0(VAR_2, "wlf,shared-lrclk"))
  VAR_1->shared_lrclk = 1;
}
