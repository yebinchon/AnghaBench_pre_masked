
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_mixer_elem_resume_func_t ;
struct usb_mixer_interface {int dummy; } ;
struct TYPE_4__ {int id; int resume; struct usb_mixer_interface* mixer; } ;
struct usb_mixer_elem_info {int control; int idx_off; int val_type; int channels; TYPE_2__ head; void* private_data; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; int private_free; } ;
struct scarlett_mixer_elem_enum_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_mixer_elem_info*) ;
 struct usb_mixer_elem_info* FUNC_1 (int,int ) ;
 struct snd_kcontrol* FUNC_2 (struct snd_kcontrol_new const*,struct usb_mixer_elem_info*) ;
 int FUNC_3 (TYPE_2__*,struct snd_kcontrol*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct usb_mixer_interface *VAR_3,
         const struct snd_kcontrol_new *VAR_4,
         usb_mixer_elem_resume_func_t VAR_5,
         int VAR_6, int VAR_7, int VAR_8,
         int VAR_9, int VAR_10, const char *VAR_11,
         const struct scarlett_mixer_elem_enum_info *VAR_12,
         struct usb_mixer_elem_info **VAR_13
)
{
 struct snd_kcontrol *VAR_14;
 struct usb_mixer_elem_info *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_1(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_15->head.mixer = VAR_3;
 VAR_15->head.resume = VAR_5;
 VAR_15->control = VAR_7;
 VAR_15->idx_off = VAR_8;
 VAR_15->head.id = VAR_6;
 VAR_15->val_type = VAR_9;

 VAR_15->channels = VAR_10;


 VAR_15->private_data = (void *)VAR_12;

 VAR_14 = FUNC_2(VAR_4, VAR_15);
 if (!VAR_14) {
  FUNC_0(VAR_15);
  return -VAR_0;
 }
 VAR_14->private_free = VAR_2;

 FUNC_4(VAR_14->id.name, VAR_11, sizeof(VAR_14->id.name));

 VAR_16 = FUNC_3(&VAR_15->head, VAR_14);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_13)
  *VAR_13 = VAR_15;

 return 0;
}
