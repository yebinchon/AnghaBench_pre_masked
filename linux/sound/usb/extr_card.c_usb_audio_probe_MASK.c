
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct TYPE_3__ {int idProduct; int idVendor; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
struct snd_usb_audio_quirk {int ifnum; scalar_t__ shares_media_device; } ;
struct snd_usb_audio {size_t index; int card; int num_interfaces; int active; scalar_t__ txfr_quirk; struct usb_host_interface* ctrl_intf; struct usb_interface* pm_intf; int shutdown; struct usb_device* dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int,int) ;
 int FUNC_8 (int *,struct snd_usb_audio*) ;
 scalar_t__* VAR_6 ;
 scalar_t__ FUNC_9 (struct usb_device*,int *) ;
 struct snd_usb_audio_quirk* FUNC_10 (struct usb_device*,int ) ;
 TYPE_2__* FUNC_11 (struct usb_host_interface*) ;
 int VAR_7 ;
 struct usb_device* FUNC_12 (struct usb_interface*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int* VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct snd_usb_audio*,struct usb_interface*) ;
 int FUNC_19 (struct usb_device*,struct usb_interface*,struct snd_usb_audio_quirk const*,int ) ;
 int FUNC_20 (struct usb_interface*,struct usb_device*,int,struct snd_usb_audio_quirk const*,int ,struct snd_usb_audio**) ;
 int FUNC_21 (struct snd_usb_audio*,int,int ) ;
 int FUNC_22 (struct snd_usb_audio*,struct usb_interface*,int *,struct snd_usb_audio_quirk const*) ;
 int FUNC_23 (struct snd_usb_audio*,int) ;
 int VAR_10 ;
 struct snd_usb_audio** VAR_11 ;
 int FUNC_24 (struct usb_interface*,struct snd_usb_audio*) ;
 int* VAR_12 ;

__attribute__((used)) static int FUNC_25(struct usb_interface *VAR_13,
      const struct usb_device_id *VAR_14)
{
 struct usb_device *VAR_15 = FUNC_12(VAR_13);
 const struct snd_usb_audio_quirk *VAR_16 =
  (const struct snd_usb_audio_quirk *)VAR_14->driver_info;
 struct snd_usb_audio *VAR_17;
 int VAR_18, VAR_19;
 struct usb_host_interface *VAR_20;
 int VAR_21;
 u32 VAR_22;

 VAR_20 = &VAR_13->altsetting[0];
 VAR_21 = FUNC_11(VAR_20)->bInterfaceNumber;
 VAR_22 = FUNC_0(FUNC_13(VAR_15->descriptor.idVendor),
      FUNC_13(VAR_15->descriptor.idProduct));
 if (FUNC_9(VAR_15, &VAR_22))
  VAR_16 = FUNC_10(VAR_15, VAR_22);
 if (VAR_16 && VAR_16->ifnum >= 0 && VAR_21 != VAR_16->ifnum)
  return -VAR_3;

 VAR_19 = FUNC_19(VAR_15, VAR_13, VAR_16, VAR_22);
 if (VAR_19 < 0)
  return VAR_19;






 VAR_17 = ((void*)0);
 FUNC_14(&VAR_9);
 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  if (VAR_11[VAR_18] && VAR_11[VAR_18]->dev == VAR_15) {
   if (FUNC_5(&VAR_11[VAR_18]->shutdown)) {
    FUNC_6(&VAR_15->dev, "USB device is in the shutdown state, cannot create a card instance\n");
    VAR_19 = -VAR_0;
    goto __error;
   }
   VAR_17 = VAR_11[VAR_18];
   FUNC_4(&VAR_17->active);
   break;
  }
 }
 if (! VAR_17) {



  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++)
   if (!VAR_11[VAR_18] &&
       (VAR_12[VAR_18] == -1 || VAR_12[VAR_18] == FUNC_2(VAR_22)) &&
       (VAR_8[VAR_18] == -1 || VAR_8[VAR_18] == FUNC_1(VAR_22))) {
    if (VAR_6[VAR_18]) {
     VAR_19 = FUNC_20(VAR_13, VAR_15, VAR_18, VAR_16,
           VAR_22, &VAR_17);
     if (VAR_19 < 0)
      goto __error;
     VAR_17->pm_intf = VAR_13;
     break;
    } else if (VAR_12[VAR_18] != -1 || VAR_8[VAR_18] != -1) {
     FUNC_7(&VAR_15->dev,
       "device (%04x:%04x) is disabled\n",
       FUNC_2(VAR_22),
       FUNC_1(VAR_22));
     VAR_19 = -VAR_2;
     goto __error;
    }
   }
  if (!VAR_17) {
   FUNC_6(&VAR_15->dev, "no available usb audio device\n");
   VAR_19 = -VAR_1;
   goto __error;
  }
 }
 FUNC_8(&VAR_15->dev, VAR_17);






 if (!VAR_17->ctrl_intf)
  VAR_17->ctrl_intf = VAR_20;

 VAR_17->txfr_quirk = 0;
 VAR_19 = 1;
 if (VAR_16 && VAR_16->ifnum != VAR_4) {

  VAR_19 = FUNC_22(VAR_17, VAR_13, &VAR_10, VAR_16);
  if (VAR_19 < 0)
   goto __error;
 }

 if (VAR_19 > 0) {

  VAR_19 = FUNC_23(VAR_17, VAR_21);
  if (VAR_19 < 0)
   goto __error;
  VAR_19 = FUNC_21(VAR_17, VAR_21, VAR_7);
  if (VAR_19 < 0)
   goto __error;
 }


 VAR_19 = FUNC_17(VAR_17->card);
 if (VAR_19 < 0)
  goto __error;

 if (VAR_16 && VAR_16->shares_media_device) {

  FUNC_18(VAR_17, VAR_13);
 }

 VAR_11[VAR_17->index] = VAR_17;
 VAR_17->num_interfaces++;
 FUNC_24(VAR_13, VAR_17);
 FUNC_3(&VAR_17->active);
 FUNC_15(&VAR_9);
 return 0;

 __error:
 if (VAR_17) {



  FUNC_3(&VAR_17->active);
  if (!VAR_17->num_interfaces)
   FUNC_16(VAR_17->card);
 }
 FUNC_15(&VAR_9);
 return VAR_19;
}
