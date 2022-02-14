
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {int gpio_mutex; } ;
struct snd_i2c_device {int addr; TYPE_1__* bus; } ;
struct TYPE_2__ {struct snd_ice1712* private_data; } ;


 int FUNC_0 (struct snd_ice1712*,unsigned char) ;
 unsigned char FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*,unsigned char) ;
 int FUNC_3 (struct snd_ice1712*,int,unsigned char) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_i2c_device *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 struct snd_ice1712 *VAR_3 = VAR_0->bus->private_data;
 int VAR_4 = VAR_2;
 unsigned char VAR_5;

 FUNC_4(&VAR_3->gpio_mutex);
 VAR_5 = FUNC_1(VAR_3);
 FUNC_3(VAR_3, (VAR_0->addr << 1) | 1, VAR_5);
 while (VAR_2-- > 0)
  *VAR_1++ = FUNC_2(VAR_3, VAR_5);
 FUNC_0(VAR_3, VAR_5);
 FUNC_5(&VAR_3->gpio_mutex);
 return VAR_4;
}
