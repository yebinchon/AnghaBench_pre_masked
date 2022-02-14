
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_midi_in_endpoint {TYPE_1__** urbs; int umidi; } ;
struct TYPE_2__ {int transfer_buffer_length; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (struct snd_usb_midi_in_endpoint*) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_midi_in_endpoint *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  if (VAR_1->urbs[VAR_2])
   FUNC_0(VAR_1->umidi, VAR_1->urbs[VAR_2],
         VAR_1->urbs[VAR_2]->transfer_buffer_length);
 FUNC_1(VAR_1);
}
