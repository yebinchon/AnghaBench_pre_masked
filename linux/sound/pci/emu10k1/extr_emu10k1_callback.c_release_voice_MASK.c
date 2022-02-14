
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ volrelease; scalar_t__ modrelease; } ;
struct TYPE_4__ {TYPE_1__ parm; } ;
struct snd_emux_voice {int ch; TYPE_2__ reg; struct snd_emu10k1* hw; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct snd_emux_voice *VAR_3)
{
 int VAR_4;
 struct snd_emu10k1 *VAR_5;

 VAR_5 = VAR_3->hw;
 VAR_4 = 0x8000 | (unsigned char)VAR_3->reg.parm.modrelease;
 FUNC_0(VAR_5, VAR_0, VAR_3->ch, VAR_4);
 VAR_4 = 0x8000 | (unsigned char)VAR_3->reg.parm.volrelease | VAR_2;
 FUNC_0(VAR_5, VAR_1, VAR_3->ch, VAR_4);
}
