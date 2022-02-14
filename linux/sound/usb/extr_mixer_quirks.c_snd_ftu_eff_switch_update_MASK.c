
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_list {TYPE_2__* kctl; TYPE_1__* mixer; } ;
struct snd_usb_audio {int dev; } ;
struct TYPE_4__ {unsigned int private_value; } ;
struct TYPE_3__ {struct snd_usb_audio* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,unsigned int,unsigned int,unsigned char*,int) ;
 unsigned int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (struct snd_usb_audio*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_mixer_elem_list *VAR_4)
{
 struct snd_usb_audio *VAR_5 = VAR_4->mixer->chip;
 unsigned int VAR_6 = VAR_4->kctl->private_value;
 unsigned char VAR_7[2];
 int VAR_8;

 VAR_7[0] = VAR_6 >> 24;
 VAR_7[1] = 0;

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_0(VAR_5->dev,
         FUNC_4(VAR_5->dev, 0),
         VAR_0,
         VAR_2 | VAR_3 | VAR_1,
         VAR_6 & 0xff00,
         FUNC_1(VAR_5) | ((VAR_6 & 0xff) << 8),
         VAR_7, 2);
 FUNC_3(VAR_5);
 return VAR_8;
}
