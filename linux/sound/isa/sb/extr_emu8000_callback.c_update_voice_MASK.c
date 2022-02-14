
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_voice {TYPE_1__* port; struct snd_emu8000* hw; } ;
struct snd_emu8000 {int dummy; } ;
struct TYPE_2__ {scalar_t__* ctrls; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_1 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_2 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_3 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_4 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_5 (struct snd_emu8000*,struct snd_emux_voice*) ;
 int FUNC_6 (struct snd_emu8000*,struct snd_emux_voice*) ;

__attribute__((used)) static void
FUNC_7(struct snd_emux_voice *VAR_8, int VAR_9)
{
 struct snd_emu8000 *VAR_10;

 VAR_10 = VAR_8->hw;
 if (VAR_9 & VAR_7)
  FUNC_6(VAR_10, VAR_8);
 if (VAR_9 & VAR_4)
  FUNC_4(VAR_10, VAR_8);
 if ((VAR_9 & VAR_3) &&
     VAR_8->port->ctrls[VAR_0])
  FUNC_3(VAR_10, VAR_8);
 if (VAR_9 & VAR_2)
  FUNC_2(VAR_10, VAR_8);
 if (VAR_9 & VAR_6)
  FUNC_5(VAR_10, VAR_8);
 if (VAR_9 & VAR_1)
  FUNC_1(VAR_10, VAR_8);
 if (VAR_9 & VAR_5)
  FUNC_0(VAR_10, VAR_8);
}
