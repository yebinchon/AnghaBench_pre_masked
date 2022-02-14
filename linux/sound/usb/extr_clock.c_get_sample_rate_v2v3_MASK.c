
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct snd_usb_audio {struct usb_device* dev; } ;
typedef int data ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int,int,int *,int) ;
 int FUNC_3 (struct snd_usb_audio*) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_usb_audio *VAR_5, int VAR_6,
         int VAR_7, int VAR_8)
{
 struct usb_device *VAR_9 = VAR_5->dev;
 __le32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_9, FUNC_4(VAR_9, 0), VAR_1,
         VAR_4 | VAR_3 | VAR_2,
         VAR_0 << 8,
         FUNC_3(VAR_5) | (VAR_8 << 8),
         &VAR_10, sizeof(VAR_10));
 if (VAR_11 < 0) {
  FUNC_0(&VAR_9->dev, "%d:%d: cannot get freq (v2/v3): err %d\n",
    VAR_6, VAR_7, VAR_11);
  return 0;
 }

 return FUNC_1(VAR_10);
}
