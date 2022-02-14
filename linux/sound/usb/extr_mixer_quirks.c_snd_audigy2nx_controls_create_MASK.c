
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_1__* chip; } ;
struct snd_kcontrol_new {int private_value; int name; } ;
struct TYPE_2__ {scalar_t__ usb_id; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct usb_mixer_interface*,int ,int ,struct snd_kcontrol_new*,int *) ;
 struct snd_kcontrol_new VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct usb_mixer_interface *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4) {
  struct snd_kcontrol_new VAR_6;


  if ((VAR_3->chip->usb_id == FUNC_1(0x041e, 0x3042)) && VAR_4 == 0)
   continue;

  if ((VAR_3->chip->usb_id == FUNC_1(0x041e, 0x30df)) && VAR_4 == 0)
   continue;
  if (VAR_4 > 1 &&
   (VAR_3->chip->usb_id == FUNC_1(0x041e, 0x3040) ||
    VAR_3->chip->usb_id == FUNC_1(0x041e, 0x3042) ||
    VAR_3->chip->usb_id == FUNC_1(0x041e, 0x30df) ||
    VAR_3->chip->usb_id == FUNC_1(0x041e, 0x3048)))
   break;

  VAR_6 = VAR_0;
  VAR_6.name = VAR_1[VAR_4];
  VAR_6.private_value = (1 << 8) | VAR_4;
  VAR_5 = FUNC_2(VAR_3, 0,
       VAR_2,
       &VAR_6, ((void*)0));
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
