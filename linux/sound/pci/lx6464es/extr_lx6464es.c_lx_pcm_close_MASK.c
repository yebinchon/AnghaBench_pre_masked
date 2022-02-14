
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* pcm; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 FUNC_0(VAR_0->pcm->card->dev, "->lx_pcm_close\n");
 return 0;
}
