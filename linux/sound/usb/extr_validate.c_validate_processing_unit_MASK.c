
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_desc_validator {int protocol; int type; } ;
struct uac_processing_unit_descriptor {int bLength; int bNrInPins; int wProcessType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
__attribute__((used)) static bool FUNC_0(const void *VAR_4,
         const struct usb_desc_validator *VAR_5)
{
 const struct uac_processing_unit_descriptor *VAR_6 = VAR_4;
 const unsigned char *VAR_7 = VAR_4;
 size_t VAR_8, VAR_9;

 if (VAR_6->bLength < sizeof(*VAR_6))
  return 0;
 VAR_8 = sizeof(*VAR_6) + VAR_6->bNrInPins;
 if (VAR_6->bLength < VAR_8)
  return 0;
 switch (VAR_5->protocol) {
 case 130:
 default:

  VAR_8 += 1 + 2 + 1 + 1;
  if (VAR_6->bLength < VAR_8)
   return 0;
  VAR_9 = VAR_7[VAR_8];
  VAR_8 += 1 + VAR_9 + 1;
  break;
 case 129:

  VAR_8 += 1 + 4 + 1;
  if (VAR_5->type == VAR_2)
   VAR_8 += 2;
  else
   VAR_8 += 1;
  VAR_8 += 1;
  break;
 case 128:

  VAR_8 += 2 + 4;
  break;
 }
 if (VAR_6->bLength < VAR_8)
  return 0;

 switch (VAR_5->protocol) {
 case 130:
 default:
  if (VAR_5->type == VAR_0)
   return 1;
  switch (VAR_6->wProcessType) {
  case 131:
  case 132:
   if (VAR_6->bLength < VAR_8 + 1)
    return 0;
   VAR_9 = VAR_7[VAR_8];
   VAR_8 += 1 + VAR_9 * 2;
   break;
  default:
   break;
  }
  break;
 case 129:
  if (VAR_5->type == VAR_1)
   return 1;
  switch (VAR_6->wProcessType) {
  case 135:
  case 136:
   if (VAR_6->bLength < VAR_8 + 1)
    return 0;
   VAR_9 = VAR_7[VAR_8];
   VAR_8 += 1 + VAR_9 * 4;
   break;
  default:
   break;
  }
  break;
 case 128:
  if (VAR_5->type == VAR_3) {
   VAR_8 += 2;
   break;
  }
  switch (VAR_6->wProcessType) {
  case 133:
   if (VAR_6->bLength < VAR_8 + 1)
    return 0;
   VAR_9 = VAR_7[VAR_8];
   VAR_8 += 1 + VAR_9 * 2;
   break;
  case 134:
   VAR_8 += 2 + 4;
   break;
  default:
   break;
  }
  break;
 }
 if (VAR_6->bLength < VAR_8)
  return 0;

 return 1;
}
