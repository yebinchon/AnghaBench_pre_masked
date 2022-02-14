
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbmix_name_map {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct usb_mixer_elem_info {int control; int channels; int master_readonly; int min; int max; int res; int initialized; TYPE_2__ head; int val_type; } ;
struct uac_processing_unit_descriptor {int bNrInPins; int wProcessType; int * baSourceID; } ;
struct TYPE_5__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; int private_free; } ;
struct procunit_value_info {int member_0; char* member_1; int control; char* suffix; int min_value; int val_type; int member_2; } ;
struct procunit_info {int type; char const* name; struct procunit_value_info* values; struct procunit_value_info* member_2; int * member_1; int member_0; } ;
struct mixer_build {int chip; TYPE_3__* mixer; int map; } ;
typedef int __u8 ;
struct TYPE_7__ {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;





 int FUNC_0 (struct snd_kcontrol*,char*) ;
 scalar_t__ FUNC_1 (struct usbmix_name_map const*) ;
 scalar_t__ FUNC_2 (struct usbmix_name_map const*,int ,int) ;
 struct usbmix_name_map* FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct usb_mixer_elem_info*,int ) ;
 struct usb_mixer_elem_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (struct mixer_build*,int ) ;
 struct snd_kcontrol* FUNC_8 (int *,struct usb_mixer_elem_info*) ;
 int FUNC_9 (int ,int,int ,int) ;
 int FUNC_10 (TYPE_2__*,struct snd_kcontrol*) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_12 (int ,char const*,int) ;
 int FUNC_13 (struct uac_processing_unit_descriptor*,int) ;
 int* FUNC_14 (struct uac_processing_unit_descriptor*,int) ;
 int FUNC_15 (struct uac_processing_unit_descriptor*,int) ;
 int* FUNC_16 (struct uac_processing_unit_descriptor*,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (int ,char*,int ,int ,int,int,int) ;
 int FUNC_20 (struct usb_mixer_elem_info*) ;

__attribute__((used)) static int FUNC_21(struct mixer_build *VAR_6, int VAR_7,
    void *VAR_8, struct procunit_info *VAR_9,
    bool VAR_10)
{
 struct uac_processing_unit_descriptor *VAR_11 = VAR_8;
 int VAR_12;
 struct usb_mixer_elem_info *VAR_13;
 struct snd_kcontrol *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 struct procunit_info *VAR_20;
 struct procunit_value_info *VAR_21;
 const struct usbmix_name_map *VAR_22;
 static struct procunit_value_info VAR_23[] = {
  { 0x01, "Switch", 129 },
  { 0 }
 };
 static struct procunit_info VAR_24 = {
  0, ((void*)0), VAR_23
 };
 const char *VAR_25 = VAR_10 ?
  "Extension Unit" : "Processing Unit";

 VAR_12 = VAR_11->bNrInPins;
 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
  VAR_16 = FUNC_7(VAR_6, VAR_11->baSourceID[VAR_15]);
  if (VAR_16 < 0)
   return VAR_16;
 }

 VAR_18 = FUNC_6(VAR_11->wProcessType);
 for (VAR_20 = VAR_9; VAR_20 && VAR_20->type; VAR_20++)
  if (VAR_20->type == VAR_18)
   break;
 if (!VAR_20 || !VAR_20->type)
  VAR_20 = &VAR_24;

 for (VAR_21 = VAR_20->values; VAR_21->control; VAR_21++) {
  __u8 *VAR_26 = FUNC_14(VAR_11, VAR_6->mixer->protocol);

  if (VAR_6->mixer->protocol == 132) {
   if (!(VAR_26[VAR_21->control / 8] &
     (1 << ((VAR_21->control % 8) - 1))))
    continue;
  } else {
   if (!FUNC_17(VAR_26[VAR_21->control / 8],
         VAR_21->control))
    continue;
  }

  VAR_22 = FUNC_3(VAR_6->map, VAR_7, VAR_21->control);
  if (FUNC_1(VAR_22))
   continue;
  VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_1);
  if (!VAR_13)
   return -VAR_0;
  FUNC_11(&VAR_13->head, VAR_6->mixer, VAR_7);
  VAR_13->control = VAR_21->control;
  VAR_13->val_type = VAR_21->val_type;
  VAR_13->channels = 1;

  if (VAR_6->mixer->protocol > 132 &&
      !FUNC_18(VAR_26[VAR_21->control / 8],
         VAR_21->control))
   VAR_13->master_readonly = 1;


  switch (VAR_18) {
  case 133: {
   bool VAR_27 = 0;

   switch (VAR_6->mixer->protocol) {
   case 132:
   case 131:
   default:
    if (VAR_13->control == VAR_3)
     VAR_27 = 1;
    break;
   case 130:
    if (VAR_13->control == VAR_2)
     VAR_27 = 1;
    break;
   }

   if (VAR_27) {
    __u8 *VAR_28 = FUNC_16(VAR_11,
        VAR_6->mixer->protocol);
    VAR_13->min = 1;
    VAR_13->max = VAR_28[0];
    VAR_13->res = 1;
    VAR_13->initialized = 1;
    break;
   }

   FUNC_4(VAR_13, VAR_21->min_value);
   break;
  }
  case 128:




   VAR_13->min = 0;
   VAR_13->max = 5;
   VAR_13->res = 1;
   VAR_13->initialized = 1;
   break;
  default:
   FUNC_4(VAR_13, VAR_21->min_value);
   break;
  }

  VAR_14 = FUNC_8(&VAR_4, VAR_13);
  if (!VAR_14) {
   FUNC_20(VAR_13);
   return -VAR_0;
  }
  VAR_14->private_free = VAR_5;

  if (FUNC_2(VAR_22, VAR_14->id.name, sizeof(VAR_14->id.name))) {
                 ;
  } else if (VAR_20->name) {
   FUNC_12(VAR_14->id.name, VAR_20->name, sizeof(VAR_14->id.name));
  } else {
   if (VAR_10)
    VAR_17 = FUNC_13(VAR_11, VAR_6->mixer->protocol);
   else
    VAR_17 = FUNC_15(VAR_11, VAR_6->mixer->protocol);
   VAR_19 = 0;
   if (VAR_17)
    VAR_19 = FUNC_9(VAR_6->chip,
              VAR_17,
              VAR_14->id.name,
              sizeof(VAR_14->id.name));
   if (!VAR_19)
    FUNC_12(VAR_14->id.name, VAR_25, sizeof(VAR_14->id.name));
  }
  FUNC_0(VAR_14, " ");
  FUNC_0(VAR_14, VAR_21->suffix);

  FUNC_19(VAR_6->chip,
         "[%d] PU [%s] ch = %d, val = %d/%d\n",
         VAR_13->head.id, VAR_14->id.name, VAR_13->channels,
         VAR_13->min, VAR_13->max);

  VAR_16 = FUNC_10(&VAR_13->head, VAR_14);
  if (VAR_16 < 0)
   return VAR_16;
 }
 return 0;
}
