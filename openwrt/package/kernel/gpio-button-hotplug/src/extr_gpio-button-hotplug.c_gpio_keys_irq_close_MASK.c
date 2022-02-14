
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_keys_platform_data {size_t nbuttons; } ;
struct gpio_keys_button_dev {struct gpio_keys_button_data* data; struct gpio_keys_platform_data* pdata; } ;
struct gpio_keys_button_data {int work; int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gpio_keys_button_dev *VAR_0)
{
 struct gpio_keys_platform_data *VAR_1 = VAR_0->pdata;
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nbuttons; VAR_2++) {
  struct gpio_keys_button_data *VAR_3 = &VAR_0->data[VAR_2];

  FUNC_1(VAR_3->irq);
  FUNC_0(&VAR_3->work);
 }
}
