
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_ali_voice {scalar_t__ midi; scalar_t__ synth; scalar_t__ substream; scalar_t__ running; scalar_t__ pcm; } ;
struct TYPE_8__ {unsigned int aint; } ;
struct TYPE_7__ {scalar_t__ aint; } ;
struct snd_ali_channel_control {TYPE_4__ data; TYPE_3__ regs; } ;
struct TYPE_6__ {struct snd_ali_voice* voices; } ;
struct snd_ali {int reg_lock; TYPE_2__ synth; TYPE_1__* card; struct snd_ali_channel_control chregs; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_ali*,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct snd_ali*,int) ;
 int FUNC_6 (struct snd_ali*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct snd_ali *VAR_2, int VAR_3)
{
 struct snd_ali_voice *VAR_4;
 struct snd_ali_channel_control *VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_5 = &(VAR_2->chregs);


 VAR_6 = VAR_5->data.aint;
 VAR_7 = 1U << (VAR_3 & 0x1f);

 if (!(VAR_6 & VAR_7))
  return;

 VAR_4 = &VAR_2->synth.voices[VAR_3];

 FUNC_10(100);
 FUNC_8(&VAR_2->reg_lock);

 if (VAR_4->pcm && VAR_4->substream) {

  if (VAR_4->running) {
   FUNC_1(VAR_2->card->dev,
    "update_ptr: cso=%4.4x cspf=%d.\n",
    FUNC_3(FUNC_0(VAR_2, VAR_0 + 2)),
    (FUNC_2(FUNC_0(VAR_2, VAR_1)) & VAR_7) == VAR_7);
   FUNC_9(&VAR_2->reg_lock);
   FUNC_7(VAR_4->substream);
   FUNC_8(&VAR_2->reg_lock);
  } else {
   FUNC_6(VAR_2, VAR_3);
   FUNC_5(VAR_2, VAR_3);
  }
 } else if (VAR_2->synth.voices[VAR_3].synth) {

 } else if (VAR_2->synth.voices[VAR_3].midi) {

 } else {

  FUNC_6(VAR_2, VAR_3);
  FUNC_5(VAR_2, VAR_3);
 }
 FUNC_9(&VAR_2->reg_lock);
 FUNC_4(VAR_7,FUNC_0(VAR_2,VAR_5->regs.aint));
 VAR_5->data.aint = VAR_6 & (~VAR_7);
}
