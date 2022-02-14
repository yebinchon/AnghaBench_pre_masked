
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int dev; } ;
struct snd_usb_audio {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (struct usb_device*,int ,unsigned int,int,int ,int ,int *,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_usb_audio *VAR_3,
         unsigned int VAR_4,
         u32 *VAR_5)
{
 struct usb_device *VAR_6 = VAR_3->dev;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, FUNC_2(VAR_6, 0),
         VAR_4,
         VAR_0 | VAR_2 | VAR_1,
         0, 0,
         VAR_5, sizeof(*VAR_5));
 if (VAR_7 < 0)
  FUNC_0(&VAR_6->dev,
   "unable to issue vendor read request %d (ret = %d)",
   VAR_4, VAR_7);
 return VAR_7;
}
