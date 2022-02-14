
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_azf3328 {TYPE_1__* card; } ;
struct snd_ac97 {struct snd_azf3328* private_data; } ;
struct TYPE_2__ {int dev; } ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned short) ;
 unsigned short FUNC_1 (unsigned short) ;
 int FUNC_2 (struct snd_azf3328 const*,unsigned short,char*) ;
 unsigned short FUNC_3 (struct snd_azf3328 const*,unsigned short) ;

__attribute__((used)) static unsigned short
FUNC_4(struct snd_ac97 *VAR_8, unsigned short VAR_9)
{
 const struct snd_azf3328 *VAR_10 = VAR_8->private_data;
 unsigned short VAR_11 = FUNC_1(VAR_9);
 unsigned short VAR_12 = 0;
 bool VAR_13 = 0;

 FUNC_0(VAR_10->card->dev, "snd_azf3328_mixer_ac97_read reg_ac97 %u\n",
  VAR_9);
 if (VAR_11 & VAR_2)
  VAR_13 = 1;
 else {
  if (VAR_11 & VAR_1)
   VAR_12 = FUNC_3(VAR_10,
      VAR_11 & VAR_3);
  else {
   FUNC_3(VAR_10, VAR_4);
  }

  if (VAR_11 & VAR_0) {
   switch (VAR_9) {
   case 130:
    VAR_12 |= VAR_5;
    break;
   case 131:
    VAR_12 |= VAR_6;
    break;
   case 133:
   case 132:

    VAR_12 |= 0;
    break;
   case 129:
    VAR_12 = VAR_7 >> 16;
    break;
   case 128:
    VAR_12 = VAR_7 & 0xffff;
    break;
   default:
    VAR_13 = 1;
    break;
   }
  }
 }
 if (VAR_13)
  FUNC_2(VAR_10, VAR_9, "read");

 return VAR_12;
}
