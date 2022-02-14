
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_midi_out_jack_descriptor {int bLength; int bNrInputPins; } ;
struct usb_desc_validator {int dummy; } ;



__attribute__((used)) static bool FUNC_0(const void *VAR_0,
       const struct usb_desc_validator *VAR_1)
{
 const struct usb_midi_out_jack_descriptor *VAR_2 = VAR_0;

 return VAR_2->bLength >= sizeof(*VAR_2) &&
  VAR_2->bLength >= sizeof(*VAR_2) + VAR_2->bNrInputPins * 2;
}
