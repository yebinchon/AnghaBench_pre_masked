
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ms_header_descriptor {int bLength; scalar_t__ bDescriptorType; scalar_t__ bDescriptorSubtype; } ;
struct usb_ms_endpoint_descriptor {int bLength; scalar_t__ bDescriptorType; scalar_t__ bDescriptorSubtype; int bNumEmbMIDIJack; } ;
struct usb_interface {int dummy; } ;
struct usb_host_interface {int extralen; TYPE_1__* endpoint; scalar_t__ extra; } ;
struct usb_driver {int dummy; } ;
struct snd_usb_audio {int dummy; } ;
struct TYPE_2__ {int extralen; scalar_t__ extra; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct snd_usb_audio*,struct usb_interface*,struct usb_driver*,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_usb_audio *VAR_5,
     struct usb_interface *VAR_6,
     struct usb_driver *VAR_7,
     struct usb_host_interface *VAR_8)
{
 struct usb_ms_header_descriptor *VAR_9;
 struct usb_ms_endpoint_descriptor *VAR_10;


 VAR_9 = (struct usb_ms_header_descriptor *)VAR_8->extra;
 if (VAR_8->extralen < 7 ||
     VAR_9->bLength < 7 ||
     VAR_9->bDescriptorType != VAR_3 ||
     VAR_9->bDescriptorSubtype != VAR_4)
  return -VAR_0;

 VAR_10 = (struct usb_ms_endpoint_descriptor *)VAR_8->endpoint[0].extra;
 if (VAR_8->endpoint[0].extralen < 4 ||
     VAR_10->bLength < 4 ||
     VAR_10->bDescriptorType != VAR_2 ||
     VAR_10->bDescriptorSubtype != VAR_1 ||
     VAR_10->bNumEmbMIDIJack < 1 ||
     VAR_10->bNumEmbMIDIJack > 16)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_6, VAR_7, ((void*)0));
}
