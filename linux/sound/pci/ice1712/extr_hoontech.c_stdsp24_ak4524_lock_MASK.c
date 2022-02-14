
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_5, int VAR_6)
{
 struct snd_ice1712 *VAR_7 = VAR_5->private_data[0];
 unsigned char VAR_8;
 FUNC_0(VAR_7);
 VAR_8 = VAR_4 |
  VAR_3 |
  VAR_2;
 FUNC_1(VAR_7, VAR_0,
     VAR_7->gpio.direction | VAR_8);
 FUNC_1(VAR_7, VAR_1, ~VAR_8);
}
