
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int startup_progress; int serial_number; int line6; } ;
struct usb_line6 {int ifcdev; int card; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *) ;
 struct usb_line6_pod* FUNC_2 (struct usb_line6*) ;
 int FUNC_3 (struct usb_line6*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct usb_line6 *VAR_1)
{
 struct usb_line6_pod *VAR_2 = FUNC_2(VAR_1);

 switch (VAR_2->startup_progress) {
 case 128:

  FUNC_3(VAR_1);
  break;
 case 129:

  FUNC_1(&VAR_2->line6, &VAR_2->serial_number);


  if (FUNC_4(VAR_1->card))
   FUNC_0(VAR_1->ifcdev, "Failed to register POD card.\n");
  VAR_2->startup_progress = VAR_0;
  break;
 default:
  break;
 }
}
