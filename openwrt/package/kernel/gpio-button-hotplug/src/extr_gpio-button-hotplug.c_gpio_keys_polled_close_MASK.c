
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_keys_platform_data {int (* disable ) (int ) ;} ;
struct gpio_keys_button_dev {int dev; int work; struct gpio_keys_platform_data* pdata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gpio_keys_button_dev *VAR_0)
{
 struct gpio_keys_platform_data *VAR_1 = VAR_0->pdata;

 FUNC_0(&VAR_0->work);

 if (VAR_1->disable)
  VAR_1->disable(VAR_0->dev);
}
