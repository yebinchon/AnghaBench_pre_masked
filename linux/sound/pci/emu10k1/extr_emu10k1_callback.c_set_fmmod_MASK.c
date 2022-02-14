
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fmmod; } ;
struct TYPE_6__ {TYPE_2__ parm; } ;
struct snd_emux_voice {int ch; TYPE_1__* chan; TYPE_3__ reg; } ;
struct snd_emu10k1 {int dummy; } ;
struct TYPE_4__ {int gm_modulation; int midi_pressure; } ;


 int VAR_0 ;
 int FUNC_0 (short,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct snd_emu10k1*,int ,int ,unsigned short) ;

__attribute__((used)) static void
FUNC_2(struct snd_emu10k1 *VAR_2, struct snd_emux_voice *VAR_3)
{
 unsigned short VAR_4;
 short VAR_5;
 unsigned char VAR_6;
 int VAR_7;

 VAR_5 = (char)(VAR_3->reg.parm.fmmod>>8);
 VAR_6 = (VAR_3->reg.parm.fmmod & 0xff);
 VAR_7 = VAR_3->chan->gm_modulation + VAR_3->chan->midi_pressure;
 VAR_5 += (VAR_1 * VAR_7) / 1200;
 FUNC_0(VAR_5, -128, 127);
 VAR_4 = ((unsigned char)VAR_5<<8) | VAR_6;
 FUNC_1(VAR_2, VAR_0, VAR_3->ch, VAR_4);
}
