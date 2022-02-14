
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xg_on_macro ;
struct snd_midi_op {int (* sysex ) (void*,unsigned char*,int,int,struct snd_midi_channel_set*) ;} ;
struct snd_midi_channel_set {scalar_t__ midi_mode; int max_channels; unsigned char gs_reverb_mode; unsigned char gs_chorus_mode; unsigned char gs_master_volume; TYPE_1__* channels; } ;
typedef int gs_pfx_macro ;
typedef int gm_on_macro ;
struct TYPE_2__ {int drum_channel; unsigned char midi_program; int* control; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (struct snd_midi_channel_set*) ;
 int FUNC_3 (void*,unsigned char*,int,int,struct snd_midi_channel_set*) ;

__attribute__((used)) static void
FUNC_4(struct snd_midi_op *VAR_12, void *VAR_13, unsigned char *VAR_14, int VAR_15,
      struct snd_midi_channel_set *VAR_16)
{

 static unsigned char VAR_17[] = {
  0x7e,0x7f,0x09,0x01,
 };

 static unsigned char VAR_18[] = {
  0x43,0x10,0x4c,0x00,0x00,0x7e,0x00,
 };






 static unsigned char VAR_19[] = {
  0x41,0x10,0x42,0x12,0x40,
 };

 int VAR_20 = VAR_10;

 if (VAR_15 <= 0 || VAR_14[0] != 0xf0)
  return;

 VAR_14++;
 VAR_15--;


 if (VAR_15 >= (int)sizeof(VAR_17) &&
     FUNC_1(VAR_14, VAR_17, sizeof(VAR_17)) == 0) {
  if (VAR_16->midi_mode != VAR_2 &&
      VAR_16->midi_mode != VAR_3) {
   VAR_16->midi_mode = VAR_1;
   FUNC_2(VAR_16);
   VAR_20 = VAR_4;
  }
 }


 else if (VAR_15 >= 8 &&
   FUNC_1(VAR_14, VAR_19, sizeof(VAR_19)) == 0) {
  if (VAR_16->midi_mode != VAR_2 &&
      VAR_16->midi_mode != VAR_3)
   VAR_16->midi_mode = VAR_2;

  if (VAR_14[5] == 0x00 && VAR_14[6] == 0x7f && VAR_14[7] == 0x00) {

   VAR_20 = VAR_8;
   FUNC_2(VAR_16);
  }

  else if ((VAR_14[5] & 0xf0) == 0x10 && VAR_14[6] == 0x15) {

   int VAR_21 = FUNC_0(VAR_14[5]);
   if (VAR_21 < VAR_16->max_channels) {
    VAR_20 = VAR_6;
    if (VAR_14[7])
     VAR_16->channels[VAR_21].drum_channel = 1;
    else
     VAR_16->channels[VAR_21].drum_channel = 0;
   }

  } else if ((VAR_14[5] & 0xf0) == 0x10 && VAR_14[6] == 0x21) {

   int VAR_22 = FUNC_0(VAR_14[5]);
   if (VAR_22 < VAR_16->max_channels &&
       ! VAR_16->channels[VAR_22].drum_channel) {
    VAR_20 = VAR_6;
    VAR_16->channels[VAR_22].midi_program = VAR_14[7];
   }

  } else if (VAR_14[5] == 0x01 && VAR_14[6] == 0x30) {

   VAR_20 = VAR_9;
   VAR_16->gs_reverb_mode = VAR_14[7];

  } else if (VAR_14[5] == 0x01 && VAR_14[6] == 0x38) {

   VAR_20 = VAR_5;
   VAR_16->gs_chorus_mode = VAR_14[7];

  } else if (VAR_14[5] == 0x00 && VAR_14[6] == 0x04) {

   VAR_20 = VAR_7;
   VAR_16->gs_master_volume = VAR_14[7];

  }
 }


 else if (VAR_15 >= (int)sizeof(VAR_18) &&
   FUNC_1(VAR_14, VAR_18, sizeof(VAR_18)) == 0) {
  int VAR_23;
  VAR_16->midi_mode = VAR_3;
  VAR_20 = VAR_11;

  for (VAR_23 = 0; VAR_23 < VAR_16->max_channels; VAR_23++) {
   if (VAR_16->channels[VAR_23].drum_channel)
    VAR_16->channels[VAR_23].control[VAR_0] = 127;
   else
    VAR_16->channels[VAR_23].control[VAR_0] = 0;
  }
 }

 if (VAR_12->sysex)
  VAR_12->sysex(VAR_13, VAR_14 - 1, VAR_15 + 1, VAR_20, VAR_16);
}
