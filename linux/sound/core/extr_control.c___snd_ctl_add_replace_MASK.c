
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_elem_id {scalar_t__ index; scalar_t__ numid; int name; int subdevice; int device; int iface; } ;
struct snd_kcontrol {unsigned int count; struct snd_ctl_elem_id id; int list; } ;
struct snd_card {unsigned int controls_count; scalar_t__ last_numid; int controls; int dev; } ;
typedef enum snd_ctl_add_mode { ____Placeholder_snd_ctl_add_mode } snd_ctl_add_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct snd_card*,unsigned int) ;
 struct snd_kcontrol* FUNC_3 (struct snd_card*,struct snd_ctl_elem_id*) ;
 int FUNC_4 (struct snd_card*,int ,struct snd_ctl_elem_id*) ;
 int FUNC_5 (struct snd_card*,struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_card *VAR_7,
     struct snd_kcontrol *VAR_8,
     enum snd_ctl_add_mode VAR_9)
{
 struct snd_ctl_elem_id VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 struct snd_kcontrol *VAR_13;
 int VAR_14;

 VAR_10 = VAR_8->id;
 if (VAR_10.index > VAR_6 - VAR_8->count)
  return -VAR_3;

 VAR_13 = FUNC_3(VAR_7, &VAR_10);
 if (!VAR_13) {
  if (VAR_9 == VAR_1)
   return -VAR_3;
 } else {
  if (VAR_9 == VAR_0) {
   FUNC_0(VAR_7->dev,
    "control %i:%i:%i:%s:%i is already present\n",
    VAR_10.iface, VAR_10.device, VAR_10.subdevice, VAR_10.name,
    VAR_10.index);
   return -VAR_2;
  }

  VAR_14 = FUNC_5(VAR_7, VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
 }

 if (FUNC_2(VAR_7, VAR_8->count) < 0)
  return -VAR_4;

 FUNC_1(&VAR_8->list, &VAR_7->controls);
 VAR_7->controls_count += VAR_8->count;
 VAR_8->id.numid = VAR_7->last_numid + 1;
 VAR_7->last_numid += VAR_8->count;

 VAR_10 = VAR_8->id;
 VAR_12 = VAR_8->count;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++, VAR_10.index++, VAR_10.numid++)
  FUNC_4(VAR_7, VAR_5, &VAR_10);

 return 0;
}
