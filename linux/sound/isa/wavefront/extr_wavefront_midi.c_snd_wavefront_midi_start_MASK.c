
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int mpu_command_port; } ;
struct TYPE_11__ {int interrupts_are_midi; TYPE_2__ midi; } ;
typedef TYPE_1__ snd_wavefront_t ;
typedef TYPE_2__ snd_wavefront_midi_t ;
struct TYPE_13__ {TYPE_1__ wavefront; } ;
typedef TYPE_3__ snd_wavefront_card_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,unsigned char*,unsigned char*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

int
FUNC_8 (snd_wavefront_card_t *VAR_5)

{
 int VAR_6, VAR_7;
 unsigned char VAR_8[4], VAR_9[4];
 snd_wavefront_t *VAR_10;
 snd_wavefront_midi_t *VAR_11;

 VAR_10 = &VAR_5->wavefront;
 VAR_11 = &VAR_10->midi;







 for (VAR_7 = 0; VAR_7 < 30000 && !FUNC_2 (VAR_11); VAR_7++);

 if (!FUNC_2 (VAR_11)) {
  FUNC_4 ("MIDI interface not ready for command\n");
  return -1;
 }





 VAR_10->interrupts_are_midi = 1;

 FUNC_1 (VAR_1, VAR_11->mpu_command_port);

 for (VAR_6 = 0, VAR_7 = 50000; VAR_7 > 0 && !VAR_6; VAR_7--) {
  if (FUNC_0 (VAR_11)) {
   if (FUNC_3 (VAR_11) == VAR_0) {
    VAR_6 = 1;
    break;
   }
  }
 }

 if (!VAR_6) {
  FUNC_4 ("cannot set UART mode for MIDI interface");
  VAR_10->interrupts_are_midi = 0;
  return -1;
 }



 if (FUNC_5 (VAR_10, VAR_2, VAR_8, VAR_9)) {
  FUNC_4 ("can't enable MIDI-IN-2-synth routing.\n");

 }
 if (FUNC_5 (VAR_10, VAR_3, VAR_8, VAR_9)) {
  FUNC_4 ("virtual MIDI mode not disabled\n");
  return 0;
 }

 FUNC_7 (VAR_5);

 if (FUNC_5 (VAR_10, VAR_4, VAR_8, VAR_9)) {
  FUNC_4 ("cannot enable virtual MIDI mode.\n");
  FUNC_6 (VAR_5);
 }
 return 0;
}
