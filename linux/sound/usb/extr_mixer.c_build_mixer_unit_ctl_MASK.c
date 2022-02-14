
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbmix_name_map {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct usb_mixer_elem_info {int control; int cmask; TYPE_2__ head; int max; int min; int channels; int val_type; } ;
struct usb_audio_term {int dummy; } ;
struct uac_mixer_unit_descriptor {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; int private_free; } ;
struct mixer_build {int chip; TYPE_3__* mixer; int map; } ;
typedef int __u8 ;
struct TYPE_7__ {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol*,char*) ;
 scalar_t__ FUNC_1 (struct usbmix_name_map const*) ;
 unsigned int FUNC_2 (struct usbmix_name_map const*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int,unsigned int,int) ;
 struct usbmix_name_map* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct usb_mixer_elem_info*,int ) ;
 unsigned int FUNC_6 (int ,struct usb_audio_term*,int ,int,int ) ;
 struct usb_mixer_elem_info* FUNC_7 (int,int ) ;
 struct snd_kcontrol* FUNC_8 (int *,struct usb_mixer_elem_info*) ;
 int FUNC_9 (TYPE_2__*,struct snd_kcontrol*) ;
 int VAR_2 ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*,int) ;
 unsigned int FUNC_11 (int ,char*,int) ;
 int * FUNC_12 (struct uac_mixer_unit_descriptor*,int ) ;
 int FUNC_13 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_14 (int ,char*) ;
 int VAR_3 ;
 int FUNC_15 (struct usb_mixer_elem_info*) ;

__attribute__((used)) static void FUNC_16(struct mixer_build *VAR_4,
     struct uac_mixer_unit_descriptor *VAR_5,
     int VAR_6, int VAR_7, int VAR_8,
     int VAR_9, struct usb_audio_term *VAR_10)
{
 struct usb_mixer_elem_info *VAR_11;
 unsigned int VAR_12, VAR_13;
 struct snd_kcontrol *VAR_14;
 const struct usbmix_name_map *VAR_15;

 VAR_15 = FUNC_4(VAR_4->map, VAR_9, 0);
 if (FUNC_1(VAR_15))
  return;

 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return;

 FUNC_10(&VAR_11->head, VAR_4->mixer, VAR_9);
 VAR_11->control = VAR_7 + 1;
 VAR_11->val_type = VAR_1;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  __u8 *VAR_16 = FUNC_12(VAR_5, VAR_4->mixer->protocol);

  if (FUNC_3(VAR_16, VAR_7, VAR_12, VAR_8)) {
   VAR_11->cmask |= (1 << VAR_12);
   VAR_11->channels++;
  }
 }


 FUNC_5(VAR_11, 0);

 VAR_14 = FUNC_8(&VAR_3, VAR_11);
 if (!VAR_14) {
  FUNC_14(VAR_4->chip, "cannot malloc kcontrol\n");
  FUNC_15(VAR_11);
  return;
 }
 VAR_14->private_free = VAR_2;

 VAR_13 = FUNC_2(VAR_15, VAR_14->id.name, sizeof(VAR_14->id.name));
 if (!VAR_13)
  VAR_13 = FUNC_6(VAR_4->chip, VAR_10, VAR_14->id.name,
        sizeof(VAR_14->id.name), 0);
 if (!VAR_13)
  VAR_13 = FUNC_11(VAR_14->id.name, "Mixer Source %d", VAR_7 + 1);
 FUNC_0(VAR_14, " Volume");

 FUNC_13(VAR_4->chip, "[%d] MU [%s] ch = %d, val = %d/%d\n",
      VAR_11->head.id, VAR_14->id.name, VAR_11->channels, VAR_11->min, VAR_11->max);
 FUNC_9(&VAR_11->head, VAR_14);
}
