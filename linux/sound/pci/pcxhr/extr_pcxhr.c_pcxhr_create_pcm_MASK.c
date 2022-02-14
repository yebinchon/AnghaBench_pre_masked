
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcxhr {int chip_idx; struct snd_pcm* pcm; TYPE_1__* mgr; int nb_streams_capt; int nb_streams_play; TYPE_2__* card; } ;
struct snd_pcm {int nonatomic; int name; scalar_t__ info_flags; struct snd_pcxhr* private_data; } ;
typedef int name ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int ,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct snd_pcxhr *VAR_4)
{
 int VAR_5;
 struct snd_pcm *VAR_6;
 char VAR_7[32];

 FUNC_5(VAR_7, sizeof(VAR_7), "pcxhr %d", VAR_4->chip_idx);
 if ((VAR_5 = FUNC_3(VAR_4->card, VAR_7, 0,
          VAR_4->nb_streams_play,
          VAR_4->nb_streams_capt, &VAR_6)) < 0) {
  FUNC_0(VAR_4->card->dev, "cannot create pcm %s\n", VAR_7);
  return VAR_5;
 }
 VAR_6->private_data = VAR_4;

 if (VAR_4->nb_streams_play)
  FUNC_4(VAR_6, VAR_2, &VAR_3);
 if (VAR_4->nb_streams_capt)
  FUNC_4(VAR_6, VAR_1, &VAR_3);

 VAR_6->info_flags = 0;
 VAR_6->nonatomic = 1;
 FUNC_6(VAR_6->name, VAR_7);

 FUNC_2(VAR_6, VAR_0,
           FUNC_1(VAR_4->mgr->pci),
           32*1024, 32*1024);
 VAR_4->pcm = VAR_6;
 return 0;
}
