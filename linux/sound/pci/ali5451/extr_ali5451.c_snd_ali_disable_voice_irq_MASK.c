
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ainten; } ;
struct TYPE_4__ {unsigned int ainten; } ;
struct snd_ali_channel_control {TYPE_2__ regs; TYPE_1__ data; } ;
struct snd_ali {TYPE_3__* card; struct snd_ali_channel_control chregs; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (struct snd_ali*,int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_ali *VAR_0,
          unsigned int VAR_1)
{
 unsigned int VAR_2;
 struct snd_ali_channel_control *VAR_3 = &(VAR_0->chregs);

 FUNC_1(VAR_0->card->dev, "disable_voice_irq channel=%d\n", VAR_1);

 VAR_2 = 1 << (VAR_1 & 0x1f);
 VAR_3->data.ainten = FUNC_2(FUNC_0(VAR_0, VAR_3->regs.ainten));
 VAR_3->data.ainten &= ~VAR_2;
 FUNC_3(VAR_3->data.ainten, FUNC_0(VAR_0, VAR_3->regs.ainten));
}
