
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_volatile {int access; } ;
struct snd_kcontrol {int (* get ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;struct snd_kcontrol_volatile* vd; } ;
struct snd_ctl_elem_value {int id; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct snd_kcontrol*,unsigned int) ;
 struct snd_kcontrol* FUNC_1 (struct snd_card*,int *) ;
 unsigned int FUNC_2 (struct snd_kcontrol*,int *) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_3,
        struct snd_ctl_elem_value *VAR_4)
{
 struct snd_kcontrol *VAR_5;
 struct snd_kcontrol_volatile *VAR_6;
 unsigned int VAR_7;

 VAR_5 = FUNC_1(VAR_3, &VAR_4->id);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5, &VAR_4->id);
 VAR_6 = &VAR_5->vd[VAR_7];
 if (!(VAR_6->access & VAR_2) || VAR_5->get == ((void*)0))
  return -VAR_1;

 FUNC_0(&VAR_4->id, VAR_5, VAR_7);
 return VAR_5->get(VAR_5, VAR_4);
}
