
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* get_data ) (struct snd_ice1712*) ;int (* set_dir ) (struct snd_ice1712*,int) ;int (* set_mask ) (struct snd_ice1712*,int) ;int (* set_data ) (struct snd_ice1712*,unsigned int) ;} ;
struct snd_ice1712 {int gpio_mutex; TYPE_1__ gpio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int) ;
 int FUNC_3 (struct snd_ice1712*,int) ;
 int FUNC_4 (struct snd_ice1712*,unsigned int) ;
 unsigned int FUNC_5 (struct snd_ice1712*) ;
 int FUNC_6 (struct snd_ice1712*,unsigned int) ;
 int FUNC_7 (struct snd_ice1712*,unsigned int) ;
 int FUNC_8 (struct snd_ice1712*,unsigned int) ;
 int FUNC_9 (struct snd_ice1712*,unsigned int) ;
 int FUNC_10 (struct snd_ice1712*,unsigned int) ;
 int FUNC_11 (struct snd_ice1712*,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct snd_ice1712 *VAR_2, unsigned int VAR_3,
  unsigned int VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(&VAR_2->gpio_mutex);


 VAR_5 = 0x00ffff;
 VAR_2->gpio.set_dir(VAR_2, VAR_5);

 VAR_2->gpio.set_mask(VAR_2, ~(VAR_5));

 VAR_5 = VAR_2->gpio.get_data(VAR_2);
 VAR_5 &= ~VAR_0;
 VAR_5 |= VAR_4;
 VAR_2->gpio.set_data(VAR_2, VAR_5);
 FUNC_12(100);

 VAR_5 &= ~VAR_1;
 VAR_2->gpio.set_data(VAR_2, VAR_5);
 FUNC_12(100);

 VAR_5 &= ~VAR_3;
 VAR_2->gpio.set_data(VAR_2, VAR_5);
 FUNC_12(100);

 VAR_5 |= VAR_3;
 VAR_2->gpio.set_data(VAR_2, VAR_5);
 FUNC_12(100);


 VAR_5 |= VAR_0;
 VAR_2->gpio.set_data(VAR_2, VAR_5);

 VAR_2->gpio.set_mask(VAR_2, 0xffffff);

 VAR_2->gpio.set_dir(VAR_2, 0x00ff00);
 FUNC_1(&VAR_2->gpio_mutex);
}
