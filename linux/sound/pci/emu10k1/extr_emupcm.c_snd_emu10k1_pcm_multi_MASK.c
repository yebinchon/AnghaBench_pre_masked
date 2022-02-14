
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; int name; int dev_subclass; scalar_t__ info_flags; struct snd_emu10k1* private_data; } ;
struct snd_emu10k1 {int pci; struct snd_pcm* pcm_multi; int card; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct snd_pcm_substream*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int ,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,size_t,int *) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct snd_emu10k1 *VAR_4, int VAR_5)
{
 struct snd_pcm *VAR_6;
 struct snd_pcm_substream *VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_2(VAR_4->card, "emu10k1", VAR_5, 1, 0, &VAR_6)) < 0)
  return VAR_8;

 VAR_6->private_data = VAR_4;

 FUNC_3(VAR_6, VAR_1, &VAR_3);

 VAR_6->info_flags = 0;
 VAR_6->dev_subclass = VAR_2;
 FUNC_4(VAR_6->name, "Multichannel Playback");
 VAR_4->pcm_multi = VAR_6;

 for (VAR_7 = VAR_6->streams[VAR_1].substream; VAR_7; VAR_7 = VAR_7->next)
  FUNC_1(VAR_7, VAR_0,
           FUNC_0(VAR_4->pci),
           64*1024, 64*1024);

 return 0;
}
