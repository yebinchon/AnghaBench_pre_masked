
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*,int ,int,int,int *,int,int) ;
 scalar_t__ FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (struct usb_device*,int ,int *,int,int*,int) ;
 int FUNC_4 (struct usb_device*,int) ;
 int FUNC_5 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_3, u8 *VAR_4,
      int VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;

 if (FUNC_2(VAR_3, FUNC_5(VAR_3, 0x01)))
  return -VAR_1;
 VAR_7 = FUNC_3(VAR_3, FUNC_5(VAR_3, 0x01), VAR_4, *VAR_6,
    &VAR_8, 1000);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(VAR_2, "MicroBookII snd: ", VAR_0, 16, 1,
         VAR_4, VAR_8, 0);

 FUNC_0(VAR_4, 0, VAR_5);

 if (FUNC_2(VAR_3, FUNC_4(VAR_3, 0x82)))
  return -VAR_1;
 VAR_7 = FUNC_3(VAR_3, FUNC_4(VAR_3, 0x82), VAR_4, VAR_5,
    &VAR_8, 1000);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(VAR_2, "MicroBookII rcv: ", VAR_0, 16, 1,
         VAR_4, VAR_8, 0);

 *VAR_6 = VAR_8;
 return 0;
}
