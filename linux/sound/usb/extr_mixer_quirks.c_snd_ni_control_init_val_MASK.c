
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usb_mixer_interface {TYPE_1__* chip; } ;
struct usb_device {int dev; } ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct usb_device*,int ,unsigned int,int,int ,unsigned int,scalar_t__*,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_mixer_interface *VAR_3,
       struct snd_kcontrol *VAR_4)
{
 struct usb_device *VAR_5 = VAR_3->chip->dev;
 unsigned int VAR_6 = VAR_4->private_value;
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, FUNC_2(VAR_5, 0),
         (VAR_6 >> 16) & 0xff,
         VAR_2 | VAR_1 | VAR_0,
         0, VAR_6 & 0xffff, &VAR_7, 1);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_5->dev,
   "unable to issue vendor read request (ret = %d)", VAR_8);
  return VAR_8;
 }

 VAR_4->private_value |= ((unsigned int)VAR_7 << 24);
 return 0;
}
