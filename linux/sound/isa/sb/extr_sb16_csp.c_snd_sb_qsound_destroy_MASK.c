
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb_csp {int q_lock; scalar_t__ qpos_changed; int qsound_space; int qsound_switch; TYPE_1__* chip; } ;
struct snd_card {int controls_rwsem; } ;
struct TYPE_2__ {struct snd_card* card; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct snd_sb_csp * VAR_0)
{
 struct snd_card *VAR_1;
 unsigned long VAR_2;

 if (FUNC_1(!VAR_0))
  return;

 VAR_1 = VAR_0->chip->card;

 FUNC_0(&VAR_1->controls_rwsem);
 if (VAR_0->qsound_switch)
  FUNC_2(VAR_1, VAR_0->qsound_switch);
 if (VAR_0->qsound_space)
  FUNC_2(VAR_1, VAR_0->qsound_space);
 FUNC_5(&VAR_1->controls_rwsem);


 FUNC_3 (&VAR_0->q_lock, VAR_2);
 VAR_0->qpos_changed = 0;
 FUNC_4 (&VAR_0->q_lock, VAR_2);
}
