
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
 int FUNC_0 (int ,int ,int,int,int,int,unsigned char*,int) ;
 int FUNC_1 (struct snd_usb_audio*) ;
 int FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_mixer_interface *VAR_4, int VAR_5)
{
 struct snd_usb_audio *VAR_6 = VAR_4->chip;
 int VAR_7;
 unsigned char VAR_8[3];

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_6->dev,
    FUNC_3(VAR_6->dev, 0), 0x81,
    VAR_0 |
    VAR_3 |
    VAR_2, 0x00, 0x500, VAR_8, 1);
 if (VAR_7 < 0)
  goto err;
 VAR_7 = FUNC_0(VAR_6->dev,
    FUNC_3(VAR_6->dev, 0), 0x81,
    VAR_0 |
    VAR_3 |
    VAR_1, 0x100, 0x81, VAR_8, 3);
 if (VAR_7 < 0)
  goto err;
 if (VAR_5 == 0) {
  VAR_8[0] = 0x80;
  VAR_8[1] = 0xbb;
  VAR_8[2] = 0x00;
 } else {
  VAR_8[0] = VAR_8[1] = VAR_8[2] = 0x00;
 }


 VAR_7 = FUNC_0(VAR_6->dev,
    FUNC_4(VAR_6->dev, 0), 0x1,
    VAR_3 |
    VAR_1, 0x100, 0x81, VAR_8, 3);
 if (VAR_7 < 0)
  goto err;
 VAR_7 = FUNC_0(VAR_6->dev,
    FUNC_3(VAR_6->dev, 0), 0x81,
    VAR_0 |
    VAR_3 |
    VAR_1, 0x100, 0x81, VAR_8, 3);
 if (VAR_7 < 0)
  goto err;
 VAR_7 = FUNC_0(VAR_6->dev,
    FUNC_3(VAR_6->dev, 0), 0x81,
    VAR_0 |
    VAR_3 |
    VAR_1, 0x100, 0x2, VAR_8, 3);
 if (VAR_7 < 0)
  goto err;

err:
 FUNC_2(VAR_6);
 return VAR_7;
}
