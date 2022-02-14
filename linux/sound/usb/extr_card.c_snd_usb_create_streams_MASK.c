
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {int bInterfaceProtocol; } ;
struct usb_interface_assoc_descriptor {int const bFunctionProtocol; int bFunctionSubClass; int bInterfaceCount; int bFirstInterface; int bFunctionClass; } ;
struct usb_interface {struct usb_interface_assoc_descriptor* intf_assoc; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {scalar_t__ extralen; scalar_t__ extra; } ;
struct usb_device {int dev; } ;
struct uac1_ac_header_descriptor {int bLength; int bInCollection; int* baInterfaceNr; } ;
struct snd_usb_audio {int badd_profile; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 struct usb_interface_descriptor* FUNC_3 (struct usb_host_interface*) ;
 int FUNC_4 (struct snd_usb_audio*,int,int) ;
 struct uac1_ac_header_descriptor* FUNC_5 (scalar_t__,scalar_t__,int *,int ) ;
 struct usb_interface* FUNC_6 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_usb_audio *VAR_6, int VAR_7)
{
 struct usb_device *VAR_8 = VAR_6->dev;
 struct usb_host_interface *VAR_9;
 struct usb_interface_descriptor *VAR_10;
 int VAR_11, VAR_12;


 VAR_9 = &FUNC_6(VAR_8, VAR_7)->altsetting[0];
 VAR_10 = FUNC_3(VAR_9);
 VAR_12 = VAR_10->bInterfaceProtocol;

 switch (VAR_12) {
 default:
  FUNC_2(&VAR_8->dev,
    "unknown interface protocol %#02x, assuming v1\n",
    VAR_12);


 case 130: {
  struct uac1_ac_header_descriptor *VAR_13;
  int VAR_14;

  VAR_13 = FUNC_5(VAR_9->extra,
        VAR_9->extralen,
        ((void*)0), VAR_4);
  if (!VAR_13 || VAR_13->bLength < sizeof(*VAR_13)) {
   FUNC_0(&VAR_8->dev, "cannot find UAC_HEADER\n");
   return -VAR_0;
  }

  VAR_14 = (void *)(VAR_9->extra +
    VAR_9->extralen) - (void *)VAR_13;


  if (VAR_14 <= 0) {
   FUNC_0(&VAR_8->dev, "invalid control header\n");
   return -VAR_0;
  }

  if (VAR_14 < sizeof(*VAR_13)) {
   FUNC_0(&VAR_8->dev, "too short v1 buffer descriptor\n");
   return -VAR_0;
  }

  if (!VAR_13->bInCollection) {
   FUNC_1(&VAR_8->dev, "skipping empty audio interface (v1)\n");
   return -VAR_0;
  }

  if (VAR_14 < VAR_13->bLength) {
   FUNC_0(&VAR_8->dev, "invalid buffer length (v1)\n");
   return -VAR_0;
  }

  if (VAR_13->bLength < sizeof(*VAR_13) + VAR_13->bInCollection) {
   FUNC_0(&VAR_8->dev, "invalid UAC_HEADER (v1)\n");
   return -VAR_0;
  }

  for (VAR_11 = 0; VAR_11 < VAR_13->bInCollection; VAR_11++)
   FUNC_4(VAR_6, VAR_7, VAR_13->baInterfaceNr[VAR_11]);

  break;
 }

 case 129:
 case 128: {
  struct usb_interface_assoc_descriptor *VAR_15 =
   FUNC_6(VAR_8, VAR_7)->intf_assoc;

  if (!VAR_15) {





   struct usb_interface *VAR_16 =
    FUNC_6(VAR_8, VAR_7 + 1);
   if (VAR_16 &&
       VAR_16->intf_assoc &&
       VAR_16->intf_assoc->bFunctionClass == VAR_5 &&
       VAR_16->intf_assoc->bFunctionProtocol == 129)
    VAR_15 = VAR_16->intf_assoc;
  }

  if (!VAR_15) {
   FUNC_0(&VAR_8->dev, "Audio class v2/v3 interfaces need an interface association\n");
   return -VAR_0;
  }

  if (VAR_12 == 128) {
   int VAR_17 = VAR_15->bFunctionSubClass;

   if (VAR_17 != VAR_1 &&
       (VAR_17 < VAR_2 ||
        VAR_17 > VAR_3)) {
    FUNC_0(&VAR_8->dev,
     "Unsupported UAC3 BADD profile\n");
    return -VAR_0;
   }

   VAR_6->badd_profile = VAR_17;
  }

  for (VAR_11 = 0; VAR_11 < VAR_15->bInterfaceCount; VAR_11++) {
   int VAR_18 = VAR_15->bFirstInterface + VAR_11;

   if (VAR_18 != VAR_7)
    FUNC_4(VAR_6, VAR_7, VAR_18);
  }

  break;
 }
 }

 return 0;
}
