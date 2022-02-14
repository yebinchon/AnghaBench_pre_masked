
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_volatile {int access; } ;
struct snd_kcontrol {struct snd_kcontrol_volatile* vd; } ;
struct snd_ctl_elem_id {int dummy; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_id*,struct snd_kcontrol*,unsigned int) ;
 struct snd_kcontrol* FUNC_2 (struct snd_card*,struct snd_ctl_elem_id*) ;
 unsigned int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_id*) ;
 int FUNC_4 (struct snd_card*,int ,struct snd_ctl_elem_id*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct snd_card *VAR_3, struct snd_ctl_elem_id *VAR_4,
   int VAR_5)
{
 struct snd_kcontrol *VAR_6;
 struct snd_kcontrol_volatile *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 FUNC_0(&VAR_3->controls_rwsem);
 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto unlock;
 }
 VAR_8 = FUNC_3(VAR_6, VAR_4);
 VAR_7 = &VAR_6->vd[VAR_8];
 VAR_9 = 0;
 if (VAR_5) {
  if (!(VAR_7->access & VAR_1))
   goto unlock;
  VAR_7->access &= ~VAR_1;
 } else {
  if (VAR_7->access & VAR_1)
   goto unlock;
  VAR_7->access |= VAR_1;
 }
 FUNC_1(VAR_4, VAR_6, VAR_8);
 VAR_9 = 1;
 unlock:
 FUNC_5(&VAR_3->controls_rwsem);
 if (VAR_9 > 0)
  FUNC_4(VAR_3, VAR_2, VAR_4);
 return VAR_9;
}
