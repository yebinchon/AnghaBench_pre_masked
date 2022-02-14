
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
 int FUNC_0 (struct snd_usb_audio*) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (int ,int ,unsigned int,int,unsigned int,unsigned int,int *,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_mixer_elem_list *VAR_3)
{
 struct snd_usb_audio *VAR_4 = VAR_3->mixer->chip;
 unsigned int VAR_5 = VAR_3->kctl->private_value;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_6 = FUNC_2(VAR_4->dev, FUNC_3(VAR_4->dev, 0),
         (VAR_5 >> 16) & 0xff,
         VAR_2 | VAR_1 | VAR_0,
         VAR_5 >> 24, VAR_5 & 0xffff, ((void*)0), 0, 1000);
 FUNC_1(VAR_4);
 return VAR_6;
}
