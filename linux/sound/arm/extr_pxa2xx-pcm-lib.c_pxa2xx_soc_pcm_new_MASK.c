
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; TYPE_1__* card; } ;
struct snd_pcm {TYPE_2__* streams; } ;
struct snd_card {int dev; } ;
struct TYPE_4__ {scalar_t__ substream; } ;
struct TYPE_3__ {struct snd_card* snd_card; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct snd_pcm*,size_t) ;

int FUNC_3(struct snd_soc_pcm_runtime *VAR_2)
{
 struct snd_card *VAR_3 = VAR_2->card->snd_card;
 struct snd_pcm *VAR_4 = VAR_2->pcm;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->dev, FUNC_0(32));
 if (VAR_5)
  return VAR_5;

 if (VAR_4->streams[VAR_1].substream) {
  VAR_5 = FUNC_2(VAR_4,
   VAR_1);
  if (VAR_5)
   goto out;
 }

 if (VAR_4->streams[VAR_0].substream) {
  VAR_5 = FUNC_2(VAR_4,
   VAR_0);
  if (VAR_5)
   goto out;
 }
 out:
 return VAR_5;
}
