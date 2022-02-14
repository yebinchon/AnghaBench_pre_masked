
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; int name; int dev_subclass; scalar_t__ info_flags; struct snd_emu10k1* private_data; } ;
struct snd_emu10k1 {int pci; struct snd_pcm* pcm; int card; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_pcm_substream*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,size_t,int *) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct snd_emu10k1 *VAR_7, int VAR_8)
{
 struct snd_pcm *VAR_9;
 struct snd_pcm_substream *VAR_10;
 int VAR_11;

 if ((VAR_11 = FUNC_2(VAR_7->card, "emu10k1", VAR_8, 32, 1, &VAR_9)) < 0)
  return VAR_11;

 VAR_9->private_data = VAR_7;

 FUNC_3(VAR_9, VAR_3, &VAR_6);
 FUNC_3(VAR_9, VAR_2, &VAR_5);

 VAR_9->info_flags = 0;
 VAR_9->dev_subclass = VAR_4;
 FUNC_4(VAR_9->name, "ADC Capture/Standard PCM Playback");
 VAR_7->pcm = VAR_9;

 for (VAR_10 = VAR_9->streams[VAR_3].substream; VAR_10; VAR_10 = VAR_10->next)
  FUNC_1(VAR_10, VAR_1,
           FUNC_0(VAR_7->pci),
           64*1024, 64*1024);

 for (VAR_10 = VAR_9->streams[VAR_2].substream; VAR_10; VAR_10 = VAR_10->next)
  FUNC_1(VAR_10, VAR_0,
           FUNC_0(VAR_7->pci),
           64*1024, 64*1024);

 return 0;
}
