
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_2__ {struct usb_device* dev; } ;
struct snd_usb_caiaqdev {unsigned char* ep1_out_buf; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char const*,int) ;
 int FUNC_1 (struct usb_device*,int ,unsigned char*,int,int*,int) ;
 int FUNC_2 (struct usb_device*,int) ;

int FUNC_3(struct snd_usb_caiaqdev *VAR_2,
          unsigned char VAR_3,
          const unsigned char *VAR_4,
          int VAR_5)
{
 int VAR_6;
 struct usb_device *VAR_7 = VAR_2->chip.dev;

 if (!VAR_7)
  return -VAR_0;

 if (VAR_5 > VAR_1 - 1)
  VAR_5 = VAR_1 - 1;

 if (VAR_4 && VAR_5 > 0)
  FUNC_0(VAR_2->ep1_out_buf+1, VAR_4, VAR_5);

 VAR_2->ep1_out_buf[0] = VAR_3;
 return FUNC_1(VAR_7, FUNC_2(VAR_7, 1),
      VAR_2->ep1_out_buf, VAR_5+1, &VAR_6, 200);
}
