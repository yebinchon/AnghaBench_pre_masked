
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int ,char*,int,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_5,
  int VAR_6, int VAR_7, char *VAR_8, int VAR_9)
{
 int VAR_10 = FUNC_0(VAR_5, FUNC_1(VAR_5, 0), VAR_6,
   VAR_2 | VAR_4 | VAR_3, VAR_7,
   0, VAR_8, VAR_9, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;
 else if (VAR_10 != VAR_9)
  return -VAR_0;
 return 0;
}
