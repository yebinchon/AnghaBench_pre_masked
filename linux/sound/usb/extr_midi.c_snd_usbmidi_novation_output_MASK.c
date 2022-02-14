
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct urb {int* transfer_buffer; int transfer_buffer_length; } ;
struct snd_usb_midi_out_endpoint {TYPE_1__* ports; scalar_t__ max_transfer; } ;
struct TYPE_2__ {scalar_t__ active; int substream; } ;


 int FUNC_0 (int ,int*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_midi_out_endpoint *VAR_0,
     struct urb *VAR_1)
{
 uint8_t *VAR_2;
 int VAR_3;

 if (!VAR_0->ports[0].active)
  return;
 VAR_2 = VAR_1->transfer_buffer;
 VAR_3 = FUNC_0(VAR_0->ports[0].substream,
         &VAR_2[2],
         VAR_0->max_transfer - 2);
 if (VAR_3 < 1) {
  VAR_0->ports[0].active = 0;
  return;
 }
 VAR_2[0] = 0;
 VAR_2[1] = VAR_3;
 VAR_1->transfer_buffer_length = 2 + VAR_3;
}
