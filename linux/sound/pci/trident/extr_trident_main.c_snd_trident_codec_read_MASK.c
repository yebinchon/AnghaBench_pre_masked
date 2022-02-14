
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident {scalar_t__ device; int reg_lock; TYPE_1__* card; int ac97_detect; } ;
struct snd_ac97 {scalar_t__ num; struct snd_trident* private_data; } ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 unsigned int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct snd_trident*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned short,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static unsigned short FUNC_6(struct snd_ac97 *VAR_12, unsigned short VAR_13)
{
 unsigned int VAR_14 = 0, VAR_15;
 unsigned short VAR_16 = 0xffff;
 unsigned long VAR_17;
 struct snd_trident *VAR_18 = VAR_12->private_data;

 FUNC_4(&VAR_18->reg_lock, VAR_17);
 if (VAR_18->device == VAR_9) {
  VAR_14 = (VAR_0 | (VAR_13 & 0x000000ff));
  FUNC_3(VAR_14, FUNC_0(VAR_18, VAR_1));
  do {
   VAR_14 = FUNC_2(FUNC_0(VAR_18, VAR_1));
   if ((VAR_14 & VAR_0) == 0)
    break;
  } while (--VAR_16);
 } else if (VAR_18->device == VAR_10) {
  VAR_14 = (VAR_2 | (VAR_13 & 0x000000ff));
  VAR_15 = VAR_12->num == 0 ? VAR_3 : VAR_4;
  FUNC_3(VAR_14, FUNC_0(VAR_18, VAR_15));
  do {
   VAR_14 = FUNC_2(FUNC_0(VAR_18, VAR_15));
   if ((VAR_14 & 0x00000C00) == 0)
    break;
  } while (--VAR_16);
 } else if (VAR_18->device == VAR_11) {
  VAR_14 = VAR_6 | VAR_5 | (VAR_13 & 0x000000ff);
  if (VAR_12->num == 1)
   VAR_14 |= VAR_8;
  FUNC_3(VAR_14, FUNC_0(VAR_18, VAR_7));
  do {
   VAR_14 = FUNC_2(FUNC_0(VAR_18, VAR_7));
   if ((VAR_14 & (VAR_6)) == 0)
    break;
  } while (--VAR_16);
 }

 if (VAR_16 == 0 && !VAR_18->ac97_detect) {
  FUNC_1(VAR_18->card->dev,
   "ac97 codec read TIMEOUT [0x%x/0x%x]!!!\n",
      VAR_13, VAR_14);
  VAR_14 = 0;
 }

 FUNC_5(&VAR_18->reg_lock, VAR_17);
 return ((unsigned short) (VAR_14 >> 16));
}
