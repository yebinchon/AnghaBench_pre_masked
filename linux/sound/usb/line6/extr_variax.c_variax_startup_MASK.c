
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int card; } ;
struct usb_line6_variax {int startup_progress; TYPE_1__ line6; } ;
struct usb_line6 {int startup_work; } ;



 int VAR_0 ;
 int VAR_1 ;


 struct usb_line6_variax* FUNC_0 (struct usb_line6*) ;
 int FUNC_1 (struct usb_line6*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_line6_variax*,int) ;

__attribute__((used)) static void FUNC_6(struct usb_line6 *VAR_2)
{
 struct usb_line6_variax *VAR_3 = FUNC_0(VAR_2);

 switch (VAR_3->startup_progress) {
 case 128:

  FUNC_3(&VAR_2->startup_work,
          FUNC_2(VAR_0));

  FUNC_1(VAR_2);
  break;
 case 130:

  FUNC_5(VAR_3, 1);
  VAR_3->startup_progress = 129;
  FUNC_3(&VAR_2->startup_work,
          FUNC_2(VAR_1));
  break;
 case 129:

  FUNC_4(VAR_3->line6.card);
  break;
 }
}
