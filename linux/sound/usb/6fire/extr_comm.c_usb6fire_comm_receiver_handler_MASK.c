
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {TYPE_2__* dev; scalar_t__ actual_length; scalar_t__ status; struct comm_runtime* context; } ;
struct midi_runtime {int (* in_received ) (struct midi_runtime*,int*,int) ;} ;
struct comm_runtime {int* receiver_buffer; TYPE_1__* chip; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int shutdown; struct midi_runtime* midi; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct midi_runtime*,int*,int) ;
 scalar_t__ FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_1)
{
 struct comm_runtime *VAR_2 = VAR_1->context;
 struct midi_runtime *VAR_3 = VAR_2->chip->midi;

 if (!VAR_1->status) {
  if (VAR_2->receiver_buffer[0] == 0x10)
   if (VAR_3)
    VAR_3->in_received(VAR_3,
      VAR_2->receiver_buffer + 2,
      VAR_2->receiver_buffer[1]);
 }

 if (!VAR_2->chip->shutdown) {
  VAR_1->status = 0;
  VAR_1->actual_length = 0;
  if (FUNC_2(VAR_1, VAR_0) < 0)
   FUNC_0(&VAR_1->dev->dev,
     "comm data receiver aborted.\n");
 }
}
