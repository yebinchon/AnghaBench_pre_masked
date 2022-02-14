
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; int name; int dev_subclass; scalar_t__ info_flags; struct snd_emu10k1* private_data; } ;
struct snd_emu10k1 {int p16v_device_offset; int pci; struct snd_pcm* pcm_p16v; int card; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm_substream*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,size_t,int *) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct snd_emu10k1 *VAR_6, int VAR_7)
{
 struct snd_pcm *VAR_8;
 struct snd_pcm_substream *VAR_9;
 int VAR_10;
        int VAR_11=1;


 VAR_6->p16v_device_offset = VAR_7;

 if ((VAR_10 = FUNC_2(VAR_6->card, "p16v", VAR_7, 1, VAR_11, &VAR_8)) < 0)
  return VAR_10;

 VAR_8->private_data = VAR_6;


 FUNC_3(VAR_8, VAR_2, &VAR_5);
 FUNC_3(VAR_8, VAR_1, &VAR_4);

 VAR_8->info_flags = 0;
 VAR_8->dev_subclass = VAR_3;
 FUNC_4(VAR_8->name, "p16v");
 VAR_6->pcm_p16v = VAR_8;

 for(VAR_9 = VAR_8->streams[VAR_2].substream;
     VAR_9;
     VAR_9 = VAR_9->next) {
  FUNC_1(VAR_9, VAR_0,
           FUNC_0(VAR_6->pci),
           (65536 - 64) * 8,
           (65536 - 64) * 8);




 }

 for (VAR_9 = VAR_8->streams[VAR_1].substream;
       VAR_9;
       VAR_9 = VAR_9->next) {
  FUNC_1(VAR_9, VAR_0,
           FUNC_0(VAR_6->pci),
           65536 - 64, 65536 - 64);




 }

 return 0;
}
