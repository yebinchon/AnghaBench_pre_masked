
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct snd_pcm*,size_t) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_1)
{
 struct snd_card *VAR_2 = VAR_1->card->snd_card;
 struct snd_pcm *VAR_3 = VAR_1->pcm;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->dev, FUNC_0(32));
 if (VAR_4)
  return VAR_4;

 if (VAR_3->streams[VAR_0].substream) {
  VAR_4 = FUNC_2(VAR_3,
    VAR_0);
 }

 return VAR_4;
}
