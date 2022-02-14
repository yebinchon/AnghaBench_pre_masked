
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {struct snd_usb_audio* chip; } ;
struct snd_usb_audio {scalar_t__ usb_id; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int,int,int,int *,int ) ;
 int FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (struct snd_usb_audio*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_mixer_interface *VAR_3,
        int VAR_4, int VAR_5)
{
 struct snd_usb_audio *VAR_6 = VAR_3->chip;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6->usb_id == FUNC_0(0x041e, 0x3042))
  VAR_7 = FUNC_1(VAR_6->dev,
         FUNC_4(VAR_6->dev, 0), 0x24,
         VAR_0 | VAR_2 | VAR_1,
         !VAR_4, 0, ((void*)0), 0);

 if (VAR_6->usb_id == FUNC_0(0x041e, 0x30df))
  VAR_7 = FUNC_1(VAR_6->dev,
         FUNC_4(VAR_6->dev, 0), 0x24,
         VAR_0 | VAR_2 | VAR_1,
         !VAR_4, 0, ((void*)0), 0);
 else
  VAR_7 = FUNC_1(VAR_6->dev,
         FUNC_4(VAR_6->dev, 0), 0x24,
         VAR_0 | VAR_2 | VAR_1,
         VAR_4, VAR_5 + 2, ((void*)0), 0);
 FUNC_3(VAR_6);
 return VAR_7;
}
