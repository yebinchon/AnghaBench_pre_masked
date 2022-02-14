
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chmap; int chcnt; } ;
struct snd_ali {TYPE_2__ synth; TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct snd_ali *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_2 & 0x0000001f;

 FUNC_0(VAR_1->card->dev, "free_channel_pcm channel=%d\n", VAR_2);

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return;

 if (!(VAR_1->synth.chmap & (1 << VAR_3))) {
  FUNC_1(VAR_1->card->dev,
   "ali_free_channel_pcm: channel %d is not in use.\n",
   VAR_2);
  return;
 } else {
  VAR_1->synth.chmap &= ~(1 << VAR_3);
  VAR_1->synth.chcnt--;
 }
}
