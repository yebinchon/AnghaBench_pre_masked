
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filterQ; } ;
struct TYPE_4__ {TYPE_1__ parm; } ;
struct snd_emux_voice {int ch; TYPE_2__ reg; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int ) ;
 int FUNC_1 (struct snd_emu8000*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct snd_emu8000 *VAR_0, struct snd_emux_voice *VAR_1)
{
 unsigned int VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1->ch) & 0xffffff;
 VAR_2 |= (VAR_1->reg.parm.filterQ << 28);
 FUNC_1(VAR_0, VAR_1->ch, VAR_2);
}
