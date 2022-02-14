
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb_csp {int qpos_left; int qpos_right; int qsound_space; int qsound_switch; int q_lock; scalar_t__ qpos_changed; TYPE_1__* chip; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {struct snd_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_card*,int ) ;
 int FUNC_2 (int *,struct snd_sb_csp*) ;
 int FUNC_3 (struct snd_sb_csp*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_sb_csp * VAR_4)
{
 struct snd_card *VAR_5;
 int VAR_6;

 if (FUNC_0(!VAR_4))
  return -VAR_0;

 VAR_5 = VAR_4->chip->card;
 VAR_4->qpos_left = VAR_4->qpos_right = VAR_1 / 2;
 VAR_4->qpos_changed = 0;

 FUNC_4(&VAR_4->q_lock);

 if ((VAR_6 = FUNC_1(VAR_5, VAR_4->qsound_switch = FUNC_2(&VAR_3, VAR_4))) < 0)
  goto __error;
 if ((VAR_6 = FUNC_1(VAR_5, VAR_4->qsound_space = FUNC_2(&VAR_2, VAR_4))) < 0)
  goto __error;

 return 0;

     __error:
 FUNC_3(VAR_4);
 return VAR_6;
}
