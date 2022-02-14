
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int number; TYPE_1__* pcm; } ;
struct TYPE_4__ {int subdevice; int device; int name; } ;
struct snd_kcontrol {TYPE_2__ id; } ;
struct ak4114 {int work; struct snd_kcontrol** kctls; int card; struct snd_pcm_substream* capture_substream; struct snd_pcm_substream* playback_substream; } ;
struct TYPE_3__ {int device; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_4 ;
 int FUNC_2 (struct ak4114*) ;
 int FUNC_3 (int ,struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_5 (int *,struct ak4114*) ;
 scalar_t__ FUNC_6 (int ,char*) ;

int FUNC_7(struct ak4114 *VAR_5,
       struct snd_pcm_substream *VAR_6,
       struct snd_pcm_substream *VAR_7)
{
 struct snd_kcontrol *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 if (FUNC_1(!VAR_7))
  return -VAR_1;
 VAR_5->playback_substream = VAR_6;
 VAR_5->capture_substream = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_5(&VAR_4[VAR_9], VAR_5);
  if (VAR_8 == ((void*)0))
   return -VAR_2;
  if (FUNC_6(VAR_8->id.name, "Playback")) {
   if (VAR_6 == ((void*)0)) {
    FUNC_4(VAR_8);
    VAR_5->kctls[VAR_9] = ((void*)0);
    continue;
   }
   VAR_8->id.device = VAR_6->pcm->device;
   VAR_8->id.subdevice = VAR_6->number;
  } else {
   VAR_8->id.device = VAR_7->pcm->device;
   VAR_8->id.subdevice = VAR_7->number;
  }
  VAR_10 = FUNC_3(VAR_5->card, VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_5->kctls[VAR_9] = VAR_8;
 }
 FUNC_2(VAR_5);

 FUNC_0(&VAR_5->work, VAR_3 / 10);
 return 0;
}
