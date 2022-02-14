
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_mixer_interface {TYPE_1__* chip; } ;
struct urb {int actual_length; int status; int dev; scalar_t__ transfer_buffer; struct usb_mixer_interface* context; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_mixer_interface*) ;
 int FUNC_2 (struct usb_mixer_interface*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_6)
{
 struct usb_mixer_interface *VAR_7 = VAR_6->context;
 int VAR_8 = VAR_6->actual_length;
 int VAR_9 = VAR_6->status;
 u32 VAR_10;

 if (VAR_9 != 0)
  goto requeue;

 if (VAR_8 == 8) {
  VAR_10 = FUNC_0(*(u32 *)VAR_6->transfer_buffer);
  if (VAR_10 & VAR_5)
   FUNC_2(VAR_7);
  if (VAR_10 & VAR_4)
   FUNC_1(VAR_7);
 } else {
  FUNC_3(VAR_7->chip,
         "scarlett mixer interrupt length %d\n", VAR_8);
 }

requeue:
 if (VAR_9 != -VAR_1 &&
     VAR_9 != -VAR_0 &&
     VAR_9 != -VAR_2) {
  VAR_6->dev = VAR_7->chip->dev;
  FUNC_4(VAR_6, VAR_3);
 }
}
