
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_podhd {int serial_number; int line6; } ;
struct usb_line6 {int ifcdev; int card; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *) ;
 struct usb_line6_podhd* FUNC_2 (struct usb_line6*) ;
 int FUNC_3 (struct usb_line6_podhd*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct usb_line6 *VAR_0)
{
 struct usb_line6_podhd *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1);
 FUNC_1(&VAR_1->line6, &VAR_1->serial_number);
 if (FUNC_4(VAR_0->card))
  FUNC_0(VAR_0->ifcdev, "Failed to register POD HD card.\n");
}
