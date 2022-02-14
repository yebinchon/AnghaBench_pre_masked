
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_keys_button_data {int software_debounce; int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct gpio_keys_button_data *VAR_4 =
  (struct gpio_keys_button_data *) VAR_3;

 FUNC_0(VAR_1, &VAR_4->work,
    FUNC_1(VAR_4->software_debounce));

 return VAR_0;
}
