
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* get_dir ) (struct snd_ice1712*) ;unsigned int (* get_data ) (struct snd_ice1712*) ;int (* set_dir ) (struct snd_ice1712*,unsigned int) ;int (* set_mask ) (struct snd_ice1712*,int) ;int (* set_data ) (struct snd_ice1712*,unsigned int) ;} ;
struct snd_ice1712 {TYPE_1__ gpio; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int) ;
 int FUNC_3 (struct snd_ice1712*,int) ;
 int FUNC_4 (struct snd_ice1712*,unsigned int) ;
 int FUNC_5 (struct snd_ice1712*,unsigned int) ;
 int FUNC_6 (struct snd_ice1712*,unsigned int) ;
 unsigned int FUNC_7 (struct snd_ice1712*) ;
 int FUNC_8 (struct snd_ice1712*,unsigned int) ;
 int FUNC_9 (struct snd_ice1712*,unsigned int) ;
 int FUNC_10 (struct snd_ice1712*,unsigned int) ;
 int FUNC_11 (struct snd_ice1712*,unsigned int) ;
 int FUNC_12 (struct snd_ice1712*,unsigned int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct snd_akm4xxx *VAR_6, int VAR_7,
  unsigned char VAR_8, unsigned char VAR_9)
{
 unsigned int VAR_10, VAR_11;
 int VAR_12;
 unsigned int VAR_13;
 struct snd_ice1712 *VAR_14 = VAR_6->private_data[0];

 if (FUNC_0(VAR_7 < 0 || VAR_7 >= 4))
  return;


 VAR_11 = VAR_14->gpio.get_dir(VAR_14);
 VAR_14->gpio.set_dir(VAR_14, VAR_11 | VAR_3);

 VAR_14->gpio.set_mask(VAR_14, ~VAR_3);

 VAR_10 = VAR_14->gpio.get_data(VAR_14);

 VAR_10 |= VAR_3;
 VAR_14->gpio.set_data(VAR_14, VAR_10);
 FUNC_13(100);

 if (VAR_7)

  VAR_10 &= ~VAR_5;
 else
  VAR_10 &= ~VAR_4;
 VAR_14->gpio.set_data(VAR_14, VAR_10);
 FUNC_13(100);


 VAR_13 = (VAR_0 << 6) | 0x20 | (VAR_8 & 0x1f);
 VAR_13 = (VAR_13 << 8) | VAR_9;
 for (VAR_12 = 15; VAR_12 >= 0; VAR_12--) {

  VAR_10 &= ~VAR_2;
  VAR_14->gpio.set_data(VAR_14, VAR_10);
  FUNC_13(100);

  if (VAR_13 & (1 << VAR_12))
   VAR_10 |= VAR_1;
  else
   VAR_10 &= ~VAR_1;
  VAR_14->gpio.set_data(VAR_14, VAR_10);
  FUNC_13(100);

  VAR_10 |= VAR_2;
  VAR_14->gpio.set_data(VAR_14, VAR_10);
  FUNC_13(100);
 }

 VAR_10 |= VAR_3;
 VAR_14->gpio.set_data(VAR_14, VAR_10);
 FUNC_13(100);


 VAR_14->gpio.set_mask(VAR_14, 0xffffff);

 VAR_14->gpio.set_dir(VAR_14, VAR_11);
}
