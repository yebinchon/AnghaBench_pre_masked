
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wait_queue; int fifo; int active; } ;
struct usb_line6 {scalar_t__ message_length; TYPE_1__ messages; int buffer_message; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct usb_line6 *VAR_0)
{
 if (!VAR_0->messages.active)
  return;

 if (FUNC_0(&VAR_0->messages.fifo) >= VAR_0->message_length) {

  FUNC_1(&VAR_0->messages.fifo,
   VAR_0->buffer_message, VAR_0->message_length);
 }

 FUNC_2(&VAR_0->messages.wait_queue);
}
