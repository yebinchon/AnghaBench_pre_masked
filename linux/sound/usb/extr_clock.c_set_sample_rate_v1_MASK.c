
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_host_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct snd_usb_audio {int sample_rate_read_error; struct usb_device* dev; } ;
struct audioformat {int attributes; int altsetting; } ;
typedef int data ;
struct TYPE_4__ {unsigned int bEndpointAddress; } ;
struct TYPE_3__ {int bNumEndpoints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int ,unsigned int,...) ;
 int FUNC_1 (int *,char*,int,int) ;
 TYPE_2__* FUNC_2 (struct usb_host_interface*,int ) ;
 TYPE_1__* FUNC_3 (struct usb_host_interface*) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int,unsigned int,unsigned char*,int) ;
 scalar_t__ FUNC_5 (struct snd_usb_audio*) ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_usb_audio *VAR_8, int VAR_9,
         struct usb_host_interface *VAR_10,
         struct audioformat *VAR_11, int VAR_12)
{
 struct usb_device *VAR_13 = VAR_8->dev;
 unsigned int VAR_14;
 unsigned char VAR_15[3];
 int VAR_16, VAR_17;

 if (FUNC_3(VAR_10)->bNumEndpoints < 1)
  return -VAR_0;
 VAR_14 = FUNC_2(VAR_10, 0)->bEndpointAddress;


 if (!(VAR_11->attributes & VAR_1))
  return 0;

 VAR_15[0] = VAR_12;
 VAR_15[1] = VAR_12 >> 8;
 VAR_15[2] = VAR_12 >> 16;
 VAR_16 = FUNC_4(VAR_13, FUNC_7(VAR_13, 0), VAR_3,
         VAR_7 | VAR_6 | VAR_5,
         VAR_1 << 8, VAR_14,
         VAR_15, sizeof(VAR_15));
 if (VAR_16 < 0) {
  FUNC_0(&VAR_13->dev, "%d:%d: cannot set freq %d to ep %#x\n",
   VAR_9, VAR_11->altsetting, VAR_12, VAR_14);
  return VAR_16;
 }



 if (FUNC_5(VAR_8))
  return 0;

 if (VAR_8->sample_rate_read_error > 2)
  return 0;

 VAR_16 = FUNC_4(VAR_13, FUNC_6(VAR_13, 0), VAR_2,
         VAR_7 | VAR_6 | VAR_4,
         VAR_1 << 8, VAR_14,
         VAR_15, sizeof(VAR_15));
 if (VAR_16 < 0) {
  FUNC_0(&VAR_13->dev, "%d:%d: cannot get freq at ep %#x\n",
   VAR_9, VAR_11->altsetting, VAR_14);
  VAR_8->sample_rate_read_error++;
  return 0;
 }

 VAR_17 = VAR_15[0] | (VAR_15[1] << 8) | (VAR_15[2] << 16);
 if (VAR_17 != VAR_12) {
  FUNC_1(&VAR_13->dev, "current rate %d is different from the runtime rate %d\n", VAR_17, VAR_12);

 }

 return 0;
}
