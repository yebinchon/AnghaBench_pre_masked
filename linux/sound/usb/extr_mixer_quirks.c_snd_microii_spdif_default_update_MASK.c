
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct usb_mixer_elem_list {TYPE_2__* kctl; TYPE_1__* mixer; } ;
struct snd_usb_audio {int dev; } ;
struct TYPE_4__ {unsigned int private_value; } ;
struct TYPE_3__ {struct snd_usb_audio* chip; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int,unsigned int,int,int *,int ) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_mixer_elem_list *VAR_5)
{
 struct snd_usb_audio *VAR_6 = VAR_5->mixer->chip;
 unsigned int VAR_7 = VAR_5->kctl->private_value;
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = ((VAR_7 >> 4) & 0xf0) | (VAR_7 & 0x0f);
 VAR_9 = FUNC_0(VAR_6->dev,
   FUNC_3(VAR_6->dev, 0),
   VAR_1,
   VAR_2 | VAR_4 | VAR_3,
   VAR_8,
   2,
   ((void*)0),
   0);
 if (VAR_9 < 0)
  goto end;

 VAR_8 = (VAR_7 & VAR_0) ? 0xa0 : 0x20;
 VAR_8 |= (VAR_7 >> 12) & 0x0f;
 VAR_9 = FUNC_0(VAR_6->dev,
   FUNC_3(VAR_6->dev, 0),
   VAR_1,
   VAR_2 | VAR_4 | VAR_3,
   VAR_8,
   3,
   ((void*)0),
   0);
 if (VAR_9 < 0)
  goto end;

 end:
 FUNC_2(VAR_6);
 return VAR_9;
}
