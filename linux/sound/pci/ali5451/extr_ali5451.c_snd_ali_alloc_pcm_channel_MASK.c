
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ chcnt; int chmap; } ;
struct snd_ali {TYPE_1__* card; TYPE_2__ synth; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_ali *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_2 & 0x1f;

 if (VAR_1->synth.chcnt >= VAR_0){
  FUNC_1(VAR_1->card->dev,
      "ali_alloc_pcm_channel: no free channels.\n");
  return -1;
 }

 if (!(VAR_1->synth.chmap & (1 << VAR_3))) {
  VAR_1->synth.chmap |= 1 << VAR_3;
  VAR_1->synth.chcnt++;
  FUNC_0(VAR_1->card->dev, "alloc_pcm_channel no. %d.\n", VAR_3);
  return VAR_3;
 }
 return -1;
}
