
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct snd_usb_audio {scalar_t__ usb_id; } ;
typedef int __u8 ;
typedef int __u16 ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_usb_audio* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

void FUNC_6(struct usb_device *VAR_2, unsigned int VAR_3,
      __u8 VAR_4, __u8 VAR_5, __u16 VAR_6,
      __u16 VAR_7, void *VAR_8, __u16 VAR_9)
{
 struct snd_usb_audio *VAR_10 = FUNC_2(&VAR_2->dev);

 if (!VAR_10)
  return;




 if (FUNC_1(VAR_10->usb_id) == 0x23ba &&
     (VAR_5 & VAR_1) == VAR_0)
  FUNC_4(20);





 if (FUNC_1(VAR_10->usb_id) == 0x0644 &&
     (VAR_5 & VAR_1) == VAR_0)
  FUNC_4(20);




 if (FUNC_3(VAR_10->usb_id)
     && (VAR_5 & VAR_1) == VAR_0)
  FUNC_4(20);





 if ((VAR_10->usb_id == FUNC_0(0x1686, 0x00dd) ||
      VAR_10->usb_id == FUNC_0(0x046d, 0x0a46) ||
      VAR_10->usb_id == FUNC_0(0x0b0e, 0x0349)) &&
     (VAR_5 & VAR_1) == VAR_0)
  FUNC_5(1000, 2000);
}
