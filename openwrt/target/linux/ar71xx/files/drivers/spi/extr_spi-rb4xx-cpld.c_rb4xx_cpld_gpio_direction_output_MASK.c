
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb4xx_cpld {int lock; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct rb4xx_cpld*,int,int) ;
 struct rb4xx_cpld* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0,
         unsigned VAR_1,
         int VAR_2)
{
 struct rb4xx_cpld *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3, (1 << VAR_1), !!VAR_2 << VAR_1);
 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
