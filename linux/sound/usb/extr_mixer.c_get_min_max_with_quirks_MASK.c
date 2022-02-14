
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int id; TYPE_1__* mixer; } ;
struct usb_mixer_elem_info {int min; int max; int res; int dBmin; int dBmax; scalar_t__ val_type; int initialized; int cmask; int control; TYPE_2__ head; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct usb_mixer_elem_info*,int) ;
 scalar_t__ FUNC_1 (struct usb_mixer_elem_info*,int ,int,int*) ;
 scalar_t__ FUNC_2 (struct usb_mixer_elem_info*,int,int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct usb_mixer_elem_info*,int ,int,int) ;
 scalar_t__ FUNC_5 (struct usb_mixer_elem_info*,int,int ,int) ;
 int FUNC_6 (int ,char*,int ,int ,int,int ) ;
 int FUNC_7 (struct usb_mixer_elem_info*,struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_8(struct usb_mixer_elem_info *VAR_8,
       int VAR_9, struct snd_kcontrol *VAR_10)
{

 VAR_8->min = VAR_9;
 VAR_8->max = VAR_8->min + 1;
 VAR_8->res = 1;
 VAR_8->dBmin = VAR_8->dBmax = 0;

 if (VAR_8->val_type == VAR_6 ||
     VAR_8->val_type == VAR_7) {
  VAR_8->initialized = 1;
 } else {
  int VAR_11 = 0;
  if (VAR_8->cmask) {
   int VAR_12;
   for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
    if (VAR_8->cmask & (1 << VAR_12)) {
     VAR_11 = VAR_12 + 1;
     break;
    }
  }
  if (FUNC_1(VAR_8, VAR_2, (VAR_8->control << 8) | VAR_11, &VAR_8->max) < 0 ||
      FUNC_1(VAR_8, VAR_3, (VAR_8->control << 8) | VAR_11, &VAR_8->min) < 0) {
   FUNC_6(VAR_8->head.mixer->chip,
          "%d:%d: cannot get min/max values for control %d (id %d)\n",
       VAR_8->head.id, FUNC_3(VAR_8->head.mixer->chip),
              VAR_8->control, VAR_8->head.id);
   return -VAR_0;
  }
  if (FUNC_1(VAR_8, VAR_4,
      (VAR_8->control << 8) | VAR_11,
      &VAR_8->res) < 0) {
   VAR_8->res = 1;
  } else {
   int VAR_13 = VAR_8->res;

   while (VAR_8->res > 1) {
    if (FUNC_4(VAR_8, VAR_5,
        (VAR_8->control << 8) | VAR_11,
        VAR_8->res / 2) < 0)
     break;
    VAR_8->res /= 2;
   }
   if (FUNC_1(VAR_8, VAR_4,
       (VAR_8->control << 8) | VAR_11, &VAR_8->res) < 0)
    VAR_8->res = VAR_13;
  }
  if (VAR_8->res == 0)
   VAR_8->res = 1;







  if (VAR_8->min + VAR_8->res < VAR_8->max) {
   int VAR_14 = VAR_8->res;
   int VAR_15, VAR_16, VAR_17;
   FUNC_2(VAR_8, VAR_11, &VAR_15);
   for (;;) {
    VAR_16 = VAR_15;
    if (VAR_16 < VAR_8->max)
     VAR_16 += VAR_8->res;
    else
     VAR_16 -= VAR_8->res;
    if (VAR_16 < VAR_8->min || VAR_16 > VAR_8->max ||
        FUNC_5(VAR_8, VAR_11, 0, VAR_16) ||
        FUNC_2(VAR_8, VAR_11, &VAR_17)) {
     VAR_8->res = VAR_14;
     break;
    }
    if (VAR_16 == VAR_17)
     break;
    VAR_8->res *= 2;
   }
   FUNC_5(VAR_8, VAR_11, 0, VAR_15);
  }

  VAR_8->initialized = 1;
 }

 if (VAR_10)
  FUNC_7(VAR_8, VAR_10);




 VAR_8->dBmin = (FUNC_0(VAR_8, VAR_8->min) * 100) / 256;
 VAR_8->dBmax = (FUNC_0(VAR_8, VAR_8->max) * 100) / 256;
 if (VAR_8->dBmin > VAR_8->dBmax) {

  if (VAR_8->dBmin < 0)
   VAR_8->dBmax = 0;
  else if (VAR_8->dBmin > 0)
   VAR_8->dBmin = 0;
  if (VAR_8->dBmin > VAR_8->dBmax) {

   return -VAR_0;
  }
 }

 return 0;
}
