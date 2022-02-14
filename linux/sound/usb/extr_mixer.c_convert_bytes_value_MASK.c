
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_elem_info {int val_type; } ;
__attribute__((used)) static int FUNC_0(struct usb_mixer_elem_info *VAR_0, int VAR_1)
{
 switch (VAR_0->val_type) {
 case 133:
  return !!VAR_1;
 case 132:
  return !VAR_1;
 case 130:
 case 128:
  return VAR_1 & 0xff;
 case 131:
 case 129:
  return VAR_1 & 0xffff;
 }
 return 0;
}
