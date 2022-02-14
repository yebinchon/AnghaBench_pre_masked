
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {int chip; } ;
struct TYPE_4__ {int id; int * resume; struct usb_mixer_interface* mixer; } ;
struct usb_mixer_elem_info {int val_type; int channels; TYPE_2__ head; void* private_data; scalar_t__ idx_off; scalar_t__ control; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; int private_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_mixer_elem_info*) ;
 struct usb_mixer_elem_info* FUNC_1 (int,int ) ;
 struct snd_kcontrol* FUNC_2 (struct snd_kcontrol_new const*,struct usb_mixer_elem_info*) ;
 int FUNC_3 (TYPE_2__*,struct snd_kcontrol*) ;
 int VAR_3 ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct usb_mixer_interface *VAR_4,
 const struct snd_kcontrol_new *VAR_5,
 int VAR_6, int VAR_7, int VAR_8,
 const char *VAR_9, void *VAR_10,
 bool VAR_11,
 struct usb_mixer_elem_info **VAR_12)
{
 struct snd_kcontrol *VAR_13;
 struct usb_mixer_elem_info *VAR_14;
 int VAR_15;

 FUNC_5(VAR_4->chip, "us16x08 add mixer %s\n", VAR_9);

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->head.mixer = VAR_4;
 VAR_14->head.resume = ((void*)0);
 VAR_14->control = 0;
 VAR_14->idx_off = 0;
 VAR_14->head.id = VAR_6;
 VAR_14->val_type = VAR_7;
 VAR_14->channels = VAR_8;
 VAR_14->private_data = VAR_10;

 VAR_13 = FUNC_2(VAR_5, VAR_14);
 if (!VAR_13) {
  FUNC_0(VAR_14);
  return -VAR_0;
 }

 if (VAR_11)
  VAR_13->private_free = VAR_2;
 else
  VAR_13->private_free = VAR_3;

 FUNC_4(VAR_13->id.name, VAR_9, sizeof(VAR_13->id.name));

 VAR_15 = FUNC_3(&VAR_14->head, VAR_13);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_12)
  *VAR_12 = VAR_14;

 return 0;
}
