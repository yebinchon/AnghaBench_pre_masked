
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
struct usb_mixer_elem_list {int id; int resume; int dump; struct usb_mixer_interface* mixer; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct usb_mixer_elem_list *VAR_2,
     struct usb_mixer_interface *VAR_3,
     int VAR_4)
{
 VAR_2->mixer = VAR_3;
 VAR_2->id = VAR_4;
 VAR_2->dump = VAR_1;



}
