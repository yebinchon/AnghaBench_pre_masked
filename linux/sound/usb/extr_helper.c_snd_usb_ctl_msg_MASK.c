
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (struct usb_device*,unsigned int,int,int,int ,int ,void*,int ) ;
 scalar_t__ FUNC_4 (struct usb_device*,unsigned int) ;
 int FUNC_5 (struct usb_device*,unsigned int,int,int,int ,int ,void*,int ,int) ;

int FUNC_6(struct usb_device *VAR_6, unsigned int VAR_7, __u8 VAR_8,
      __u8 VAR_9, __u16 VAR_10, __u16 VAR_11, void *VAR_12,
      __u16 VAR_13)
{
 int VAR_14;
 void *VAR_15 = ((void*)0);
 int VAR_16;

 if (FUNC_4(VAR_6, VAR_7))
  return -VAR_0;

 if (VAR_13 > 0) {
  VAR_15 = FUNC_1(VAR_12, VAR_13, VAR_2);
  if (!VAR_15)
   return -VAR_1;
 }

 if (VAR_9 & VAR_5)
  VAR_16 = VAR_3;
 else
  VAR_16 = VAR_4;

 VAR_14 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_11, VAR_15, VAR_13, VAR_16);

 if (VAR_13 > 0) {
  FUNC_2(VAR_12, VAR_15, VAR_13);
  FUNC_0(VAR_15);
 }

 FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_11, VAR_12, VAR_13);

 return VAR_14;
}
