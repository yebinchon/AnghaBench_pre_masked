
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int pcm; TYPE_1__* card; } ;
struct snd_card {int dev; } ;
struct TYPE_4__ {size_t buffer_bytes_max; } ;
struct TYPE_3__ {struct snd_card* snd_card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,size_t,size_t) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct snd_soc_pcm_runtime *VAR_2)
{
 struct snd_card *VAR_3 = VAR_2->card->snd_card;
 size_t VAR_4 = VAR_1.buffer_bytes_max;

 FUNC_0(VAR_2->pcm, VAR_0,
           VAR_3->dev, VAR_4, VAR_4);
 return 0;
}
