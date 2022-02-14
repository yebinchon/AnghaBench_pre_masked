
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_desc_validator {int dummy; } ;
struct uac_feature_unit_descriptor {int bLength; int bControlSize; } ;



__attribute__((used)) static bool FUNC_0(const void *VAR_0,
           const struct usb_desc_validator *VAR_1)
{
 const struct uac_feature_unit_descriptor *VAR_2 = VAR_0;

 if (VAR_2->bLength < sizeof(*VAR_2) || !VAR_2->bControlSize)
  return 0;

 return VAR_2->bLength >= sizeof(*VAR_2) + VAR_2->bControlSize + 1;
}
