
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {TYPE_2__* dev; scalar_t__ transfer_buffer_length; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct midi_runtime {int out_lock; struct snd_rawmidi_substream* out; int out_serial; scalar_t__* out_buffer; struct urb out_urb; } ;
typedef scalar_t__ __s8 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct midi_runtime* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct snd_rawmidi_substream*,scalar_t__*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(
  struct snd_rawmidi_substream *VAR_2, int VAR_3)
{
 struct midi_runtime *VAR_4 = VAR_2->rmidi->private_data;
 struct urb *VAR_5 = &VAR_4->out_urb;
 __s8 VAR_6;
 unsigned long VAR_7;

 FUNC_2(&VAR_4->out_lock, VAR_7);
 if (VAR_3) {
  if (VAR_4->out) {
   FUNC_3(&VAR_4->out_lock, VAR_7);
   return;
  }

  VAR_6 = FUNC_1(VAR_2, VAR_4->out_buffer + 4,
    VAR_1 - 4);
  if (VAR_6 > 0) {
   VAR_4->out_buffer[1] = VAR_6 + 2;
   VAR_4->out_buffer[3] = VAR_4->out_serial++;
   VAR_5->transfer_buffer_length = VAR_6 + 4;

   VAR_6 = FUNC_4(VAR_5, VAR_0);
   if (VAR_6 < 0)
    FUNC_0(&VAR_5->dev->dev,
     "midi out urb submit failed: %d\n",
     VAR_6);
   else
    VAR_4->out = VAR_2;
  }
 } else if (VAR_4->out == VAR_2)
  VAR_4->out = ((void*)0);
 FUNC_3(&VAR_4->out_lock, VAR_7);
}
