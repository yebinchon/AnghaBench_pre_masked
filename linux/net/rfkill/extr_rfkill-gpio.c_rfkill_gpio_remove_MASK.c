
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill_gpio_data {int rfkill_dev; } ;
struct platform_device {int dummy; } ;


 struct rfkill_gpio_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct rfkill_gpio_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->rfkill_dev);
 FUNC_1(VAR_1->rfkill_dev);

 return 0;
}
