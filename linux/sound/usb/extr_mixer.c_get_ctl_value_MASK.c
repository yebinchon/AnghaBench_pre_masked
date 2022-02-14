
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {TYPE_2__ head; scalar_t__ idx_off; } ;
struct TYPE_3__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_mixer_elem_info*,int,int,int*) ;
 int FUNC_1 (struct usb_mixer_elem_info*,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_elem_info *VAR_1, int VAR_2,
    int VAR_3, int *VAR_4)
{
 VAR_3 += VAR_1->idx_off;

 return (VAR_1->head.mixer->protocol == VAR_0) ?
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4) :
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
