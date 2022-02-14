
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_line6 {int message_length; int * buffer_message; int (* process_message ) (struct usb_line6*) ;int ifcdev; TYPE_2__* properties; TYPE_1__* line6midi; } ;
struct urb {int actual_length; int * transfer_buffer; int status; scalar_t__ context; } ;
struct midi_buffer {int dummy; } ;
struct TYPE_4__ {int capabilities; } ;
struct TYPE_3__ {struct midi_buffer midibuf_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct usb_line6*,int *,int) ;
 int FUNC_2 (struct midi_buffer*,int) ;
 int FUNC_3 (struct midi_buffer*,int *,int ) ;
 int FUNC_4 (struct midi_buffer*,int *,int) ;
 int FUNC_5 (struct usb_line6*) ;
 int FUNC_6 (struct usb_line6*) ;
 int FUNC_7 (struct usb_line6*) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_3)
{
 struct usb_line6 *VAR_4 = (struct usb_line6 *)VAR_3->context;
 struct midi_buffer *VAR_5 = &VAR_4->line6midi->midibuf_in;
 int VAR_6;

 if (VAR_3->status == -VAR_0)
  return;

 if (VAR_4->properties->capabilities & VAR_1) {
  VAR_6 =
   FUNC_4(VAR_5, VAR_3->transfer_buffer, VAR_3->actual_length);

  if (VAR_6 < VAR_3->actual_length) {
   FUNC_2(VAR_5, VAR_6);
   FUNC_0(VAR_4->ifcdev, "%d %d buffer overflow - message skipped\n",
    VAR_6, VAR_3->actual_length);
  }

  for (;;) {
   VAR_6 =
    FUNC_3(VAR_5, VAR_4->buffer_message,
      VAR_2);

   if (VAR_6 == 0)
    break;

   VAR_4->message_length = VAR_6;
   FUNC_1(VAR_4, VAR_4->buffer_message, VAR_6);

   if (VAR_4->process_message)
    VAR_4->process_message(VAR_4);
  }
 } else {
  VAR_4->buffer_message = VAR_3->transfer_buffer;
  VAR_4->message_length = VAR_3->actual_length;
  if (VAR_4->process_message)
   VAR_4->process_message(VAR_4);
  VAR_4->buffer_message = ((void*)0);
 }

 FUNC_5(VAR_4);
}
