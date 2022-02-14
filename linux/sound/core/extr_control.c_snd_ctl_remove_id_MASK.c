
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_id {int dummy; } ;
struct snd_card {int controls_rwsem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct snd_kcontrol* FUNC_1 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_2 (struct snd_card*,struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct snd_card *VAR_1, struct snd_ctl_elem_id *VAR_2)
{
 struct snd_kcontrol *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_1->controls_rwsem);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_3(&VAR_1->controls_rwsem);
  return -VAR_0;
 }
 VAR_4 = FUNC_2(VAR_1, VAR_3);
 FUNC_3(&VAR_1->controls_rwsem);
 return VAR_4;
}
