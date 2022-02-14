
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* pcm; TYPE_1__* card; } ;
struct snd_card {int dev; } ;
struct TYPE_8__ {size_t buffer_bytes_max; } ;
struct TYPE_7__ {TYPE_2__* streams; } ;
struct TYPE_6__ {int substream; } ;
struct TYPE_5__ {struct snd_card* snd_card; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,size_t,size_t) ;

int FUNC_1(struct snd_soc_pcm_runtime *VAR_2, unsigned int VAR_3)
{
 struct snd_card *VAR_4 = VAR_2->card->snd_card;
 size_t VAR_5 = VAR_1.buffer_bytes_max;

 FUNC_0(VAR_2->pcm->streams[VAR_3].substream,
          VAR_0, VAR_4->dev,
          VAR_5, VAR_5);
 return 0;
}
