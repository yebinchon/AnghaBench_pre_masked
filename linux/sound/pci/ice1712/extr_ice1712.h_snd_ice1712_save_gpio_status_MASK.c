
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_mask; int * saved; int direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; int gpio_mutex; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct snd_ice1712 *VAR_0)
{
 FUNC_0(&VAR_0->gpio_mutex);
 VAR_0->gpio.saved[0] = VAR_0->gpio.direction;
 VAR_0->gpio.saved[1] = VAR_0->gpio.write_mask;
}
