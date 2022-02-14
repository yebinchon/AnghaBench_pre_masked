
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via82xx {int multi_devno; int capture_devno; int num_devs; int intr_mask; TYPE_1__* ac97; int pci; struct snd_pcm** pcms; TYPE_2__* card; scalar_t__ playback_devno; } ;
struct snd_pcm_chmap {int dummy; } ;
struct snd_pcm {int name; struct via82xx* private_data; } ;
struct TYPE_4__ {int shortname; } ;
struct TYPE_3__ {struct snd_pcm_chmap** chmaps; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct via82xx*,int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,size_t,int ,int,int ,struct snd_pcm_chmap**) ;
 int VAR_6 ;
 int FUNC_3 (struct snd_pcm*,int ,int ,int,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int,int,int,struct snd_pcm**) ;
 int FUNC_5 (struct snd_pcm*,size_t,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct via82xx *VAR_11)
{
 struct snd_pcm *VAR_12;
 struct snd_pcm_chmap *VAR_13;
 int VAR_14, VAR_15;

 VAR_11->playback_devno = 0;
 VAR_11->multi_devno = 4;
 VAR_11->capture_devno = 5;
 VAR_11->num_devs = 7;
 VAR_11->intr_mask = 0x33033333;


 VAR_15 = FUNC_4(VAR_11->card, VAR_11->card->shortname, 0, 4, 1, &VAR_12);
 if (VAR_15 < 0)
  return VAR_15;
 FUNC_5(VAR_12, VAR_2, &VAR_10);
 FUNC_5(VAR_12, VAR_1, &VAR_8);
 VAR_12->private_data = VAR_11;
 FUNC_6(VAR_12->name, VAR_11->card->shortname);
 VAR_11->pcms[0] = VAR_12;

 for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
  FUNC_0(VAR_11, VAR_14, 0x10 * VAR_14, VAR_14, 0);

 FUNC_0(VAR_11, VAR_11->capture_devno, VAR_4, 6, 1);

 FUNC_3(VAR_12, VAR_0,
           FUNC_1(VAR_11->pci),
           64*1024, VAR_3);

 VAR_15 = FUNC_2(VAR_12, VAR_2,
         VAR_7, 2, 0,
         &VAR_13);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_15 = FUNC_4(VAR_11->card, VAR_11->card->shortname, 1, 1, 1, &VAR_12);
 if (VAR_15 < 0)
  return VAR_15;
 FUNC_5(VAR_12, VAR_2, &VAR_9);
 FUNC_5(VAR_12, VAR_1, &VAR_8);
 VAR_12->private_data = VAR_11;
 FUNC_6(VAR_12->name, VAR_11->card->shortname);
 VAR_11->pcms[1] = VAR_12;

 FUNC_0(VAR_11, VAR_11->multi_devno, VAR_5, 4, 0);

 FUNC_0(VAR_11, VAR_11->capture_devno + 1, VAR_4 + 0x10, 7, 1);

 FUNC_3(VAR_12, VAR_0,
           FUNC_1(VAR_11->pci),
           64*1024, VAR_3);

 VAR_15 = FUNC_2(VAR_12, VAR_2,
         VAR_6, 6, 0,
         &VAR_13);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_11->ac97->chmaps[VAR_2] = VAR_13;

 return 0;
}
