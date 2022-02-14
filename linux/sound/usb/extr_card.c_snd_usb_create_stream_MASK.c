
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; } ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct snd_usb_audio {int usb_id; int midi_list; int card; struct usb_device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,struct usb_interface*,int *,int *,int ) ;
 int FUNC_2 (int *,char*,int,int,...) ;
 int FUNC_3 (int *,char*,...) ;
 struct usb_interface_descriptor* FUNC_4 (struct usb_host_interface*) ;
 scalar_t__ FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct snd_usb_audio*,int) ;
 int VAR_7 ;
 int FUNC_7 (int *,struct usb_interface*,void*) ;
 struct usb_interface* FUNC_8 (struct usb_device*,int) ;
 scalar_t__ FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usb_device*,int,int ) ;

__attribute__((used)) static int FUNC_11(struct snd_usb_audio *VAR_8, int VAR_9, int VAR_10)
{
 struct usb_device *VAR_11 = VAR_8->dev;
 struct usb_host_interface *VAR_12;
 struct usb_interface_descriptor *VAR_13;
 struct usb_interface *VAR_14 = FUNC_8(VAR_11, VAR_10);

 if (!VAR_14) {
  FUNC_3(&VAR_11->dev, "%u:%d : does not exist\n",
   VAR_9, VAR_10);
  return -VAR_0;
 }

 VAR_12 = &VAR_14->altsetting[0];
 VAR_13 = FUNC_4(VAR_12);





 if ((VAR_8->usb_id == FUNC_0(0x18d1, 0x2d04) ||
      VAR_8->usb_id == FUNC_0(0x18d1, 0x2d05)) &&
     VAR_10 == 0 &&
     VAR_13->bInterfaceClass == VAR_2 &&
     VAR_13->bInterfaceSubClass == VAR_6) {
  VAR_10 = 2;
  VAR_14 = FUNC_8(VAR_11, VAR_10);
  if (!VAR_14)
   return -VAR_0;
  VAR_12 = &VAR_14->altsetting[0];
  VAR_13 = FUNC_4(VAR_12);
 }

 if (FUNC_9(VAR_14)) {
  FUNC_2(&VAR_11->dev, "%d:%d: skipping, already claimed\n",
   VAR_9, VAR_10);
  return -VAR_0;
 }

 if ((VAR_13->bInterfaceClass == VAR_1 ||
      VAR_13->bInterfaceClass == VAR_2) &&
     VAR_13->bInterfaceSubClass == VAR_5) {
  int VAR_15 = FUNC_1(VAR_8->card, VAR_14,
          &VAR_8->midi_list, ((void*)0),
          VAR_8->usb_id);
  if (VAR_15 < 0) {
   FUNC_3(&VAR_11->dev,
    "%u:%d: cannot create sequencer device\n",
    VAR_9, VAR_10);
   return -VAR_0;
  }
  FUNC_7(&VAR_7, VAR_14, (void *)-1L);

  return 0;
 }

 if ((VAR_13->bInterfaceClass != VAR_1 &&
      VAR_13->bInterfaceClass != VAR_2) ||
     VAR_13->bInterfaceSubClass != VAR_4) {
  FUNC_2(&VAR_11->dev,
   "%u:%d: skipping non-supported interface %d\n",
   VAR_9, VAR_10, VAR_13->bInterfaceClass);

  return -VAR_0;
 }

 if (FUNC_5(VAR_11) == VAR_3) {
  FUNC_3(&VAR_11->dev, "low speed audio streaming not supported\n");
  return -VAR_0;
 }

 if (! FUNC_6(VAR_8, VAR_10)) {
  FUNC_10(VAR_11, VAR_10, 0);
  FUNC_7(&VAR_7, VAR_14, (void *)-1L);
 }

 return 0;
}
