
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via82xx {int multi_devno; int playback_devno; int capture_devno; int num_devs; int intr_mask; int pci; struct snd_pcm** pcms; TYPE_1__* card; TYPE_2__* ac97; } ;
struct snd_pcm_chmap {int dummy; } ;
struct snd_pcm {int name; struct via82xx* private_data; } ;
struct TYPE_4__ {struct snd_pcm_chmap** chmaps; } ;
struct TYPE_3__ {int shortname; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct via82xx*,int,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_pcm*,size_t,int ,int,int ,struct snd_pcm_chmap**) ;
 int VAR_6 ;
 int FUNC_4 (struct snd_pcm*,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int,int,int,struct snd_pcm**) ;
 int FUNC_6 (struct snd_pcm*,size_t,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct via82xx *VAR_10)
{
 struct snd_pcm *VAR_11;
 struct snd_pcm_chmap *VAR_12;
 int VAR_13;

 VAR_10->multi_devno = 0;
 VAR_10->playback_devno = 1;
 VAR_10->capture_devno = 2;
 VAR_10->num_devs = 3;
 VAR_10->intr_mask = 0x03033000;


 VAR_13 = FUNC_5(VAR_10->card, VAR_10->card->shortname, 0, 1, 1, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_6(VAR_11, VAR_2, &VAR_8);
 FUNC_6(VAR_11, VAR_1, &VAR_7);
 VAR_11->private_data = VAR_10;
 FUNC_7(VAR_11->name, VAR_10->card->shortname);
 VAR_10->pcms[0] = VAR_11;

 FUNC_1(VAR_10, VAR_10->multi_devno, VAR_5, 4, 0);

 FUNC_1(VAR_10, VAR_10->capture_devno, VAR_4, 6, 1);

 FUNC_4(VAR_11, VAR_0,
           FUNC_2(VAR_10->pci),
           64*1024, VAR_3);

 VAR_13 = FUNC_3(VAR_11, VAR_2,
         VAR_6, 6, 0,
         &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_10->ac97->chmaps[VAR_2] = VAR_12;


 if (! FUNC_0(VAR_10->ac97))
  return 0;


 VAR_13 = FUNC_5(VAR_10->card, VAR_10->card->shortname, 1, 1, 0, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_6(VAR_11, VAR_2, &VAR_9);
 VAR_11->private_data = VAR_10;
 FUNC_7(VAR_11->name, VAR_10->card->shortname);
 VAR_10->pcms[1] = VAR_11;

 FUNC_1(VAR_10, VAR_10->playback_devno, 0x30, 3, 0);

 FUNC_4(VAR_11, VAR_0,
           FUNC_2(VAR_10->pci),
           64*1024, VAR_3);
 return 0;
}
