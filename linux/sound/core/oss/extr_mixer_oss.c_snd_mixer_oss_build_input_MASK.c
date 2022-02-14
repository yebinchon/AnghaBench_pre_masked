
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_mixer_oss_slot {int stereo; int private_free; struct slot* private_data; int put_recsrc; int get_recsrc; int put_volume; scalar_t__ get_volume; } ;
struct snd_mixer_oss_assign_table {size_t oss_id; scalar_t__ index; char* name; } ;
struct snd_mixer_oss {int mask_recsrc; struct snd_mixer_oss_slot* slots; TYPE_3__* card; } ;
struct snd_kcontrol {scalar_t__ (* info ) (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;} ;
struct TYPE_4__ {char* name; scalar_t__ items; scalar_t__ item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {TYPE_2__ value; } ;
struct slot {int capture_item; int present; int allocated; int channels; struct snd_mixer_oss_assign_table* assigned; int signature; struct slot* numid; } ;
typedef int slot ;
struct TYPE_6__ {int controls_rwsem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ctl_elem_info*) ;
 struct slot* FUNC_2 (int,int ) ;
 struct snd_ctl_elem_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct slot*,int,int) ;
 int FUNC_5 (struct snd_mixer_oss_slot*) ;
 scalar_t__ FUNC_6 (struct snd_mixer_oss*,struct snd_mixer_oss_assign_table*,struct slot*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct snd_kcontrol* FUNC_7 (struct snd_mixer_oss*,char*,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;
 scalar_t__ FUNC_11 (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct snd_mixer_oss *VAR_13, struct snd_mixer_oss_assign_table *VAR_14, int VAR_15, int VAR_16)
{
 struct slot VAR_17;
 struct slot *VAR_18;
 struct snd_kcontrol *VAR_19;
 struct snd_mixer_oss_slot *VAR_20;
 char VAR_21[64];


 if (VAR_13->slots[VAR_14->oss_id].get_volume && ! VAR_16)
  return 0;

 FUNC_4(&VAR_17, 0, sizeof(VAR_17));
 FUNC_4(VAR_17.numid, 0xff, sizeof(VAR_17.numid));
 if (FUNC_6(VAR_13, VAR_14, &VAR_17))
  return 0;
 FUNC_0(&VAR_13->card->controls_rwsem);
 if (VAR_14->index == 0 && (VAR_19 = FUNC_7(VAR_13, "Capture Source", 0)) != ((void*)0)) {
  struct snd_ctl_elem_info *VAR_22;

  VAR_22 = FUNC_3(sizeof(*VAR_22), VAR_1);
  if (! VAR_22) {
   FUNC_12(&VAR_13->card->controls_rwsem);
   return -VAR_0;
  }

  if (VAR_19->info(VAR_19, VAR_22)) {
   FUNC_12(&VAR_13->card->controls_rwsem);
   FUNC_1(VAR_22);
   return 0;
  }
  FUNC_9(VAR_21, VAR_14->name);
  if (!FUNC_8(VAR_21, "Master"))
   FUNC_9(VAR_21, "Mix");
  if (!FUNC_8(VAR_21, "Master Mono"))
   FUNC_9(VAR_21, "Mix Mono");
  VAR_17.capture_item = 0;
  if (!FUNC_8(VAR_22->value.enumerated.name, VAR_21)) {
   VAR_17.present |= VAR_2;
  } else {
   for (VAR_17.capture_item = 1; VAR_17.capture_item < VAR_22->value.enumerated.items; VAR_17.capture_item++) {
    VAR_22->value.enumerated.item = VAR_17.capture_item;
    if (VAR_19->info(VAR_19, VAR_22)) {
     FUNC_12(&VAR_13->card->controls_rwsem);
     FUNC_1(VAR_22);
     return 0;
    }
    if (!FUNC_8(VAR_22->value.enumerated.name, VAR_21)) {
     VAR_17.present |= VAR_2;
     break;
    }
   }
  }
  FUNC_1(VAR_22);
 }
 FUNC_12(&VAR_13->card->controls_rwsem);
 if (VAR_17.present != 0) {
  VAR_18 = FUNC_2(sizeof(VAR_17), VAR_1);
  if (! VAR_18)
   return -VAR_0;
  *VAR_18 = VAR_17;
  VAR_18->signature = VAR_5;
  VAR_18->assigned = VAR_14;
  VAR_18->allocated = VAR_15;
  VAR_20 = &VAR_13->slots[VAR_14->oss_id];
  FUNC_5(VAR_20);
  VAR_20->stereo = VAR_17.channels > 1 ? 1 : 0;
  VAR_20->get_volume = VAR_8;
  VAR_20->put_volume = VAR_11;

  if (VAR_17.present & VAR_4) {
   VAR_20->get_recsrc = VAR_7;
   VAR_20->put_recsrc = VAR_10;
  } else if (VAR_17.present & VAR_3) {
   VAR_20->get_recsrc = VAR_6;
   VAR_20->put_recsrc = VAR_9;
  } else if (VAR_17.present & VAR_2) {
   VAR_13->mask_recsrc |= 1 << VAR_14->oss_id;
  }
  VAR_20->private_data = VAR_18;
  VAR_20->private_free = VAR_12;
  return 1;
 }
 return 0;
}
