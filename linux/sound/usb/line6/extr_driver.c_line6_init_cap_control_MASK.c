
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {int ifcdev; void* buffer_message; TYPE_1__* properties; int urb_listen; void* buffer_listen; } ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_line6*) ;
 int FUNC_3 (struct usb_line6*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_line6 *VAR_5)
{
 int VAR_6;


 VAR_5->buffer_listen = FUNC_1(VAR_2, VAR_1);
 if (!VAR_5->buffer_listen)
  return -VAR_0;

 VAR_5->urb_listen = FUNC_4(0, VAR_1);
 if (!VAR_5->urb_listen)
  return -VAR_0;

 if (VAR_5->properties->capabilities & VAR_3) {
  VAR_5->buffer_message = FUNC_1(VAR_4, VAR_1);
  if (!VAR_5->buffer_message)
   return -VAR_0;
 } else {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5->ifcdev, "cannot start listening: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
