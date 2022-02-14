
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_3__* chip; TYPE_1__* rc_cfg; TYPE_2__* rc_urb; } ;
struct TYPE_6__ {int usb_id; int dev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int mute_mixer_id; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct usb_mixer_interface*,int ) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(struct usb_mixer_interface *VAR_1,
        int VAR_2)
{
 if (!VAR_1->rc_cfg)
  return;

 switch (VAR_2) {
 case 0:
  VAR_1->rc_urb->dev = VAR_1->chip->dev;
  FUNC_3(VAR_1->rc_urb, VAR_0);
  break;
 case 4:
 case 7:
 case 19:
 case 20:
  break;

 case 3:
  if (VAR_1->chip->usb_id == FUNC_0(0x041e, 0x3040) ||
      VAR_1->chip->usb_id == FUNC_0(0x041e, 0x3048))
   FUNC_1(VAR_1, VAR_1->rc_cfg->mute_mixer_id);
  break;
 default:
  FUNC_2(VAR_1->chip, "memory change in unknown unit %d\n", VAR_2);
  break;
 }
}
