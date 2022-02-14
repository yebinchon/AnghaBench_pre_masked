
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_1__* chip; } ;
struct usb_device {int dummy; } ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,unsigned int,unsigned int,unsigned char*,int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_mixer_interface *VAR_4,
       struct snd_kcontrol *VAR_5)
{
 struct usb_device *VAR_6 = VAR_4->chip->dev;
 unsigned int VAR_7 = VAR_5->private_value;
 int VAR_8;
 unsigned char VAR_9[2];

 VAR_9[0] = 0x00;
 VAR_9[1] = 0x00;

 VAR_8 = FUNC_0(VAR_6, FUNC_2(VAR_6, 0), VAR_0,
         VAR_2 | VAR_3 | VAR_1,
         VAR_7 & 0xff00,
         FUNC_1(VAR_4->chip) | ((VAR_7 & 0xff) << 8),
         VAR_9, 2);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5->private_value |= (unsigned int)VAR_9[0] << 24;
 return 0;
}
