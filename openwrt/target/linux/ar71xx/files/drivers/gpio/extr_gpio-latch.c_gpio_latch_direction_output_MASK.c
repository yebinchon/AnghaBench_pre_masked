
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_latch_chip {int* gpios; int le_gpio; int le_active_low; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct gpio_latch_chip*,int) ;
 int FUNC_2 (struct gpio_latch_chip*,int) ;
 struct gpio_latch_chip* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int
FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct gpio_latch_chip *VAR_3 = FUNC_3(VAR_0);
 bool VAR_4 = 0;
 bool VAR_5 = 0;
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->gpios[VAR_1];

 if (VAR_6 == VAR_3->le_gpio) {
  VAR_4 = VAR_2 ^ VAR_3->le_active_low;
  VAR_5 = !VAR_4;
 }

 FUNC_1(VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_6, VAR_2);
 FUNC_2(VAR_3, VAR_5);

 return VAR_7;
}
