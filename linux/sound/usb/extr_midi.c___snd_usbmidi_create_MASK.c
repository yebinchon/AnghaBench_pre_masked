
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct snd_usb_midi_endpoint_info {int in_cables; int out_cables; } ;
struct snd_usb_midi {unsigned int usb_id; int list; struct usb_interface* iface; TYPE_2__* dev; int * usb_protocol_ops; int error_timer; int mutex; int disc_rwsem; int disc_lock; struct snd_usb_audio_quirk const* quirk; struct snd_card* card; } ;
struct snd_usb_audio_quirk {int type; int data; } ;
struct snd_card {int dummy; } ;
struct list_head {int dummy; } ;
typedef int endpoints ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct TYPE_7__ {int dev; TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct snd_usb_midi*) ;
 struct snd_usb_midi* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,struct list_head*) ;
 int FUNC_9 (struct snd_usb_midi_endpoint_info*,int ,int) ;
 int FUNC_10 (struct snd_usb_midi_endpoint_info*,int ,int) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*) ;
 int FUNC_13 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*) ;
 int FUNC_14 (struct snd_usb_midi*,int,int) ;
 int FUNC_15 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*,int) ;
 int FUNC_16 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*) ;
 int FUNC_17 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*) ;
 int FUNC_18 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (struct snd_usb_midi*,struct snd_usb_midi_endpoint_info*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (struct usb_interface*) ;
 int FUNC_23 (TYPE_2__*,int ,int,int,int,int ,int *,int ,int) ;
 int FUNC_24 (TYPE_2__*,int ,int ) ;
 int FUNC_25 (TYPE_2__*,int ) ;

int FUNC_26(struct snd_card *VAR_16,
    struct usb_interface *VAR_17,
    struct list_head *VAR_18,
    const struct snd_usb_audio_quirk *VAR_19,
    unsigned int VAR_20)
{
 struct snd_usb_midi *VAR_21;
 struct snd_usb_midi_endpoint_info VAR_22[VAR_3];
 int VAR_23, VAR_24;
 int VAR_25, VAR_26;

 VAR_21 = FUNC_6(sizeof(*VAR_21), VAR_2);
 if (!VAR_21)
  return -VAR_0;
 VAR_21->dev = FUNC_4(VAR_17);
 VAR_21->card = VAR_16;
 VAR_21->iface = VAR_17;
 VAR_21->quirk = VAR_19;
 VAR_21->usb_protocol_ops = &VAR_15;
 FUNC_20(&VAR_21->disc_lock);
 FUNC_3(&VAR_21->disc_rwsem);
 FUNC_11(&VAR_21->mutex);
 if (!VAR_20)
  VAR_20 = FUNC_0(FUNC_7(VAR_21->dev->descriptor.idVendor),
          FUNC_7(VAR_21->dev->descriptor.idProduct));
 VAR_21->usb_id = VAR_20;
 FUNC_21(&VAR_21->error_timer, VAR_9, 0);


 FUNC_10(VAR_22, 0, sizeof(VAR_22));
 switch (VAR_19 ? VAR_19->type : 130) {
 case 130:
  VAR_26 = FUNC_19(VAR_21, VAR_22);
  if (VAR_21->usb_id == FUNC_0(0x0763, 0x0150))
   VAR_21->usb_protocol_ops =
    &VAR_11;
  break;
 case 129:
  VAR_21->usb_protocol_ops = &VAR_4;

 case 136:
  FUNC_9(&VAR_22[0], VAR_19->data,
         sizeof(struct snd_usb_midi_endpoint_info));
  VAR_26 = FUNC_15(VAR_21, &VAR_22[0], 1);
  break;
 case 128:
  VAR_26 = FUNC_18(VAR_21, &VAR_22[0]);
  break;
 case 131:
  VAR_26 = FUNC_17(VAR_21, &VAR_22[0]);
  break;
 case 134:
  VAR_21->usb_protocol_ops = &VAR_12;
  FUNC_9(&VAR_22[0], VAR_19->data,
         sizeof(struct snd_usb_midi_endpoint_info));
  VAR_26 = 0;
  break;
 case 133:
  VAR_21->usb_protocol_ops = &VAR_13;
  VAR_26 = FUNC_16(VAR_21, VAR_22);
  break;
 case 132:
  VAR_21->usb_protocol_ops = &VAR_14;
  if (VAR_21->usb_id == FUNC_0(0x07fd, 0x0001))
   FUNC_24(VAR_21->dev, 0, 0);
  VAR_26 = FUNC_16(VAR_21, VAR_22);
  break;
 case 137:
  VAR_21->usb_protocol_ops = &VAR_8;
  FUNC_9(&VAR_22[0], VAR_19->data,
         sizeof(struct snd_usb_midi_endpoint_info));
  VAR_26 = FUNC_15(VAR_21, &VAR_22[0], 1);
  break;
 case 138:
  VAR_21->usb_protocol_ops = &VAR_7;
  VAR_26 = FUNC_16(VAR_21, VAR_22);
  break;
 case 140:
  VAR_21->usb_protocol_ops = &VAR_5;
  VAR_26 = FUNC_16(VAR_21, VAR_22);

  VAR_22[1].out_cables = 0;
  break;
 case 135:
  VAR_21->usb_protocol_ops = &VAR_10;


  VAR_26 = FUNC_23(VAR_21->dev, FUNC_25(VAR_21->dev, 0),
          3, 0x40, 0x60, 0, ((void*)0), 0, 1000);
  if (VAR_26 < 0)
   break;

  VAR_26 = FUNC_16(VAR_21, VAR_22);
  break;
 case 139:
  VAR_21->usb_protocol_ops = &VAR_6;
  VAR_26 = FUNC_16(VAR_21, VAR_22);
  break;
 default:
  FUNC_1(&VAR_21->dev->dev, "invalid quirk type %d\n",
   VAR_19->type);
  VAR_26 = -VAR_1;
  break;
 }
 if (VAR_26 < 0)
  goto free_midi;


 VAR_23 = 0;
 VAR_24 = 0;
 for (VAR_25 = 0; VAR_25 < VAR_3; ++VAR_25) {
  VAR_23 += FUNC_2(VAR_22[VAR_25].out_cables);
  VAR_24 += FUNC_2(VAR_22[VAR_25].in_cables);
 }
 VAR_26 = FUNC_14(VAR_21, VAR_23, VAR_24);
 if (VAR_26 < 0)
  goto free_midi;


 if (VAR_19 && VAR_19->type == 134)
  VAR_26 = FUNC_13(VAR_21, &VAR_22[0]);
 else
  VAR_26 = FUNC_12(VAR_21, VAR_22);
 if (VAR_26 < 0)
  goto exit;

 FUNC_22(VAR_21->iface);

 FUNC_8(&VAR_21->list, VAR_18);
 return 0;

free_midi:
 FUNC_5(VAR_21);
exit:
 return VAR_26;
}
