
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {struct snd_usb_audio* chip; } ;
struct snd_usb_audio {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int,int,unsigned char*,int) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_mixer_interface *VAR_4,
     int VAR_5)
{
 struct snd_usb_audio *VAR_6 = VAR_4->chip;
 int VAR_7;
 unsigned char VAR_8[2];

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8[0] = 0x01;
 VAR_8[1] = VAR_5 ? 0x02 : 0x01;
 VAR_7 = FUNC_0(VAR_6->dev,
        FUNC_3(VAR_6->dev, 0), VAR_0,
        VAR_2 | VAR_3 | VAR_1,
        0x0400, 0x0e00, VAR_8, 2);
 FUNC_2(VAR_6);
 return VAR_7;
}
