
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bRequestType; } ;
struct TYPE_4__ {TYPE_1__ setup; } ;
struct usb_functionfs_event {int type; TYPE_2__ u; } ;
struct pollfd {int fd; int events; int revents; } ;
typedef int event ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_functionfs_event*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pollfd*,int,int ) ;
 int FUNC_3 (int,struct usb_functionfs_event*,int) ;
 int FUNC_4 (int,int *,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_2, bool *VAR_3)
{
 struct usb_functionfs_event VAR_4;
 int VAR_5;

 struct pollfd VAR_6[1];
 VAR_6[0].fd = VAR_2;
 VAR_6[0].events = VAR_0;

 VAR_5 = FUNC_2(VAR_6, 1, 0);

 if (VAR_5 && (VAR_6[0].revents & VAR_0)) {
  VAR_5 = FUNC_3(VAR_2, &VAR_4, sizeof(VAR_4));
  if (!VAR_5) {
   FUNC_1("unable to read event from ep0");
   return;
  }
  FUNC_0(&VAR_4);
  switch (VAR_4.type) {
  case 128:
   if (VAR_4.u.setup.bRequestType & VAR_1)
    FUNC_4(VAR_2, ((void*)0), 0);
   else
    FUNC_3(VAR_2, ((void*)0), 0);
   break;

  case 129:
   *VAR_3 = 1;
   break;

  case 130:
   *VAR_3 = 0;
   break;

  default:
   break;
  }
 }
}
