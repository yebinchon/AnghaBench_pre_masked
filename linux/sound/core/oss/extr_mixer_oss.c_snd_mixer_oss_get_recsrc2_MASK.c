
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_mixer_oss_slot {struct slot* private_data; } ;
struct snd_mixer_oss_file {struct snd_mixer_oss* mixer; struct snd_card* card; } ;
struct snd_mixer_oss {int mask_recsrc; struct snd_mixer_oss_slot* slots; } ;
struct snd_kcontrol {int (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;int (* get ) (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;} ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ctl_elem_info {TYPE_2__ value; } ;
struct snd_card {int controls_rwsem; } ;
struct slot {scalar_t__ signature; int present; scalar_t__ capture_item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_2 (int,int ) ;
 struct snd_kcontrol* FUNC_3 (struct snd_mixer_oss*,char*,int ) ;
 int FUNC_4 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_5 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_mixer_oss_file *VAR_5, unsigned int *VAR_6)
{
 struct snd_card *VAR_7 = VAR_5->card;
 struct snd_mixer_oss *VAR_8 = VAR_5->mixer;
 struct snd_kcontrol *VAR_9;
 struct snd_mixer_oss_slot *VAR_10;
 struct slot *VAR_11;
 struct snd_ctl_elem_info *VAR_12;
 struct snd_ctl_elem_value *VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_2);
 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_2);
 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
  VAR_14 = -VAR_1;
  goto __free_only;
 }
 FUNC_0(&VAR_7->controls_rwsem);
 VAR_9 = FUNC_3(VAR_8, "Capture Source", 0);
 if (! VAR_9) {
  VAR_14 = -VAR_0;
  goto __unlock;
 }
 if ((VAR_14 = VAR_9->info(VAR_9, VAR_12)) < 0)
  goto __unlock;
 if ((VAR_14 = VAR_9->get(VAR_9, VAR_13)) < 0)
  goto __unlock;
 for (VAR_15 = 0; VAR_15 < 32; VAR_15++) {
  if (!(VAR_8->mask_recsrc & (1 << VAR_15)))
   continue;
  VAR_10 = &VAR_8->slots[VAR_15];
  VAR_11 = VAR_10->private_data;
  if (VAR_11->signature != VAR_4)
   continue;
  if (!(VAR_11->present & VAR_3))
   continue;
  if (VAR_11->capture_item == VAR_13->value.enumerated.item[0]) {
   *VAR_6 = VAR_15;
   break;
  }
 }
 VAR_14 = 0;
      __unlock:
      FUNC_6(&VAR_7->controls_rwsem);
      __free_only:
       FUNC_1(VAR_13);
       FUNC_1(VAR_12);
       return VAR_14;
}
