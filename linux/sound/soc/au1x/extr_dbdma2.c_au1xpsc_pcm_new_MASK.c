
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; TYPE_1__* card; } ;
struct snd_pcm {int dummy; } ;
struct snd_card {int dev; } ;
struct TYPE_2__ {struct snd_card* snd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_pcm_runtime *VAR_2)
{
 struct snd_card *VAR_3 = VAR_2->card->snd_card;
 struct snd_pcm *VAR_4 = VAR_2->pcm;

 FUNC_0(VAR_4, VAR_1,
  VAR_3->dev, VAR_0, (4096 * 1024) - 1);

 return 0;
}
