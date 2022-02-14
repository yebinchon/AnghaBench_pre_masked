
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_latch_chip {int latch_enabled; int mutex; int latch_mutex; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct gpio_latch_chip *VAR_0, bool VAR_1)
{
 if (VAR_0->latch_enabled)
  FUNC_0(&VAR_0->latch_mutex);

 if (VAR_1)
  VAR_0->latch_enabled = 1;

 FUNC_0(&VAR_0->mutex);
}
