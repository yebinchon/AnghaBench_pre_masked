
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_device {int dev; } ;
struct pcm_runtime {TYPE_1__* chip; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct pcm_runtime *VAR_13, unsigned int VAR_14)
{
 struct usb_device *VAR_15 = VAR_13->chip->dev;
 u16 VAR_16;
 int VAR_17;




 switch (VAR_14) {
 case 44100:
  VAR_16 = VAR_5;
  break;
 case 48000:
  VAR_16 = VAR_6;
  break;
 case 88200:
  VAR_16 = VAR_7;
  break;
 case 96000:
  VAR_16 = VAR_8;
  break;
 case 176400:
  VAR_16 = VAR_1;
  break;
 case 192000:
  VAR_16 = VAR_2;
  break;
 case 352800:
  VAR_16 = VAR_3;
  break;
 case 384000:
  VAR_16 = VAR_4;
  break;
 default:
  FUNC_0(&VAR_15->dev, "Unsupported rate %d\n", VAR_14);
  return -VAR_0;
 }
 VAR_17 = FUNC_1(VAR_15, FUNC_2(VAR_15, 0),
         VAR_9,
         VAR_10 | VAR_12 | VAR_11,
         VAR_16, 0, ((void*)0), 0, 100);
 if (VAR_17 < 0) {
  FUNC_0(&VAR_15->dev, "Error setting samplerate %d.\n", VAR_14);
  return VAR_17;
 }

 return 0;
}
