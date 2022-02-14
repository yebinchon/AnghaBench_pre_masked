
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface_descriptor {int bInterfaceProtocol; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; int bNumEndpoints; int bAlternateSetting; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct snd_usb_power_domain {int dummy; } ;
struct snd_usb_audio {scalar_t__ usb_id; struct usb_device* dev; } ;
struct audioformat {int altsetting; int channels; int maxpacksize; scalar_t__ fmt_type; int endpoint; int rate_max; int formats; } ;
struct TYPE_2__ {int bmAttributes; int bEndpointAddress; int wMaxPacketSize; } ;


 scalar_t__ FUNC_0 (struct audioformat*) ;
 int FUNC_1 (struct audioformat*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct audioformat*) ;
 int FUNC_5 (int *,char*,int,int,int) ;
 TYPE_1__* FUNC_6 (struct usb_host_interface*,int ) ;
 struct usb_interface_descriptor* FUNC_7 (struct usb_host_interface*) ;
 int FUNC_8 (struct snd_usb_power_domain*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct snd_usb_audio*,int,struct audioformat*) ;
 int FUNC_11 (struct snd_usb_audio*,int,struct audioformat*,struct snd_usb_power_domain*) ;
 scalar_t__ FUNC_12 (struct snd_usb_audio*,int,int) ;
 struct audioformat* FUNC_13 (struct snd_usb_audio*,struct usb_host_interface*,int,int,int,int,int,int) ;
 struct audioformat* FUNC_14 (struct snd_usb_audio*,struct usb_host_interface*,struct snd_usb_power_domain**,int,int,int,int) ;
 int FUNC_15 (struct snd_usb_audio*,int,struct usb_host_interface*,struct audioformat*) ;
 int FUNC_16 (struct snd_usb_audio*,int,struct usb_host_interface*,struct audioformat*,int ) ;
 struct usb_interface* FUNC_17 (struct usb_device*,int) ;
 int FUNC_18 (struct usb_device*,int,int) ;

__attribute__((used)) static int FUNC_19(struct snd_usb_audio *VAR_11,
        int VAR_12,
        bool *VAR_13, bool VAR_14)
{
 struct usb_device *VAR_15;
 struct usb_interface *VAR_16;
 struct usb_host_interface *VAR_17;
 struct usb_interface_descriptor *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22;
 struct audioformat *VAR_23 = ((void*)0);
 struct snd_usb_power_domain *VAR_24 = ((void*)0);
 int VAR_25, VAR_26;

 VAR_15 = VAR_11->dev;


 VAR_16 = FUNC_17(VAR_15, VAR_12);

 VAR_25 = VAR_16->num_altsetting;





 if (VAR_11->usb_id == FUNC_2(0x04fa, 0x4201))
  VAR_25 = 4;

 for (VAR_19 = 0; VAR_19 < VAR_25; VAR_19++) {
  VAR_17 = &VAR_16->altsetting[VAR_19];
  VAR_18 = FUNC_7(VAR_17);
  VAR_26 = VAR_18->bInterfaceProtocol;

  if (((VAR_18->bInterfaceClass != VAR_4 ||
        (VAR_18->bInterfaceSubClass != VAR_9 &&
         VAR_18->bInterfaceSubClass != VAR_10)) &&
       VAR_18->bInterfaceClass != VAR_5) ||
      VAR_18->bNumEndpoints < 1 ||
      FUNC_9(FUNC_6(VAR_17, 0)->wMaxPacketSize) == 0)
   continue;

  if ((FUNC_6(VAR_17, 0)->bmAttributes & VAR_7) !=
      VAR_8)
   continue;

  VAR_22 = (FUNC_6(VAR_17, 0)->bEndpointAddress & VAR_6) ?
   VAR_1 : VAR_2;
  VAR_20 = VAR_18->bAlternateSetting;

  if (FUNC_12(VAR_11, VAR_12, VAR_20))
   continue;





  if (FUNC_3(VAR_11->usb_id) == 0x0582 &&
      VAR_18->bInterfaceClass == VAR_5 &&
      VAR_26 <= 2)
   VAR_26 = 130;

  switch (VAR_26) {
  default:
   FUNC_5(&VAR_15->dev, "%u:%d: unknown interface protocol %#02x, assuming v1\n",
    VAR_12, VAR_20, VAR_26);
   VAR_26 = 130;

  case 130:

  case 129: {
   int VAR_27 = 0;
   if (VAR_20 == 2 && VAR_25 == 3 &&
       VAR_23 && VAR_23->altsetting == 1 && VAR_23->channels == 1 &&
       VAR_23->formats == VAR_0 &&
       VAR_26 == 130 &&
       FUNC_9(FUNC_6(VAR_17, 0)->wMaxPacketSize) ==
       VAR_23->maxpacksize * 2)
    VAR_27 = 1;

   VAR_23 = FUNC_13(VAR_11, VAR_17, VAR_26,
          VAR_12, VAR_19, VAR_20,
          VAR_22, VAR_27);
   break;
  }
  case 128:
   VAR_23 = FUNC_14(VAR_11, VAR_17, &VAR_24,
      VAR_12, VAR_19, VAR_20, VAR_22);
   break;
  }

  if (!VAR_23)
   continue;
  else if (FUNC_0(VAR_23))
   return FUNC_1(VAR_23);

  if (VAR_23->fmt_type != VAR_3)
   *VAR_13 = 1;
  if ((VAR_23->fmt_type == VAR_3) == VAR_14) {
   FUNC_4(VAR_23);
   FUNC_8(VAR_24);
   VAR_23 = ((void*)0);
   VAR_24 = ((void*)0);
   continue;
  }

  FUNC_5(&VAR_15->dev, "%u:%d: add audio endpoint %#x\n", VAR_12, VAR_20, VAR_23->endpoint);
  if (VAR_26 == 128)
   VAR_21 = FUNC_11(VAR_11, VAR_22, VAR_23, VAR_24);
  else
   VAR_21 = FUNC_10(VAR_11, VAR_22, VAR_23);

  if (VAR_21 < 0) {
   FUNC_4(VAR_23);
   FUNC_8(VAR_24);
   return VAR_21;
  }

  FUNC_18(VAR_11->dev, VAR_12, VAR_20);
  FUNC_15(VAR_11, VAR_12, VAR_17, VAR_23);
  FUNC_16(VAR_11, VAR_12, VAR_17, VAR_23, VAR_23->rate_max);
 }
 return 0;
}
