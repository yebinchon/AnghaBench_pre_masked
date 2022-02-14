
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int nonatomic; int name; scalar_t__ info_flags; struct snd_mixart* private_data; } ;
struct snd_mixart {int chip_idx; struct snd_pcm* pcm_dig; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_mixart*,struct snd_pcm*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ,int ,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct snd_mixart *VAR_7)
{
 int VAR_8;
 struct snd_pcm *VAR_9;
 char VAR_10[32];

 FUNC_4(VAR_10, "miXart AES/EBU %d", VAR_7->chip_idx);
 if ((VAR_8 = FUNC_2(VAR_7->card, VAR_10, VAR_1,
          VAR_2,
          VAR_0, &VAR_9)) < 0) {
  FUNC_0(VAR_7->card->dev,
   "cannot create the digital pcm %d\n", VAR_7->chip_idx);
  return VAR_8;
 }

 VAR_9->private_data = VAR_7;

 FUNC_3(VAR_9, VAR_4, &VAR_6);
 FUNC_3(VAR_9, VAR_3, &VAR_5);

 VAR_9->info_flags = 0;
 VAR_9->nonatomic = 1;
 FUNC_5(VAR_9->name, VAR_10);

 FUNC_1(VAR_7, VAR_9);

 VAR_7->pcm_dig = VAR_9;
 return 0;
}
