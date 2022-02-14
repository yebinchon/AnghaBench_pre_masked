
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {int cached; int* cache_val; int control; TYPE_2__ head; } ;
struct TYPE_3__ {int chip; int ignore_ctl_error; } ;


 int FUNC_0 (struct usb_mixer_elem_info*,int,int*) ;
 int FUNC_1 (int ,char*,int ,int,int) ;

int FUNC_2(struct usb_mixer_elem_info *VAR_0,
        int VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4;

 if (VAR_0->cached & (1 << VAR_1)) {
  *VAR_3 = VAR_0->cache_val[VAR_2];
  return 0;
 }
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
 if (VAR_4 < 0) {
  if (!VAR_0->head.mixer->ignore_ctl_error)
   FUNC_1(VAR_0->head.mixer->chip,
    "cannot get current value for control %d ch %d: err = %d\n",
          VAR_0->control, VAR_1, VAR_4);
  return VAR_4;
 }
 VAR_0->cached |= 1 << VAR_1;
 VAR_0->cache_val[VAR_2] = *VAR_3;
 return 0;
}
