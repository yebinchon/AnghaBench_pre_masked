
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_host_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct snd_usb_audio {struct usb_device* dev; } ;
struct audioformat {int dummy; } ;
typedef int data ;
struct TYPE_4__ {unsigned int bEndpointAddress; } ;
struct TYPE_3__ {int bNumEndpoints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct usb_host_interface*,int ) ;
 TYPE_1__* FUNC_1 (struct usb_host_interface*) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int,unsigned int,unsigned char*,int) ;
 int FUNC_3 (struct snd_usb_audio*,char*,int,unsigned int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_usb_audio *VAR_6, int VAR_7,
    struct usb_host_interface *VAR_8,
    struct audioformat *VAR_9)
{
 struct usb_device *VAR_10 = VAR_6->dev;
 unsigned int VAR_11;
 unsigned char VAR_12[1];
 int VAR_13;

 if (FUNC_1(VAR_8)->bNumEndpoints < 1)
  return -VAR_0;
 VAR_11 = FUNC_0(VAR_8, 0)->bEndpointAddress;

 VAR_12[0] = 1;
 VAR_13 = FUNC_2(VAR_10, FUNC_4(VAR_10, 0), VAR_2,
         VAR_5|VAR_4|VAR_3,
         VAR_1 << 8, VAR_11,
         VAR_12, sizeof(VAR_12));
 if (VAR_13 < 0) {
  FUNC_3(VAR_6, "%d:%d: cannot set enable PITCH\n",
         VAR_7, VAR_11);
  return VAR_13;
 }

 return 0;
}
