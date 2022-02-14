
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_keys_platform_data {int poll_interval; } ;
struct gpio_keys_button_dev {int work; struct gpio_keys_platform_data* pdata; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct gpio_keys_button_dev *VAR_1)
{
 struct gpio_keys_platform_data *VAR_2 = VAR_1->pdata;
 unsigned long VAR_3 = FUNC_0(VAR_2->poll_interval);

 if (VAR_3 >= VAR_0)
  VAR_3 = FUNC_1(VAR_3);
 FUNC_2(&VAR_1->work, VAR_3);
}
