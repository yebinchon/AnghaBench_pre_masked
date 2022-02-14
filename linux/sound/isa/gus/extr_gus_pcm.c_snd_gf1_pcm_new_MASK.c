
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm {scalar_t__ name; int id; TYPE_1__* streams; int info_flags; int dev_subclass; struct snd_gus_card* private_data; } ;
struct TYPE_6__ {int index; } ;
struct snd_kcontrol {TYPE_3__ id; } ;
struct TYPE_5__ {int pcm_channels; int dma1; int dma2; } ;
struct snd_gus_card {int revision; scalar_t__ codec_flag; struct snd_pcm* pcm; scalar_t__ interwave; TYPE_2__ gf1; int ace_flag; int ess_flag; struct snd_card* card; } ;
struct snd_card {int dev; } ;
struct TYPE_4__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (int *,struct snd_gus_card*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct snd_pcm_substream*,int ,int ,int,int) ;
 int FUNC_3 (struct snd_card*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,size_t,int *) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

int FUNC_9(struct snd_gus_card *VAR_9, int VAR_10, int VAR_11)
{
 struct snd_card *VAR_12;
 struct snd_kcontrol *VAR_13;
 struct snd_pcm *VAR_14;
 struct snd_pcm_substream *VAR_15;
 int VAR_16, VAR_17;

 VAR_12 = VAR_9->card;
 VAR_16 = !VAR_9->interwave && !VAR_9->ess_flag && !VAR_9->ace_flag ? 1 : 0;
 VAR_17 = FUNC_3(VAR_12,
     VAR_9->interwave ? "AMD InterWave" : "GF1",
     VAR_10,
     VAR_9->gf1.pcm_channels / 2,
     VAR_16,
     &VAR_14);
 if (VAR_17 < 0)
  return VAR_17;
 VAR_14->private_data = VAR_9;

 FUNC_4(VAR_14, VAR_3, &VAR_6);

 for (VAR_15 = VAR_14->streams[VAR_3].substream; VAR_15; VAR_15 = VAR_15->next)
  FUNC_2(VAR_15, VAR_0,
           VAR_12->dev,
           64*1024, VAR_9->gf1.dma1 > 3 ? 128*1024 : 64*1024);

 VAR_14->info_flags = 0;
 VAR_14->dev_subclass = VAR_4;
 if (VAR_16) {
  FUNC_4(VAR_14, VAR_2, &VAR_5);
  if (VAR_9->gf1.dma2 == VAR_9->gf1.dma1)
   VAR_14->info_flags |= VAR_1;
  FUNC_2(VAR_14->streams[VAR_2].substream,
           VAR_0, VAR_12->dev,
           64*1024, VAR_9->gf1.dma2 > 3 ? 128*1024 : 64*1024);
 }
 FUNC_7(VAR_14->name, VAR_14->id);
 if (VAR_9->interwave) {
  FUNC_5(VAR_14->name + FUNC_8(VAR_14->name), " rev %c", VAR_9->revision + 'A');
 }
 FUNC_6(VAR_14->name, " (synth)");
 VAR_9->pcm = VAR_14;

 if (VAR_9->codec_flag)
  VAR_13 = FUNC_1(&VAR_8, VAR_9);
 else
  VAR_13 = FUNC_1(&VAR_7, VAR_9);
 if ((VAR_17 = FUNC_0(VAR_12, VAR_13)) < 0)
  return VAR_17;
 VAR_13->id.index = VAR_11;

 return 0;
}
