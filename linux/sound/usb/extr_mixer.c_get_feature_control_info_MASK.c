
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_feature_control_info {int control; } ;


 int FUNC_0 (struct usb_feature_control_info*) ;
 struct usb_feature_control_info* VAR_0 ;

__attribute__((used)) static struct usb_feature_control_info *FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  if (VAR_0[VAR_2].control == VAR_1)
   return &VAR_0[VAR_2];
 }
 return ((void*)0);
}
