
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_4__ {int device; int subdevice; } ;
struct snd_kcontrol {TYPE_2__ id; } ;
struct snd_card {int mixername; } ;
struct loopback_setup {int notify; int rate; int channels; TYPE_2__ channels_id; TYPE_2__ rate_id; TYPE_2__ format_id; TYPE_2__ active_id; int format; int rate_shift; } ;
struct loopback {struct loopback_setup** setup; struct snd_pcm** pcm; struct snd_card* card; } ;
struct TYPE_3__ {int substream_count; } ;



 int FUNC_0 (int *) ;

 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (int *,struct loopback*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct loopback *VAR_5, int VAR_6)
{
 struct snd_card *VAR_7 = VAR_5->card;
 struct snd_pcm *VAR_8;
 struct snd_kcontrol *VAR_9;
 struct loopback_setup *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_3(VAR_7->mixername, "Loopback Mixer");
 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  VAR_8 = VAR_5->pcm[VAR_12];
  VAR_14 =
      VAR_8->streams[VAR_3].substream_count;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   VAR_10 = &VAR_5->setup[VAR_13][VAR_12];
   VAR_10->notify = VAR_6;
   VAR_10->rate_shift = VAR_1;
   VAR_10->format = VAR_2;
   VAR_10->rate = 48000;
   VAR_10->channels = 2;
   for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_4);
         VAR_15++) {
    VAR_9 = FUNC_2(&VAR_4[VAR_15],
          VAR_5);
    if (!VAR_9)
     return -VAR_0;
    VAR_9->id.device = VAR_12;
    VAR_9->id.subdevice = VAR_13;
    switch (VAR_15) {
    case 131:
     VAR_10->active_id = VAR_9->id;
     break;
    case 129:
     VAR_10->format_id = VAR_9->id;
     break;
    case 128:
     VAR_10->rate_id = VAR_9->id;
     break;
    case 130:
     VAR_10->channels_id = VAR_9->id;
     break;
    default:
     break;
    }
    VAR_11 = FUNC_1(VAR_7, VAR_9);
    if (VAR_11 < 0)
     return VAR_11;
   }
  }
 }
 return 0;
}
