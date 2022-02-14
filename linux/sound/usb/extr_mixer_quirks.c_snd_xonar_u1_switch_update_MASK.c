
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {struct snd_usb_audio* chip; } ;
struct snd_usb_audio {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int,int,int ,unsigned char*,int) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_mixer_interface *VAR_3,
          unsigned char VAR_4)
{
 struct snd_usb_audio *VAR_5 = VAR_3->chip;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_5->dev,
         FUNC_3(VAR_5->dev, 0), 0x08,
         VAR_0 | VAR_2 | VAR_1,
         50, 0, &VAR_4, 1);
 FUNC_2(VAR_5);
 return VAR_6;
}
