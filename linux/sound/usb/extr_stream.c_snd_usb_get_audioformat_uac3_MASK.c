
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct usb_host_interface {int extralen; int extra; } ;
struct usb_device {int dev; } ;
struct uac3_output_terminal_descriptor {int bCSourceID; } ;
struct uac3_input_terminal_descriptor {int bCSourceID; } ;
struct uac3_hc_descriptor_header {unsigned int channels; unsigned int bNrChannels; int pd_d2d0_rec; int pd_d1d0_rec; int pd_id; int wLength; int * map; } ;
struct uac3_cluster_header_descriptor {unsigned int channels; unsigned int bNrChannels; int pd_d2d0_rec; int pd_d1d0_rec; int pd_id; int wLength; int * map; } ;
struct uac3_as_header_descriptor {int bLength; int bTerminalLink; int wClusterDescrID; } ;
struct snd_usb_power_domain {unsigned int channels; unsigned int bNrChannels; int pd_d2d0_rec; int pd_d1d0_rec; int pd_id; int wLength; int * map; } ;
struct snd_usb_audio {unsigned char badd_profile; int ctrl_intf; struct usb_device* dev; } ;
struct snd_pcm_chmap_elem {unsigned int channels; unsigned int bNrChannels; int pd_d2d0_rec; int pd_d1d0_rec; int pd_id; int wLength; int * map; } ;
struct audioformat {scalar_t__ attributes; int rates; void* rate_max; void* rate_min; scalar_t__ nr_rates; int formats; int fmt_type; struct uac3_hc_descriptor_header* chmap; } ;
typedef int hc_header ;
struct TYPE_2__ {int wMaxPacketSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audioformat* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 unsigned char VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct audioformat* FUNC_1 (struct snd_usb_audio*,struct usb_host_interface*,int ,int,int,int,unsigned int,int) ;
 int FUNC_2 (struct audioformat*) ;
 struct uac3_hc_descriptor_header* FUNC_3 (struct uac3_hc_descriptor_header*) ;
 int FUNC_4 (int *,char*,int,int,...) ;
 TYPE_1__* FUNC_5 (struct usb_host_interface*,int ) ;
 int FUNC_6 (struct uac3_hc_descriptor_header*) ;
 struct uac3_hc_descriptor_header* FUNC_7 (int,int ) ;
 void* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct snd_usb_audio*,struct usb_host_interface*,int ,int) ;
 int FUNC_10 (struct usb_device*,int ,int ,int,int,int ,struct uac3_hc_descriptor_header*,int) ;
 int FUNC_11 (struct snd_usb_audio*) ;
 struct uac3_as_header_descriptor* FUNC_12 (int ,int ,int *,int ) ;
 struct uac3_input_terminal_descriptor* FUNC_13 (int ,int ,int ) ;
 struct uac3_output_terminal_descriptor* FUNC_14 (int ,int ,int ) ;
 struct uac3_hc_descriptor_header* FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (struct snd_usb_audio*,struct audioformat*,struct uac3_as_header_descriptor*,int) ;
 int FUNC_17 (struct usb_device*,int ) ;

__attribute__((used)) static struct audioformat *
FUNC_18(struct snd_usb_audio *VAR_24,
        struct usb_host_interface *VAR_25,
        struct snd_usb_power_domain **VAR_26,
        int VAR_27, int VAR_28,
        int VAR_29, int VAR_30)
{
 struct usb_device *VAR_31 = VAR_24->dev;
 struct uac3_input_terminal_descriptor *VAR_32;
 struct uac3_output_terminal_descriptor *VAR_33;
 struct uac3_cluster_header_descriptor *VAR_34;
 struct uac3_as_header_descriptor *VAR_35 = ((void*)0);
 struct uac3_hc_descriptor_header VAR_36;
 struct snd_pcm_chmap_elem *VAR_37;
 struct snd_usb_power_domain *VAR_38;
 unsigned char VAR_39;
 u64 VAR_40 = 0;
 unsigned int VAR_41;
 struct audioformat *VAR_42;
 u16 VAR_43, VAR_44;
 int VAR_45 = 0;
 int VAR_46;

 VAR_39 = VAR_24->badd_profile;

 if (VAR_39 >= VAR_17) {
  unsigned int VAR_47 =
   FUNC_8(FUNC_5(VAR_25, 0)->wMaxPacketSize);

  switch (VAR_47) {
  default:
   FUNC_4(&VAR_31->dev,
    "%u:%d : incorrect wMaxPacketSize for BADD profile\n",
    VAR_27, VAR_29);
   return ((void*)0);
  case 131:
  case 135:
   VAR_40 = VAR_6;
   VAR_41 = 1;
   break;
  case 130:
  case 134:
   VAR_40 = VAR_7;
   VAR_41 = 1;
   break;
  case 129:
  case 133:
   VAR_40 = VAR_6;
   VAR_41 = 2;
   break;
  case 128:
  case 132:
   VAR_40 = VAR_7;
   VAR_41 = 2;
   break;
  }

  VAR_37 = FUNC_7(sizeof(*VAR_37), VAR_2);
  if (!VAR_37)
   return FUNC_0(-VAR_1);

  if (VAR_41 == 1) {
   VAR_37->map[0] = VAR_5;
  } else {
   VAR_37->map[0] = VAR_3;
   VAR_37->map[1] = VAR_4;
  }

  VAR_37->channels = VAR_41;
  VAR_45 = VAR_10;
  goto found_clock;
 }

 VAR_35 = FUNC_12(VAR_25->extra, VAR_25->extralen,
         ((void*)0), VAR_18);
 if (!VAR_35) {
  FUNC_4(&VAR_31->dev,
   "%u:%d : UAC_AS_GENERAL descriptor not found\n",
   VAR_27, VAR_29);
  return ((void*)0);
 }

 if (VAR_35->bLength < sizeof(*VAR_35)) {
  FUNC_4(&VAR_31->dev,
   "%u:%d : invalid UAC_AS_GENERAL desc\n",
   VAR_27, VAR_29);
  return ((void*)0);
 }

 VAR_43 = FUNC_8(VAR_35->wClusterDescrID);
 if (!VAR_43) {
  FUNC_4(&VAR_31->dev,
   "%u:%d : no cluster descriptor\n",
   VAR_27, VAR_29);
  return ((void*)0);
 }
 VAR_46 = FUNC_10(VAR_24->dev,
   FUNC_17(VAR_24->dev, 0),
   VAR_16,
   VAR_22 | VAR_23 | VAR_21,
   VAR_43,
   FUNC_11(VAR_24),
   &VAR_36, sizeof(VAR_36));
 if (VAR_46 < 0)
  return FUNC_0(VAR_46);
 else if (VAR_46 != sizeof(VAR_36)) {
  FUNC_4(&VAR_31->dev,
   "%u:%d : can't get High Capability descriptor\n",
   VAR_27, VAR_29);
  return FUNC_0(-VAR_0);
 }





 VAR_44 = FUNC_8(VAR_36.wLength);
 VAR_34 = FUNC_7(VAR_44, VAR_2);
 if (!VAR_34)
  return FUNC_0(-VAR_1);
 VAR_46 = FUNC_10(VAR_24->dev,
   FUNC_17(VAR_24->dev, 0),
   VAR_16,
   VAR_22 | VAR_23 | VAR_21,
   VAR_43,
   FUNC_11(VAR_24),
   VAR_34, VAR_44);
 if (VAR_46 < 0) {
  FUNC_6(VAR_34);
  return FUNC_0(VAR_46);
 } else if (VAR_46 != VAR_44) {
  FUNC_4(&VAR_31->dev,
   "%u:%d : can't get Cluster Descriptor\n",
   VAR_27, VAR_29);
  FUNC_6(VAR_34);
  return FUNC_0(-VAR_0);
 }

 VAR_41 = VAR_34->bNrChannels;
 VAR_37 = FUNC_3(VAR_34);
 FUNC_6(VAR_34);





 VAR_32 = FUNC_13(VAR_24->ctrl_intf,
           VAR_35->bTerminalLink,
           VAR_20);
 if (VAR_32) {
  VAR_45 = VAR_32->bCSourceID;
  goto found_clock;
 }

 VAR_33 = FUNC_14(VAR_24->ctrl_intf,
             VAR_35->bTerminalLink,
             VAR_20);
 if (VAR_33) {
  VAR_45 = VAR_33->bCSourceID;
  goto found_clock;
 }

 FUNC_4(&VAR_31->dev, "%u:%d : bogus bTerminalLink %d\n",
   VAR_27, VAR_29, VAR_35->bTerminalLink);
 FUNC_6(VAR_37);
 return ((void*)0);

found_clock:
 VAR_42 = FUNC_1(VAR_24, VAR_25, VAR_20, VAR_27,
         VAR_28, VAR_29, VAR_41, VAR_45);
 if (!VAR_42) {
  FUNC_6(VAR_37);
  return FUNC_0(-VAR_1);
 }

 VAR_42->chmap = VAR_37;

 if (VAR_39 >= VAR_17) {
  VAR_42->attributes = 0;

  VAR_42->fmt_type = VAR_19;
  VAR_42->formats = VAR_40;

  VAR_42->nr_rates = 0;
  VAR_42->rate_min = VAR_15;
  VAR_42->rate_max = VAR_15;
  VAR_42->rates = VAR_8;

  VAR_38 = FUNC_7(sizeof(*VAR_38), VAR_2);
  if (!VAR_38) {
   FUNC_2(VAR_42);
   return ((void*)0);
  }
  VAR_38->pd_id = (VAR_30 == VAR_9) ?
     VAR_11 : VAR_12;
  VAR_38->pd_d1d0_rec = VAR_13;
  VAR_38->pd_d2d0_rec = VAR_14;

 } else {
  VAR_42->attributes = FUNC_9(VAR_24, VAR_25,
              VAR_20,
              VAR_27);

  VAR_38 = FUNC_15(VAR_24->ctrl_intf,
            VAR_35->bTerminalLink);


  if (FUNC_16(VAR_24, VAR_42, VAR_35, VAR_30) < 0) {
   FUNC_6(VAR_38);
   FUNC_2(VAR_42);
   return ((void*)0);
  }
 }

 if (VAR_38)
  *VAR_26 = VAR_38;

 return VAR_42;
}
