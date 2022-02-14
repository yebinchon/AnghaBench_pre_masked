
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* card; int pcm; } ;
struct TYPE_4__ {TYPE_1__* snd_card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_pcm_runtime *VAR_3)
{
 FUNC_0(
  VAR_3->pcm,
  VAR_2,
  VAR_3->card->snd_card->dev,
  VAR_0, VAR_1);
 return 0;
}
