
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usb_line6 {int startup_work; struct usb_device* usbdev; } ;
struct usb_line6_toneport {size_t source; struct usb_line6 line6; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct usb_line6*,int,scalar_t__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct usb_line6_toneport*) ;
 scalar_t__ FUNC_7 (struct usb_line6_toneport*) ;
 int FUNC_8 (struct usb_device*,int,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_9 (struct usb_line6_toneport*) ;

__attribute__((used)) static int FUNC_10(struct usb_line6_toneport *VAR_4)
{
 u32 *VAR_5;
 struct usb_line6 *VAR_6 = &VAR_4->line6;
 struct usb_device *VAR_7 = VAR_6->usbdev;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;



 *VAR_5 = (u32)FUNC_2();
 FUNC_3(VAR_6, 0x80c6, VAR_5, 4);
 FUNC_0(VAR_5);


 FUNC_8(VAR_7, 0x0301, 0x0000);


 if (FUNC_7(VAR_4))
  FUNC_8(VAR_7,
      VAR_3[VAR_4->source].code,
      0x0000);

 if (FUNC_6(VAR_4))
  FUNC_9(VAR_4);

 FUNC_5(&VAR_4->line6.startup_work,
         FUNC_4(VAR_2 * 1000));
 return 0;
}
