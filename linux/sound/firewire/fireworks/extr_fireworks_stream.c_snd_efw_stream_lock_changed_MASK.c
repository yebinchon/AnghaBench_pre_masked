
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int dev_lock_changed; int hwdep_wait; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct snd_efw *VAR_0)
{
 VAR_0->dev_lock_changed = 1;
 FUNC_0(&VAR_0->hwdep_wait);
}
