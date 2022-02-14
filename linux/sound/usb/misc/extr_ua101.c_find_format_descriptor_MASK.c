
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int num_altsetting; int dev; struct usb_host_interface* altsetting; } ;
struct TYPE_2__ {int bNumEndpoints; } ;
struct usb_host_interface {int extralen; int * extra; TYPE_1__ desc; } ;
struct usb_descriptor_header {int dummy; } ;
typedef struct uac_format_type_i_discrete_descriptor {int bLength; scalar_t__ bDescriptorType; scalar_t__ bDescriptorSubtype; scalar_t__ bFormatType; int bSamFreqType; } const uac_format_type_i_discrete_descriptor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static const struct uac_format_type_i_discrete_descriptor *
FUNC_2(struct usb_interface *VAR_3)
{
 struct usb_host_interface *VAR_4;
 u8 *VAR_5;
 int VAR_6;

 if (VAR_3->num_altsetting != 2) {
  FUNC_1(&VAR_3->dev, "invalid num_altsetting\n");
  return ((void*)0);
 }

 VAR_4 = &VAR_3->altsetting[0];
 if (VAR_4->desc.bNumEndpoints != 0) {
  FUNC_1(&VAR_3->dev, "invalid bNumEndpoints\n");
  return ((void*)0);
 }

 VAR_4 = &VAR_3->altsetting[1];
 if (VAR_4->desc.bNumEndpoints != 1) {
  FUNC_1(&VAR_3->dev, "invalid bNumEndpoints\n");
  return ((void*)0);
 }

 VAR_5 = VAR_4->extra;
 VAR_6 = VAR_4->extralen;
 while (VAR_6 >= sizeof(struct usb_descriptor_header)) {
  struct uac_format_type_i_discrete_descriptor *VAR_7;

  VAR_7 = (struct uac_format_type_i_discrete_descriptor *)VAR_5;
  if (VAR_7->bLength > VAR_6) {
   FUNC_1(&VAR_3->dev, "descriptor overflow\n");
   return ((void*)0);
  }
  if (VAR_7->bLength == FUNC_0(1) &&
      VAR_7->bDescriptorType == VAR_2 &&
      VAR_7->bDescriptorSubtype == VAR_0) {
   if (VAR_7->bFormatType != VAR_1 ||
       VAR_7->bSamFreqType != 1) {
    FUNC_1(&VAR_3->dev,
     "invalid format type\n");
    return ((void*)0);
   }
   return VAR_7;
  }
  VAR_6 -= VAR_7->bLength;
  VAR_5 += VAR_7->bLength;
 }
 FUNC_1(&VAR_3->dev, "sample format descriptor not found\n");
 return ((void*)0);
}
