
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_buffer_length; TYPE_1__* dev; struct midi_runtime* context; } ;
struct midi_runtime {int* out_buffer; int out_lock; int * out; int out_serial; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_2)
{
 struct midi_runtime *VAR_3 = VAR_2->context;
 int VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->out_lock, VAR_5);

 if (VAR_3->out) {
  VAR_4 = FUNC_1(VAR_3->out, VAR_3->out_buffer + 4,
    VAR_1 - 4);
  if (VAR_4 > 0) {
   VAR_3->out_buffer[1] = VAR_4 + 2;
   VAR_3->out_buffer[3] = VAR_3->out_serial++;
   VAR_2->transfer_buffer_length = VAR_4 + 4;

   VAR_4 = FUNC_4(VAR_2, VAR_0);
   if (VAR_4 < 0)
    FUNC_0(&VAR_2->dev->dev,
     "midi out urb submit failed: %d\n",
     VAR_4);
  } else
   VAR_3->out = ((void*)0);
 }
 FUNC_3(&VAR_3->out_lock, VAR_5);
}
