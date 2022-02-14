
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_gus_voice {int * volume_change; int * handler_effect; int handler_volume; int handler_wave; } ;
struct TYPE_2__ {int interrupt_handler_dma_read; int interrupt_handler_dma_write; struct snd_gus_voice* voices; int interrupt_handler_timer2; int interrupt_handler_timer1; int interrupt_handler_midi_in; int interrupt_handler_midi_out; } ;
struct snd_gus_card {TYPE_1__ gf1; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_0(struct snd_gus_card * VAR_14, unsigned int VAR_15)
{
 if (VAR_15 & VAR_3)
  VAR_14->gf1.interrupt_handler_midi_out = VAR_10;
 if (VAR_15 & VAR_2)
  VAR_14->gf1.interrupt_handler_midi_in = VAR_9;
 if (VAR_15 & VAR_4)
  VAR_14->gf1.interrupt_handler_timer1 = VAR_11;
 if (VAR_15 & VAR_5)
  VAR_14->gf1.interrupt_handler_timer2 = VAR_12;
 if (VAR_15 & VAR_6) {
  struct snd_gus_voice *VAR_16;

  VAR_16 = &VAR_14->gf1.voices[VAR_15 & 0xffff];
  VAR_16->handler_wave =
  VAR_16->handler_volume = VAR_13;
  VAR_16->handler_effect = ((void*)0);
  VAR_16->volume_change = ((void*)0);
 }
 if (VAR_15 & VAR_1)
  VAR_14->gf1.interrupt_handler_dma_write = VAR_8;
 if (VAR_15 & VAR_0)
  VAR_14->gf1.interrupt_handler_dma_read = VAR_7;
}
