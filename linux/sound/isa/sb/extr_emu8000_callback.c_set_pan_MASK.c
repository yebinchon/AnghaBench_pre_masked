
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ loopstart; } ;
struct snd_emux_voice {int ch; TYPE_1__ reg; scalar_t__ apan; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct snd_emu8000 *VAR_0, struct snd_emux_voice *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = ((unsigned int)VAR_1->apan<<24) | ((unsigned int)VAR_1->reg.loopstart - 1);
 FUNC_0(VAR_0, VAR_1->ch, VAR_2);
}
