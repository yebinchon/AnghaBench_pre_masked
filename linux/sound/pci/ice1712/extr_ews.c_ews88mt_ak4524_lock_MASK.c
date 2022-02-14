
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; TYPE_2__* card; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;
struct TYPE_4__ {int dev; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct snd_ice1712*,int) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct snd_akm4xxx *VAR_5, int VAR_6)
{
 struct snd_ice1712 *VAR_7 = VAR_5->private_data[0];
 unsigned char VAR_8;

 if (FUNC_1(VAR_7, ~(1 << VAR_6) & 0x0f) < 0)
  FUNC_0(VAR_7->card->dev, "fatal error (ews88mt chip select)\n");
 FUNC_2(VAR_7);
 VAR_8 = VAR_2 |
  VAR_1 |
  VAR_0;
 FUNC_3(VAR_7, VAR_3,
     VAR_7->gpio.direction | VAR_8);
 FUNC_3(VAR_7, VAR_4, ~VAR_8);
}
