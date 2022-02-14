
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_desc_validator {int protocol; } ;
struct uac_selector_unit_descriptor {int bLength; int bNrInPins; } ;






__attribute__((used)) static bool FUNC_0(const void *VAR_0,
       const struct usb_desc_validator *VAR_1)
{
 const struct uac_selector_unit_descriptor *VAR_2 = VAR_0;
 size_t VAR_3;

 if (VAR_2->bLength < sizeof(*VAR_2))
  return 0;
 VAR_3 = sizeof(*VAR_2) + VAR_2->bNrInPins;
 switch (VAR_1->protocol) {
 case 130:
 default:
  VAR_3 += 1;
  break;
 case 129:
  VAR_3 += 1 + 1;
  break;
 case 128:
  VAR_3 += 4 + 2;
  break;
 }
 return VAR_2->bLength >= VAR_3;
}
