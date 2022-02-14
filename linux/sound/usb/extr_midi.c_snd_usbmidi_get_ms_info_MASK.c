
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ms_header_descriptor {int bLength; scalar_t__ bDescriptorType; scalar_t__ bDescriptorSubtype; int* bcdMSC; } ;
struct usb_ms_endpoint_descriptor {int bLength; scalar_t__ bDescriptorType; scalar_t__ bDescriptorSubtype; int bNumEmbMIDIJack; } ;
struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int extralen; struct usb_host_endpoint* endpoint; scalar_t__ extra; } ;
struct usb_host_endpoint {int extralen; scalar_t__ extra; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct snd_usb_midi_endpoint_info {int out_interval; int out_cables; int in_interval; int in_cables; void* in_ep; void* out_ep; } ;
struct snd_usb_midi {TYPE_1__* dev; struct usb_interface* iface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*) ;
 struct usb_endpoint_descriptor* FUNC_2 (struct usb_host_endpoint*) ;
 struct usb_interface_descriptor* FUNC_3 (struct usb_host_interface*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor*) ;
 void* FUNC_6 (struct usb_endpoint_descriptor*) ;
 int FUNC_7 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_9(struct snd_usb_midi *VAR_7,
       struct snd_usb_midi_endpoint_info *VAR_8)
{
 struct usb_interface *VAR_9;
 struct usb_host_interface *VAR_10;
 struct usb_interface_descriptor *VAR_11;
 struct usb_ms_header_descriptor *VAR_12;
 struct usb_host_endpoint *VAR_13;
 struct usb_endpoint_descriptor *VAR_14;
 struct usb_ms_endpoint_descriptor *VAR_15;
 int VAR_16, VAR_17;

 VAR_9 = VAR_7->iface;
 if (!VAR_9)
  return -VAR_0;
 VAR_10 = &VAR_9->altsetting[0];
 VAR_11 = FUNC_3(VAR_10);
 VAR_12 = (struct usb_ms_header_descriptor *)VAR_10->extra;
 if (VAR_10->extralen >= 7 &&
     VAR_12->bLength >= 7 &&
     VAR_12->bDescriptorType == VAR_5 &&
     VAR_12->bDescriptorSubtype == VAR_2)
  FUNC_0(&VAR_7->dev->dev, "MIDIStreaming version %02x.%02x\n",
       VAR_12->bcdMSC[1], VAR_12->bcdMSC[0]);
 else
  FUNC_1(&VAR_7->dev->dev,
    "MIDIStreaming interface descriptor not found\n");

 VAR_17 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_11->bNumEndpoints; ++VAR_16) {
  VAR_13 = &VAR_10->endpoint[VAR_16];
  VAR_14 = FUNC_2(VAR_13);
  if (!FUNC_7(VAR_14) && !FUNC_8(VAR_14))
   continue;
  VAR_15 = (struct usb_ms_endpoint_descriptor *)VAR_13->extra;
  if (VAR_13->extralen < 4 ||
      VAR_15->bLength < 4 ||
      VAR_15->bDescriptorType != VAR_4 ||
      VAR_15->bDescriptorSubtype != VAR_3)
   continue;
  if (FUNC_5(VAR_14)) {
   if (VAR_8[VAR_17].out_ep) {
    if (++VAR_17 >= VAR_1) {
     FUNC_1(&VAR_7->dev->dev,
       "too many endpoints\n");
     break;
    }
   }
   VAR_8[VAR_17].out_ep = FUNC_6(VAR_14);
   if (FUNC_8(VAR_14))
    VAR_8[VAR_17].out_interval = VAR_14->bInterval;
   else if (FUNC_4(VAR_7->dev) == VAR_6)





    VAR_8[VAR_17].out_interval = 1;
   VAR_8[VAR_17].out_cables =
    (1 << VAR_15->bNumEmbMIDIJack) - 1;
   FUNC_0(&VAR_7->dev->dev, "EP %02X: %d jack(s)\n",
    VAR_14->bEndpointAddress, VAR_15->bNumEmbMIDIJack);
  } else {
   if (VAR_8[VAR_17].in_ep) {
    if (++VAR_17 >= VAR_1) {
     FUNC_1(&VAR_7->dev->dev,
       "too many endpoints\n");
     break;
    }
   }
   VAR_8[VAR_17].in_ep = FUNC_6(VAR_14);
   if (FUNC_8(VAR_14))
    VAR_8[VAR_17].in_interval = VAR_14->bInterval;
   else if (FUNC_4(VAR_7->dev) == VAR_6)
    VAR_8[VAR_17].in_interval = 1;
   VAR_8[VAR_17].in_cables =
    (1 << VAR_15->bNumEmbMIDIJack) - 1;
   FUNC_0(&VAR_7->dev->dev, "EP %02X: %d jack(s)\n",
    VAR_14->bEndpointAddress, VAR_15->bNumEmbMIDIJack);
  }
 }
 return 0;
}
