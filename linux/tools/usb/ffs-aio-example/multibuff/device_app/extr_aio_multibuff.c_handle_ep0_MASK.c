
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bRequestType; } ;
struct TYPE_4__ {TYPE_1__ setup; } ;
struct usb_functionfs_event {int type; TYPE_2__ u; } ;
typedef int event ;





 int VAR_0 ;
 int FUNC_0 (struct usb_functionfs_event*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,struct usb_functionfs_event*,int) ;
 int FUNC_3 (int,int *,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_1, bool *VAR_2)
{
 int VAR_3;
 struct usb_functionfs_event VAR_4;

 VAR_3 = FUNC_2(VAR_1, &VAR_4, sizeof(VAR_4));
 if (!VAR_3) {
  FUNC_1("unable to read event from ep0");
  return;
 }
 FUNC_0(&VAR_4);
 switch (VAR_4.type) {
 case 128:
  if (VAR_4.u.setup.bRequestType & VAR_0)
   FUNC_3(VAR_1, ((void*)0), 0);
  else
   FUNC_2(VAR_1, ((void*)0), 0);
  break;

 case 129:
  *VAR_2 = 1;
  break;

 case 130:
  *VAR_2 = 0;
  break;

 default:
  break;
 }
}
