
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usbpath ;
struct TYPE_4__ {int iProduct; int iManufacturer; } ;
struct usb_device {TYPE_2__ descriptor; } ;
struct TYPE_3__ {struct snd_card* card; struct usb_device* dev; } ;
struct snd_usb_caiaqdev {char* vendor_name; char* product_name; int ep1_in_urb; int spec_received; int ep1_wait_queue; int prepare_wait_queue; int midi_out_urb; int midi_out_buf; int ep1_in_buf; TYPE_1__ chip; } ;
struct snd_card {char* driver; char* shortname; char* mixername; char* id; int longname; } ;
struct device {int dummy; } ;
typedef int id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 struct device* FUNC_0 (struct snd_usb_caiaqdev*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct snd_usb_caiaqdev*) ;
 int FUNC_5 (struct snd_card*,char*) ;
 int VAR_9 ;
 int FUNC_6 (struct snd_usb_caiaqdev*,int ,int *,int ) ;
 int FUNC_7 (int ,int,char*,char*,char*,char*) ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_10 ;
 int FUNC_9 (int *,struct usb_device*,int ,int ,int ,int ,struct snd_usb_caiaqdev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct usb_device*,char*,int) ;
 int FUNC_13 (struct usb_device*,int) ;
 scalar_t__ FUNC_14 (struct usb_device*,int ,int) ;
 int FUNC_15 (struct usb_device*,int) ;
 int FUNC_16 (struct usb_device*,int ,char*,int ) ;
 scalar_t__ FUNC_17 (int *,int ) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct snd_usb_caiaqdev *VAR_11)
{
 char *VAR_12, VAR_13[32];
 struct usb_device *VAR_14 = VAR_11->chip.dev;
 struct snd_card *VAR_15 = VAR_11->chip.card;
 struct device *VAR_16 = FUNC_0(VAR_11);
 int VAR_17, VAR_18;

 if (FUNC_14(VAR_14, 0, 1) != 0) {
  FUNC_1(VAR_16, "can't set alt interface.\n");
  return -VAR_2;
 }

 FUNC_10(&VAR_11->ep1_in_urb);
 FUNC_10(&VAR_11->midi_out_urb);

 FUNC_9(&VAR_11->ep1_in_urb, VAR_14,
     FUNC_13(VAR_14, 0x1),
     VAR_11->ep1_in_buf, VAR_4,
     VAR_10, VAR_11);

 FUNC_9(&VAR_11->midi_out_urb, VAR_14,
     FUNC_15(VAR_14, 0x1),
     VAR_11->midi_out_buf, VAR_4,
     VAR_9, VAR_11);


 if (FUNC_18(&VAR_11->ep1_in_urb) ||
     FUNC_18(&VAR_11->midi_out_urb)) {
  FUNC_1(VAR_16, "invalid EPs\n");
  return -VAR_1;
 }

 FUNC_2(&VAR_11->ep1_wait_queue);
 FUNC_2(&VAR_11->prepare_wait_queue);

 if (FUNC_17(&VAR_11->ep1_in_urb, VAR_6) != 0)
  return -VAR_2;

 VAR_17 = FUNC_6(VAR_11, VAR_5, ((void*)0), 0);
 if (VAR_17)
  goto err_kill_urb;

 if (!FUNC_19(VAR_11->ep1_wait_queue, VAR_11->spec_received, VAR_7)) {
  VAR_17 = -VAR_3;
  goto err_kill_urb;
 }

 FUNC_16(VAR_14, VAR_14->descriptor.iManufacturer,
     VAR_11->vendor_name, VAR_0);

 FUNC_16(VAR_14, VAR_14->descriptor.iProduct,
     VAR_11->product_name, VAR_0);

 FUNC_8(VAR_15->driver, VAR_8, sizeof(VAR_15->driver));
 FUNC_8(VAR_15->shortname, VAR_11->product_name, sizeof(VAR_15->shortname));
 FUNC_8(VAR_15->mixername, VAR_11->product_name, sizeof(VAR_15->mixername));





 if (*VAR_15->id == '\0') {
  char VAR_19[sizeof(VAR_15->id)];

  FUNC_3(VAR_19, 0, sizeof(VAR_19));

  for (VAR_12 = VAR_15->shortname, VAR_18 = 0;
   *VAR_12 && VAR_18 < sizeof(VAR_15->id); VAR_12++)
   if (*VAR_12 != ' ')
    VAR_19[VAR_18++] = *VAR_12;

  FUNC_5(VAR_15, VAR_19);
 }

 FUNC_12(VAR_14, VAR_13, sizeof(VAR_13));
 FUNC_7(VAR_15->longname, sizeof(VAR_15->longname), "%s %s (%s)",
         VAR_11->vendor_name, VAR_11->product_name, VAR_13);

 FUNC_4(VAR_11);
 return 0;

 err_kill_urb:
 FUNC_11(&VAR_11->ep1_in_urb);
 return VAR_17;
}
