
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface_descriptor {int bNumEndpoints; int bAlternateSetting; } ;
struct usb_host_interface {int extralen; int extra; TYPE_1__* endpoint; } ;
struct uac_iso_endpoint_descriptor {int bLength; scalar_t__ bDescriptorSubtype; int bmAttributes; } ;
struct uac3_iso_endpoint_descriptor {int bLength; int bmControls; } ;
struct uac2_iso_endpoint_descriptor {int bLength; int bmControls; } ;
struct snd_usb_audio {int dummy; } ;
struct TYPE_2__ {int extralen; int extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_interface_descriptor* FUNC_0 (struct usb_host_interface*) ;
 int FUNC_1 (int ) ;
 struct uac_iso_endpoint_descriptor* FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (struct snd_usb_audio*,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_usb_audio *VAR_7,
      struct usb_host_interface *VAR_8,
      int VAR_9, int VAR_10)
{


 struct uac_iso_endpoint_descriptor *VAR_11;
 struct usb_interface_descriptor *VAR_12 = FUNC_0(VAR_8);
 int VAR_13 = 0;

 VAR_11 = FUNC_2(VAR_8->endpoint[0].extra, VAR_8->endpoint[0].extralen, ((void*)0), VAR_6);


 if (!VAR_11 && VAR_12->bNumEndpoints >= 2)
  VAR_11 = FUNC_2(VAR_8->endpoint[1].extra, VAR_8->endpoint[1].extralen, ((void*)0), VAR_6);






 if (!VAR_11)
  VAR_11 = FUNC_2(VAR_8->extra, VAR_8->extralen, ((void*)0), VAR_6);

 if (!VAR_11 || VAR_11->bLength < 7 ||
     VAR_11->bDescriptorSubtype != VAR_3)
  goto error;

 if (VAR_9 == VAR_4) {
  VAR_13 = VAR_11->bmAttributes;
 } else if (VAR_9 == VAR_5) {
  struct uac2_iso_endpoint_descriptor *VAR_14 =
   (struct uac2_iso_endpoint_descriptor *) VAR_11;

  if (VAR_14->bLength < sizeof(*VAR_14))
   goto error;
  VAR_13 = VAR_11->bmAttributes & VAR_1;


  if (VAR_14->bmControls & VAR_0)
   VAR_13 |= VAR_2;
 } else {
  struct uac3_iso_endpoint_descriptor *VAR_15 =
   (struct uac3_iso_endpoint_descriptor *) VAR_11;

  if (VAR_15->bLength < sizeof(*VAR_15))
   goto error;

  if (FUNC_1(VAR_15->bmControls) & VAR_0)
   VAR_13 |= VAR_2;
 }

 return VAR_13;

 error:
 FUNC_3(VAR_7,
         "%u:%d : no or invalid class specific endpoint descriptor\n",
         VAR_10, VAR_12->bAlternateSetting);
 return 0;
}
