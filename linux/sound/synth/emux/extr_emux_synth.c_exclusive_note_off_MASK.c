
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exclusiveClass; } ;
struct snd_emux_voice {TYPE_1__ reg; struct snd_emux_port* port; int state; } ;
struct snd_emux_port {int dummy; } ;
struct snd_emux {int max_voices; int voice_lock; struct snd_emux_voice* voices; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_emux*,struct snd_emux_voice*,int ) ;

__attribute__((used)) static void
FUNC_4(struct snd_emux *VAR_0, struct snd_emux_port *VAR_1, int VAR_2)
{
 struct snd_emux_voice *VAR_3;
 int VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_0->voice_lock, VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_0->max_voices; VAR_4++) {
  VAR_3 = &VAR_0->voices[VAR_4];
  if (FUNC_0(VAR_3->state) && VAR_3->port == VAR_1 &&
      VAR_3->reg.exclusiveClass == VAR_2) {
   FUNC_3(VAR_0, VAR_3, 0);
  }
 }
 FUNC_2(&VAR_0->voice_lock, VAR_5);
}
