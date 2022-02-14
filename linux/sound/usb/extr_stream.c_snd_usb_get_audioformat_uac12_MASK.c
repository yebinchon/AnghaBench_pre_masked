
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct usb_host_interface {int extralen; int extra; } ;
struct usb_device {int dev; } ;
struct uac_input_terminal_descriptor {unsigned int bNrChannels; int wChannelConfig; } ;
struct uac_format_type_i_continuous_descriptor {int bLength; int bNrChannels; int bSubframeSize; } ;
struct uac2_output_terminal_descriptor {int bCSourceID; } ;
struct uac2_input_terminal_descriptor {int bCSourceID; unsigned int bNrChannels; int bmChannelConfig; } ;
struct uac2_as_header_descriptor {int bLength; unsigned int bNrChannels; int bTerminalLink; int bmChannelConfig; int bmFormats; } ;
struct uac1_as_header_descriptor {int bLength; int bTerminalLink; int wFormatTag; } ;
struct snd_usb_audio {int ctrl_intf; struct usb_device* dev; } ;
struct audioformat {unsigned int channels; int chmap; int attributes; } ;


 int VAR_0 ;
 struct audioformat* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct audioformat* FUNC_1 (struct snd_usb_audio*,struct usb_host_interface*,int,int,int,int,unsigned int,int) ;
 int FUNC_2 (struct audioformat*) ;
 int FUNC_3 (unsigned int,unsigned int,int) ;
 int FUNC_4 (int *,char*,int,int,...) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct snd_usb_audio*,struct usb_host_interface*,int,int) ;
 int FUNC_8 (struct snd_usb_audio*,struct audioformat*,int) ;
 void* FUNC_9 (int ,int ,int *,int ) ;
 void* FUNC_10 (int ,int ,int) ;
 struct uac2_output_terminal_descriptor* FUNC_11 (int ,int ,int) ;
 scalar_t__ FUNC_12 (struct snd_usb_audio*,struct audioformat*,void*,struct uac_format_type_i_continuous_descriptor*,int) ;

__attribute__((used)) static struct audioformat *
FUNC_13(struct snd_usb_audio *VAR_5,
         struct usb_host_interface *VAR_6,
         int VAR_7, int VAR_8, int VAR_9,
         int VAR_10, int VAR_11, int VAR_12)
{
 struct usb_device *VAR_13 = VAR_5->dev;
 struct uac_format_type_i_continuous_descriptor *VAR_14;
 unsigned int VAR_15 = 0, VAR_16 = 0;
 struct audioformat *VAR_17;
 int VAR_18 = 0;
 u64 VAR_19;


 if (VAR_7 == VAR_3) {
  struct uac1_as_header_descriptor *VAR_20 =
   FUNC_9(VAR_6->extra, VAR_6->extralen,
      ((void*)0), VAR_1);
  struct uac_input_terminal_descriptor *VAR_21;

  if (!VAR_20) {
   FUNC_4(&VAR_13->dev,
    "%u:%d : UAC_AS_GENERAL descriptor not found\n",
    VAR_8, VAR_10);
   return ((void*)0);
  }

  if (VAR_20->bLength < sizeof(*VAR_20)) {
   FUNC_4(&VAR_13->dev,
    "%u:%d : invalid UAC_AS_GENERAL desc\n",
    VAR_8, VAR_10);
   return ((void*)0);
  }

  VAR_19 = FUNC_5(VAR_20->wFormatTag);

  VAR_21 = FUNC_10(VAR_5->ctrl_intf,
              VAR_20->bTerminalLink,
              VAR_7);
  if (VAR_21) {
   VAR_15 = VAR_21->bNrChannels;
   VAR_16 = FUNC_5(VAR_21->wChannelConfig);
  }
 } else {
  struct uac2_input_terminal_descriptor *VAR_22;
  struct uac2_output_terminal_descriptor *VAR_23;
  struct uac2_as_header_descriptor *VAR_24 =
   FUNC_9(VAR_6->extra, VAR_6->extralen,
      ((void*)0), VAR_1);

  if (!VAR_24) {
   FUNC_4(&VAR_13->dev,
    "%u:%d : UAC_AS_GENERAL descriptor not found\n",
    VAR_8, VAR_10);
   return ((void*)0);
  }

  if (VAR_24->bLength < sizeof(*VAR_24)) {
   FUNC_4(&VAR_13->dev,
    "%u:%d : invalid UAC_AS_GENERAL desc\n",
    VAR_8, VAR_10);
   return ((void*)0);
  }

  VAR_15 = VAR_24->bNrChannels;
  VAR_19 = FUNC_6(VAR_24->bmFormats);
  VAR_16 = FUNC_6(VAR_24->bmChannelConfig);





  VAR_22 = FUNC_10(VAR_5->ctrl_intf,
            VAR_24->bTerminalLink,
            VAR_7);
  if (VAR_22) {
   VAR_18 = VAR_22->bCSourceID;
   if (!VAR_16 && (VAR_15 == VAR_22->bNrChannels))
    VAR_16 = FUNC_6(VAR_22->bmChannelConfig);
   goto found_clock;
  }

  VAR_23 = FUNC_11(VAR_5->ctrl_intf,
              VAR_24->bTerminalLink,
              VAR_7);
  if (VAR_23) {
   VAR_18 = VAR_23->bCSourceID;
   goto found_clock;
  }

  FUNC_4(&VAR_13->dev,
   "%u:%d : bogus bTerminalLink %d\n",
   VAR_8, VAR_10, VAR_24->bTerminalLink);
  return ((void*)0);
 }

found_clock:

 VAR_14 = FUNC_9(VAR_6->extra, VAR_6->extralen,
          ((void*)0), VAR_2);
 if (!VAR_14) {
  FUNC_4(&VAR_13->dev,
   "%u:%d : no UAC_FORMAT_TYPE desc\n",
   VAR_8, VAR_10);
  return ((void*)0);
 }
 if (((VAR_7 == VAR_3) && (VAR_14->bLength < 8))
   || ((VAR_7 == VAR_4) &&
     (VAR_14->bLength < 6))) {
  FUNC_4(&VAR_13->dev,
   "%u:%d : invalid UAC_FORMAT_TYPE desc\n",
   VAR_8, VAR_10);
  return ((void*)0);
 }
 if (VAR_12 && VAR_14->bNrChannels == 1 && VAR_14->bSubframeSize == 2)
  return ((void*)0);

 VAR_17 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_9, VAR_10, VAR_15, VAR_18);
 if (!VAR_17)
  return FUNC_0(-VAR_0);

 VAR_17->attributes = FUNC_7(VAR_5, VAR_6, VAR_7,
             VAR_8);


 FUNC_8(VAR_5, VAR_17, VAR_11);


 if (FUNC_12(VAR_5, VAR_17, VAR_19,
     VAR_14, VAR_11) < 0) {
  FUNC_2(VAR_17);
  return ((void*)0);
 }


 if (VAR_17->channels != VAR_15)
  VAR_16 = 0;

 VAR_17->chmap = FUNC_3(VAR_17->channels, VAR_16, VAR_7);

 return VAR_17;
}
