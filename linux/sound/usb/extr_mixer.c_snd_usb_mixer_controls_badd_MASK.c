
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbmix_ctl_map {int id; int map; } ;
struct usb_mixer_interface {TYPE_1__* chip; } ;
struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_interface_assoc_descriptor {int bInterfaceCount; int bFirstInterface; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; struct usb_interface_assoc_descriptor* intf_assoc; } ;
struct usb_host_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_audio_term {void* type; int id; } ;
struct uac3_badd_profile {int subclass; int st_chmask; scalar_t__ name; } ;
typedef int oterm ;
typedef int iterm ;
struct TYPE_5__ {char bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_4__ {int badd_profile; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char VAR_10 ;
 int FUNC_0 (struct usb_mixer_interface*,struct usb_audio_term*,int) ;
 int FUNC_1 (struct usb_mixer_interface*,int,int ,int ,int ) ;
 TYPE_3__* FUNC_2 (struct usb_host_interface*,int ) ;
 struct usb_interface_descriptor* FUNC_3 (struct usb_host_interface*) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_audio_term*,int ,int) ;
 int FUNC_6 (struct usb_mixer_interface*,struct uac3_badd_profile*,int,int) ;
 struct uac3_badd_profile* VAR_11 ;
 struct usbmix_ctl_map* VAR_12 ;
 int FUNC_7 (TYPE_1__*,char*,int,int,int) ;
 int FUNC_8 (TYPE_1__*,char*,unsigned int) ;
 struct usb_interface* FUNC_9 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_10(struct usb_mixer_interface *VAR_13,
           int VAR_14)
{
 struct usb_device *VAR_15 = VAR_13->chip->dev;
 struct usb_interface_assoc_descriptor *VAR_16;
 int VAR_17 = VAR_13->chip->badd_profile;
 struct uac3_badd_profile *VAR_18;
 const struct usbmix_ctl_map *VAR_19;
 int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 int VAR_23;

 VAR_16 = FUNC_9(VAR_15, VAR_14)->intf_assoc;


 for (VAR_23 = 0; VAR_23 < VAR_16->bInterfaceCount; VAR_23++) {
  int VAR_24 = VAR_16->bFirstInterface + VAR_23;

  struct usb_interface *VAR_25;
  struct usb_host_interface *VAR_26;
  struct usb_interface_descriptor *VAR_27;
  unsigned int VAR_28;
  char VAR_29;
  int VAR_30, VAR_31;

  if (VAR_24 == VAR_14)
   continue;

  VAR_25 = FUNC_9(VAR_15, VAR_24);
  VAR_31 = VAR_25->num_altsetting;

  if (VAR_31 < 2)
   return -VAR_0;
  VAR_26 = &VAR_25->altsetting[1];
  VAR_27 = FUNC_3(VAR_26);

  if (VAR_27->bNumEndpoints < 1)
   return -VAR_0;


  VAR_29 = (FUNC_2(VAR_26, 0)->bEndpointAddress & VAR_10);
  VAR_28 = FUNC_4(FUNC_2(VAR_26, 0)->wMaxPacketSize);

  switch (VAR_28) {
  default:
   FUNC_8(VAR_13->chip,
    "incorrect wMaxPacketSize 0x%x for BADD profile\n",
    VAR_28);
   return -VAR_0;
  case 131:
  case 135:
  case 130:
  case 134:
   VAR_30 = 1;
   break;
  case 129:
  case 133:
  case 128:
  case 132:
   VAR_30 = 3;
   break;
  }

  if (VAR_29)
   VAR_21 = VAR_30;
  else
   VAR_20 = VAR_30;
 }

 FUNC_7(VAR_13->chip,
  "UAC3 BADD profile 0x%x: detected c_chmask=%d p_chmask=%d\n",
  VAR_17, VAR_21, VAR_20);


 for (VAR_19 = VAR_12; VAR_19->id; VAR_19++) {
  if (VAR_19->id == VAR_17)
   break;
 }

 if (!VAR_19->id)
  return -VAR_0;

 for (VAR_18 = VAR_11; VAR_18->name; VAR_18++) {
  if (VAR_17 == VAR_18->subclass)
   break;
 }
 if (!VAR_18->name)
  return -VAR_0;
 if (!FUNC_6(VAR_13, VAR_18, VAR_21, VAR_20))
  return -VAR_0;
 VAR_22 = VAR_18->st_chmask;


 if (VAR_20) {

  FUNC_1(VAR_13, 0, VAR_8,
           VAR_1, VAR_19->map);

  FUNC_1(VAR_13, VAR_20, VAR_9,
           VAR_1, VAR_19->map);
 }


 if (VAR_21) {

  FUNC_1(VAR_13, 0, VAR_8,
           VAR_2, VAR_19->map);

  FUNC_1(VAR_13, VAR_21, VAR_9,
           VAR_2, VAR_19->map);
 }


 if (VAR_22) {

  FUNC_1(VAR_13, 0, VAR_8,
           VAR_3, VAR_19->map);

  FUNC_1(VAR_13, 1, VAR_9,
           VAR_3, VAR_19->map);
 }


 if (VAR_18->subclass == VAR_6) {
  struct usb_audio_term VAR_32, VAR_33;


  FUNC_5(&VAR_32, 0, sizeof(VAR_32));
  VAR_32.id = VAR_4;
  VAR_32.type = VAR_7;
  FUNC_0(VAR_13, &VAR_32, 1);


  FUNC_5(&VAR_33, 0, sizeof(VAR_33));
  VAR_33.id = VAR_5;
  VAR_33.type = VAR_7;
  FUNC_0(VAR_13, &VAR_33, 0);
 }

 return 0;
}
