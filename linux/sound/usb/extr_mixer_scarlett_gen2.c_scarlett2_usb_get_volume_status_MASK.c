
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
struct scarlett2_usb_volume_status {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_interface*,int ,struct scarlett2_usb_volume_status*,int) ;

__attribute__((used)) static int FUNC_1(
 struct usb_mixer_interface *VAR_1,
 struct scarlett2_usb_volume_status *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0,
     VAR_2, sizeof(*VAR_2));
}
