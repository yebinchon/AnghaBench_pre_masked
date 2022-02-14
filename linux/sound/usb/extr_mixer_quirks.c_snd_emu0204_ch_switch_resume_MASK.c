
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_elem_list {TYPE_1__* kctl; int mixer; } ;
struct TYPE_2__ {int private_value; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct usb_mixer_elem_list *VAR_0)
{
 return FUNC_0(VAR_0->mixer,
         VAR_0->kctl->private_value);
}
