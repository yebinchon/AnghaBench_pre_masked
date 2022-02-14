
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; scalar_t__ info_flags; struct snd_emu10k1* private_data; } ;
struct snd_emu10k1 {int pci; struct snd_pcm* pcm_mic; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int,int ,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct snd_emu10k1 *VAR_3, int VAR_4)
{
 struct snd_pcm *VAR_5;
 int VAR_6;

 if ((VAR_6 = FUNC_2(VAR_3->card, "emu10k1 mic", VAR_4, 0, 1, &VAR_5)) < 0)
  return VAR_6;

 VAR_5->private_data = VAR_3;

 FUNC_3(VAR_5, VAR_1, &VAR_2);

 VAR_5->info_flags = 0;
 FUNC_4(VAR_5->name, "Mic Capture");
 VAR_3->pcm_mic = VAR_5;

 FUNC_1(VAR_5, VAR_0,
           FUNC_0(VAR_3->pci),
           64*1024, 64*1024);

 return 0;
}
