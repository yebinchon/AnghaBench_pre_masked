
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tremfrq; } ;
struct TYPE_4__ {TYPE_1__ parm; } ;
struct snd_emux_voice {TYPE_2__ reg; int ch; int aaux; int apan; int apitch; int avol; struct snd_emu10k1* hw; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct snd_emu10k1*,struct snd_emux_voice*) ;
 int FUNC_1 (struct snd_emu10k1*,struct snd_emux_voice*) ;
 int FUNC_2 (struct snd_emu10k1*,struct snd_emux_voice*) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct snd_emux_voice *VAR_12, int VAR_13)
{
 struct snd_emu10k1 *VAR_14;

 VAR_14 = VAR_12->hw;
 if (VAR_13 & VAR_10)
  FUNC_3(VAR_14, VAR_0, VAR_12->ch, VAR_12->avol);
 if (VAR_13 & VAR_7)
  FUNC_3(VAR_14, VAR_1, VAR_12->ch, VAR_12->apitch);
 if (VAR_13 & VAR_6) {
  FUNC_3(VAR_14, VAR_2, VAR_12->ch, VAR_12->apan);
  FUNC_3(VAR_14, VAR_3, VAR_12->ch, VAR_12->aaux);
 }
 if (VAR_13 & VAR_5)
  FUNC_2(VAR_14, VAR_12);
 if (VAR_13 & VAR_9)
  FUNC_3(VAR_14, VAR_11, VAR_12->ch, VAR_12->reg.parm.tremfrq);
 if (VAR_13 & VAR_4)
  FUNC_1(VAR_14, VAR_12);
 if (VAR_13 & VAR_8)
  FUNC_0(VAR_14, VAR_12);
}
