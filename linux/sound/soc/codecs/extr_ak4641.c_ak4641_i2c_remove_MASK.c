
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ak4641_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct ak4641_platform_data {int gpio_npdn; int gpio_power; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct ak4641_platform_data *VAR_1 = VAR_0->dev.platform_data;

 if (VAR_1) {
  if (FUNC_1(VAR_1->gpio_power)) {
   FUNC_2(VAR_1->gpio_power, 0);
   FUNC_0(VAR_1->gpio_power);
  }
  if (FUNC_1(VAR_1->gpio_npdn))
   FUNC_0(VAR_1->gpio_npdn);
 }

 return 0;
}
