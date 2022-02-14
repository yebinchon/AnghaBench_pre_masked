
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_elem_list {int dummy; } ;
struct usb_mixer_elem_info {int * cache_val; scalar_t__ cached; } ;


 struct usb_mixer_elem_info* FUNC_0 (struct usb_mixer_elem_list*) ;
 int FUNC_1 (struct usb_mixer_elem_info*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_elem_list *VAR_0)
{
 struct usb_mixer_elem_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->cached)
  FUNC_1(VAR_1, 0, 0, *VAR_1->cache_val);
 return 0;
}
