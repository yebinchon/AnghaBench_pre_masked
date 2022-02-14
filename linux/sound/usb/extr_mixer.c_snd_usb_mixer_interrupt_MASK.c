
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {scalar_t__ protocol; TYPE_2__* chip; } ;
struct urb {int actual_length; int status; TYPE_1__* dev; struct uac2_interrupt_data_msg* transfer_buffer; struct usb_mixer_interface* context; } ;
struct uac2_interrupt_data_msg {int bStatusType; int bInfo; int wIndex; int wValue; int bAttribute; int bOriginator; } ;
struct uac1_status_word {int bStatusType; int bInfo; int wIndex; int wValue; int bAttribute; int bOriginator; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_mixer_interface*,int ,int ,int ) ;
 int FUNC_3 (struct usb_mixer_interface*,int ) ;
 int FUNC_4 (struct usb_mixer_interface*,int ) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_10)
{
 struct usb_mixer_interface *VAR_11 = VAR_10->context;
 int VAR_12 = VAR_10->actual_length;
 int VAR_13 = VAR_10->status;

 if (VAR_13 != 0)
  goto requeue;

 if (VAR_11->protocol == VAR_9) {
  struct uac1_status_word *VAR_14;

  for (VAR_14 = VAR_10->transfer_buffer;
       VAR_12 >= sizeof(*VAR_14);
       VAR_12 -= sizeof(*VAR_14), VAR_14++) {
   FUNC_0(&VAR_10->dev->dev, "status interrupt: %02x %02x\n",
      VAR_14->bStatusType,
      VAR_14->bOriginator);


   if ((VAR_14->bStatusType & VAR_6) !=
    VAR_5)
    continue;

   if (VAR_14->bStatusType & VAR_4)
    FUNC_4(VAR_11, VAR_14->bOriginator);
   else
    FUNC_3(VAR_11, VAR_14->bOriginator);
  }
 } else {
  struct uac2_interrupt_data_msg *VAR_15;

  for (VAR_15 = VAR_10->transfer_buffer;
       VAR_12 >= sizeof(*VAR_15);
       VAR_12 -= sizeof(*VAR_15), VAR_15++) {

   if ((VAR_15->bInfo & VAR_8) ||
       (VAR_15->bInfo & VAR_7))
    continue;

   FUNC_2(VAR_11, VAR_15->bAttribute,
         FUNC_1(VAR_15->wValue),
         FUNC_1(VAR_15->wIndex));
  }
 }

requeue:
 if (VAR_13 != -VAR_1 &&
     VAR_13 != -VAR_0 &&
     VAR_13 != -VAR_2) {
  VAR_10->dev = VAR_11->chip->dev;
  FUNC_5(VAR_10, VAR_3);
 }
}
