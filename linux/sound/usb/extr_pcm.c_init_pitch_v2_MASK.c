
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct snd_usb_audio {struct usb_device* dev; } ;
struct audioformat {int altsetting; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int,int ,unsigned char*,int) ;
 int FUNC_1 (struct snd_usb_audio*,char*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_usb_audio *VAR_5, int VAR_6,
    struct usb_host_interface *VAR_7,
    struct audioformat *VAR_8)
{
 struct usb_device *VAR_9 = VAR_5->dev;
 unsigned char VAR_10[1];
 int VAR_11;

 VAR_10[0] = 1;
 VAR_11 = FUNC_0(VAR_9, FUNC_2(VAR_9, 0), VAR_0,
         VAR_4 | VAR_3 | VAR_2,
         VAR_1 << 8, 0,
         VAR_10, sizeof(VAR_10));
 if (VAR_11 < 0) {
  FUNC_1(VAR_5, "%d:%d: cannot set enable PITCH (v2)\n",
         VAR_6, VAR_8->altsetting);
  return VAR_11;
 }

 return 0;
}
