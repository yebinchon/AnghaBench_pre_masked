
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx_modem {int capture_devno; int num_devs; int intr_mask; int pci; struct snd_pcm** pcms; TYPE_1__* card; scalar_t__ playback_devno; } ;
struct snd_pcm {int name; struct via82xx_modem* private_data; int dev_class; } ;
struct TYPE_2__ {int shortname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct via82xx_modem*,int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct via82xx_modem *VAR_8)
{
 struct snd_pcm *VAR_9;
 int VAR_10;

 VAR_8->playback_devno = 0;
 VAR_8->capture_devno = 1;
 VAR_8->num_devs = 2;
 VAR_8->intr_mask = 0x330000;

 VAR_10 = FUNC_3(VAR_8->card, VAR_8->card->shortname, 0, 1, 1, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_4(VAR_9, VAR_3, &VAR_7);
 FUNC_4(VAR_9, VAR_2, &VAR_6);
 VAR_9->dev_class = VAR_1;
 VAR_9->private_data = VAR_8;
 FUNC_5(VAR_9->name, VAR_8->card->shortname);
 VAR_8->pcms[0] = VAR_9;
 FUNC_0(VAR_8, 0, VAR_5, 0);
 FUNC_0(VAR_8, 1, VAR_4, 1);

 FUNC_2(VAR_9, VAR_0,
           FUNC_1(VAR_8->pci),
           64*1024, 128*1024);
 return 0;
}
