
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct usb_device*,int ) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int,int ,int *,int ,int) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_4, FUNC_3(VAR_4, 0)))
  return -VAR_1;
 VAR_5 = FUNC_1(VAR_4, FUNC_3(VAR_4, 0),
      0xaf, VAR_3 | VAR_2,
      1, 0, ((void*)0), 0, 1000);

 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_4);




 return -VAR_0;
}
