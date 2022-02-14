
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_ac97_bus {int** used_slots; TYPE_2__* card; int bus_lock; TYPE_3__** codec; } ;
struct ac97_pcm {size_t stream; int cur_dbl; unsigned short aslots; TYPE_1__* r; struct snd_ac97_bus* bus; } ;
typedef enum ac97_pcm_cfg { ____Placeholder_ac97_pcm_cfg } ac97_pcm_cfg ;
struct TYPE_6__ {int ext_id; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int* rslots; int * codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned char,unsigned int) ;
 int FUNC_1 (int ,char*,int,...) ;
 unsigned char FUNC_2 (struct ac97_pcm*,int,int,int) ;
 int FUNC_3 (TYPE_3__*,unsigned int) ;
 int FUNC_4 (struct ac97_pcm*) ;
 int FUNC_5 (int ,unsigned char,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ac97_pcm *VAR_5, unsigned int VAR_6,
        enum ac97_pcm_cfg VAR_7, unsigned short VAR_8)
{
 struct snd_ac97_bus *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14[4] = {0,0,0,0};
 unsigned char VAR_15;
 int VAR_16 = 0;

 VAR_12 = VAR_6 > 48000;
 VAR_9 = VAR_5->bus;
 if (VAR_7 == VAR_1) {
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
   if (VAR_9->codec[VAR_11] && (VAR_9->codec[VAR_11]->ext_id & VAR_0)) {
    VAR_16 = FUNC_3(VAR_9->codec[VAR_11], VAR_6);
    if (VAR_16 < 0)
     return VAR_16;
   }
 }
 FUNC_6(&VAR_5->bus->bus_lock);
 for (VAR_10 = 3; VAR_10 < 12; VAR_10++) {
  if (!(VAR_8 & (1 << VAR_10)))
   continue;
  VAR_13 = 0;
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   if (VAR_9->used_slots[VAR_5->stream][VAR_11] & (1 << VAR_10)) {
    FUNC_7(&VAR_5->bus->bus_lock);
    VAR_16 = -VAR_4;
    goto error;
   }
   if (VAR_5->r[VAR_12].rslots[VAR_11] & (1 << VAR_10)) {
    VAR_9->used_slots[VAR_5->stream][VAR_11] |= (1 << VAR_10);
    VAR_13++;
   }
  }
  if (!VAR_13) {
   FUNC_7(&VAR_5->bus->bus_lock);
   FUNC_1(VAR_9->card->dev,
    "cannot find configuration for AC97 slot %i\n",
    VAR_10);
   VAR_16 = -VAR_3;
   goto error;
  }
 }
 VAR_5->cur_dbl = VAR_12;
 FUNC_7(&VAR_5->bus->bus_lock);
 for (VAR_10 = 3; VAR_10 < 12; VAR_10++) {
  if (!(VAR_8 & (1 << VAR_10)))
   continue;
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   if (VAR_5->r[VAR_12].rslots[VAR_11] & (1 << VAR_10)) {
    VAR_15 = FUNC_2(VAR_5, VAR_11, VAR_10, VAR_12);
    if (VAR_15 == 0xff) {
     FUNC_1(VAR_9->card->dev,
      "invalid AC97 slot %i?\n", VAR_10);
     continue;
    }
    if (VAR_14[VAR_11] & (1 << (VAR_15 - VAR_2)))
     continue;
    FUNC_0(VAR_9->card->dev,
     "setting ac97 reg 0x%x to rate %d\n",
     VAR_15, VAR_6);
    VAR_16 = FUNC_5(VAR_5->r[VAR_12].codec[VAR_11], VAR_15, VAR_6);
    if (VAR_16 < 0)
     FUNC_1(VAR_9->card->dev,
      "error in snd_ac97_set_rate: cidx=%d, reg=0x%x, rate=%d, err=%d\n",
      VAR_11, VAR_15, VAR_6, VAR_16);
    else
     VAR_14[VAR_11] |= (1 << (VAR_15 - VAR_2));
   }
  }
 }
 VAR_5->aslots = VAR_8;
 return 0;

 error:
 VAR_5->aslots = VAR_8;
 FUNC_4(VAR_5);
 return VAR_16;
}
