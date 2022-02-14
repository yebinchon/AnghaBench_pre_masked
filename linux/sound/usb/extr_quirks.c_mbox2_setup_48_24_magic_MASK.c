
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int FUNC_0 (struct usb_device*,int ,int,int,int,int,int**,int) ;
 int FUNC_1 (struct usb_device*,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_0)
{
 u8 VAR_1[3];
 u8 VAR_2[12];


 VAR_1[0] = 0x80;
 VAR_1[1] = 0xbb;
 VAR_1[2] = 0x00;


 FUNC_0(VAR_0, FUNC_1(VAR_0, 0),
  0x01, 0x22, 0x0100, 0x0085, &VAR_2, 0x0003);
 FUNC_0(VAR_0, FUNC_2(VAR_0, 0),
  0x81, 0xa2, 0x0100, 0x0085, &VAR_1, 0x0003);
 FUNC_0(VAR_0, FUNC_2(VAR_0, 0),
  0x81, 0xa2, 0x0100, 0x0086, &VAR_1, 0x0003);
 FUNC_0(VAR_0, FUNC_2(VAR_0, 0),
  0x81, 0xa2, 0x0100, 0x0003, &VAR_1, 0x0003);
 return;
}
