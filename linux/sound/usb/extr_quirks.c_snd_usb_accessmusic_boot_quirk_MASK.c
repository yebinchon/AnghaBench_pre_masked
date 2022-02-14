
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int const*,int ,int ) ;
 scalar_t__ FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*,int ,void*,int ,int*,int) ;
 int FUNC_5 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_3)
{
 int VAR_4, VAR_5;

 static const u8 VAR_6[] = { 0x4e, 0x73, 0x52, 0x01 };
 void *VAR_7;

 if (FUNC_3(VAR_3, FUNC_5(VAR_3, 0x05)))
  return -VAR_0;
 VAR_7 = FUNC_2(VAR_6, FUNC_0(VAR_6), VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_4 = FUNC_4(VAR_3, FUNC_5(VAR_3, 0x05), VAR_7,
   FUNC_0(VAR_6), &VAR_5, 1000);
 FUNC_1(VAR_7);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
