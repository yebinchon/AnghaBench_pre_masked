
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; scalar_t__ info_flags; struct snd_azf3328* private_data; } ;
struct snd_azf3328 {int pci; struct snd_pcm** pcm; TYPE_1__* card; } ;
struct TYPE_2__ {int shortname; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,char*,int,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct snd_azf3328 *VAR_9)
{

 enum { AZF_PCMDEV_STD, AZF_PCMDEV_I2S_OUT, NUM_AZF_PCMDEVS };

 struct snd_pcm *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_9->card, "AZF3328 DSP", AZF_PCMDEV_STD,
        1, 1, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 FUNC_3(VAR_10, VAR_5,
      &VAR_8);
 FUNC_3(VAR_10, VAR_4,
      &VAR_6);

 VAR_10->private_data = VAR_9;
 VAR_10->info_flags = 0;
 FUNC_4(VAR_10->name, VAR_9->card->shortname);

 VAR_9->pcm[VAR_2] = VAR_10;
 VAR_9->pcm[VAR_0] = VAR_10;

 FUNC_1(VAR_10, VAR_3,
      FUNC_0(VAR_9->pci),
       64*1024, 64*1024);

 VAR_11 = FUNC_2(VAR_9->card, "AZF3328 I2S OUT", AZF_PCMDEV_I2S_OUT,
        1, 0, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 FUNC_3(VAR_10, VAR_5,
      &VAR_7);

 VAR_10->private_data = VAR_9;
 VAR_10->info_flags = 0;
 FUNC_4(VAR_10->name, VAR_9->card->shortname);
 VAR_9->pcm[VAR_1] = VAR_10;

 FUNC_1(VAR_10, VAR_3,
      FUNC_0(VAR_9->pci),
       64*1024, 64*1024);

 return 0;
}
