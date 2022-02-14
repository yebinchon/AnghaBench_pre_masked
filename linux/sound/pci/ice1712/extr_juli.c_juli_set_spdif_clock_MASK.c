
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* get_data ) (struct snd_ice1712*) ;int (* set_data ) (struct snd_ice1712*,unsigned int) ;} ;
struct snd_ice1712 {TYPE_1__ gpio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 VAR_5 = VAR_3->gpio.get_data(VAR_3);

 VAR_3->gpio.set_data(VAR_3, (VAR_5 & ~VAR_2) | VAR_1 |
   VAR_0);
 return 0;
}
