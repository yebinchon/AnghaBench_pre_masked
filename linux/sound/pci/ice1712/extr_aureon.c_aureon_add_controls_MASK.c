
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int device; } ;
struct snd_kcontrol {TYPE_2__ id; } ;
struct TYPE_5__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {TYPE_3__* pcm; TYPE_4__* card; TYPE_1__ eeprom; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int device; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 unsigned char FUNC_1 (struct snd_ice1712*,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_4__*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_4 (int *,struct snd_ice1712*) ;
 int FUNC_5 (struct snd_ice1712*) ;
 int FUNC_6 (struct snd_ice1712*) ;
 int * VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_7(struct snd_ice1712 *VAR_10)
{
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(VAR_6);
 if (VAR_10->eeprom.subvendor == VAR_1)
  VAR_12 -= 2;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_13 = FUNC_3(VAR_10->card, FUNC_4(&VAR_6[VAR_11], VAR_10));
  if (VAR_13 < 0)
   return VAR_13;
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++) {
  VAR_13 = FUNC_3(VAR_10->card, FUNC_4(&VAR_9[VAR_11], VAR_10));
  if (VAR_13 < 0)
   return VAR_13;
 }

 if (VAR_10->eeprom.subvendor == VAR_2) {
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
   VAR_13 = FUNC_3(VAR_10->card, FUNC_4(&VAR_8[VAR_11], VAR_10));
   if (VAR_13 < 0)
    return VAR_13;
  }
 } else if (VAR_10->eeprom.subvendor != VAR_3 &&
   VAR_10->eeprom.subvendor != VAR_4) {
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
   VAR_13 = FUNC_3(VAR_10->card, FUNC_4(&VAR_5[VAR_11], VAR_10));
   if (VAR_13 < 0)
    return VAR_13;
  }
 }

 if (VAR_10->eeprom.subvendor != VAR_3 &&
     VAR_10->eeprom.subvendor != VAR_4) {
  unsigned char VAR_14;
  FUNC_6(VAR_10);
  VAR_14 = FUNC_1(VAR_10, VAR_0);
  if (VAR_14 != 0x41)
   FUNC_2(VAR_10->card->dev,
     "No CS8415 chip. Skipping CS8415 controls.\n");
  else if ((VAR_14 & 0x0F) != 0x01)
   FUNC_2(VAR_10->card->dev,
     "Detected unsupported CS8415 rev. (%c)\n",
     (char)((VAR_14 & 0x0F) + 'A' - 1));
  else {
   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++) {
    struct snd_kcontrol *VAR_15;
    VAR_13 = FUNC_3(VAR_10->card, (VAR_15 = FUNC_4(&VAR_7[VAR_11], VAR_10)));
    if (VAR_13 < 0)
     return VAR_13;
    if (VAR_11 > 1)
     VAR_15->id.device = VAR_10->pcm->device;
   }
  }
  FUNC_5(VAR_10);
 }

 return 0;
}
