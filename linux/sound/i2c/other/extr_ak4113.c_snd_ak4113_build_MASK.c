
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int number; TYPE_1__* pcm; } ;
struct TYPE_4__ {int subdevice; int device; } ;
struct snd_kcontrol {TYPE_2__ id; } ;
struct ak4113 {int work; struct snd_kcontrol** kctls; int card; struct snd_pcm_substream* substream; } ;
struct TYPE_3__ {int device; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_4 ;
 int FUNC_2 (struct ak4113*) ;
 int FUNC_3 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_4 (int *,struct ak4113*) ;

int FUNC_5(struct ak4113 *VAR_5,
  struct snd_pcm_substream *VAR_6)
{
 struct snd_kcontrol *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (FUNC_1(!VAR_6))
  return -VAR_1;
 VAR_5->substream = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = FUNC_4(&VAR_4[VAR_8], VAR_5);
  if (VAR_7 == ((void*)0))
   return -VAR_2;
  VAR_7->id.device = VAR_6->pcm->device;
  VAR_7->id.subdevice = VAR_6->number;
  VAR_9 = FUNC_3(VAR_5->card, VAR_7);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_5->kctls[VAR_8] = VAR_7;
 }
 FUNC_2(VAR_5);

 FUNC_0(&VAR_5->work, VAR_3 / 10);
 return 0;
}
