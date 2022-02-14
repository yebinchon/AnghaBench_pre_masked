
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
 int FUNC_0 (int ,char*,unsigned short,unsigned short) ;
 unsigned short FUNC_1 (unsigned short) ;
 int FUNC_2 (struct snd_azf3328 const*,unsigned short,char*) ;
 int FUNC_3 (struct snd_azf3328 const*,unsigned short,unsigned short) ;

__attribute__((used)) static void
FUNC_4(struct snd_ac97 *VAR_4,
       unsigned short VAR_5, unsigned short VAR_6)
{
 const struct snd_azf3328 *VAR_7 = VAR_4->private_data;
 unsigned short VAR_8 = FUNC_1(VAR_5);
 bool VAR_9 = 0;

 FUNC_0(VAR_7->card->dev,
  "snd_azf3328_mixer_ac97_write reg_ac97 %u val %u\n",
  VAR_5, VAR_6);
 if (VAR_8 & VAR_2)
  VAR_9 = 1;
 else {
  if (VAR_8 & VAR_1)
   FUNC_3(
    VAR_7,
    VAR_8 & VAR_3,
    VAR_6
   );
  else
  if (VAR_8 & VAR_0) {
   switch (VAR_5) {
   case 128:
   case 129:
   case 130:
    break;
   default:
    VAR_9 = 1;
    break;
   }
  }
 }
 if (VAR_9)
  FUNC_2(VAR_7, VAR_5, "write");
}
