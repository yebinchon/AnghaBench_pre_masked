
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,int**,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_4, int VAR_5, u16 VAR_6)
{
 u8 VAR_7[4];
 VAR_7[0] = 0x20;
 VAR_7[1] = VAR_6 & 0xff;
 VAR_7[2] = (VAR_6 >> 8) & 0xff;
 VAR_7[3] = VAR_5;
 return FUNC_0(VAR_4, FUNC_1(VAR_4, 0), VAR_2,
          VAR_0 | VAR_3 | VAR_1,
          0, 0, &VAR_7, 4);
}
