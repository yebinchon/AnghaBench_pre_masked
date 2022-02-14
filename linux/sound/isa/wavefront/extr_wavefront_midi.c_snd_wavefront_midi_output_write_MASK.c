
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t snd_wavefront_mpu_id ;
struct TYPE_8__ {size_t output_mpu; int* mode; scalar_t__ istimer; int virtual; int timer; int isvirtual; int ** substream_output; } ;
typedef TYPE_2__ snd_wavefront_midi_t ;
struct TYPE_7__ {TYPE_2__ midi; } ;
struct TYPE_9__ {TYPE_1__ wavefront; } ;
typedef TYPE_3__ snd_wavefront_card_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int *) ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_2__*,unsigned char) ;

__attribute__((used)) static void FUNC_7(snd_wavefront_card_t *VAR_5)
{
 snd_wavefront_midi_t *VAR_6 = &VAR_5->wavefront.midi;
 snd_wavefront_mpu_id VAR_7;
 unsigned long VAR_8;
 unsigned char VAR_9;
 int VAR_10 = 256, VAR_11 = 1;
 int VAR_12;
 if (VAR_6->substream_output[VAR_6->output_mpu] == ((void*)0)) {
  goto __second;
 }

 while (VAR_10 > 0) {



  for (VAR_12 = 30000; VAR_12 > 0; VAR_12--) {
   if (FUNC_1 (VAR_6))
    break;
  }

  FUNC_4 (&VAR_6->virtual, VAR_8);
  if ((VAR_6->mode[VAR_6->output_mpu] & VAR_0) == 0) {
   FUNC_5 (&VAR_6->virtual, VAR_8);
   goto __second;
  }
  if (FUNC_1 (VAR_6)) {
   if (FUNC_2(VAR_6->substream_output[VAR_6->output_mpu], &VAR_9, 1) == 1) {
    if (!VAR_6->isvirtual ||
     (VAR_9 != VAR_3 &&
      VAR_9 != VAR_2))
     FUNC_6(VAR_6, VAR_9);
    VAR_10--;
   } else {
    if (VAR_6->istimer) {
     if (--VAR_6->istimer <= 0)
      FUNC_0(&VAR_6->timer);
    }
    VAR_6->mode[VAR_6->output_mpu] &= ~VAR_1;
    FUNC_5 (&VAR_6->virtual, VAR_8);
    goto __second;
   }
  } else {
   FUNC_5 (&VAR_6->virtual, VAR_8);
   return;
  }
  FUNC_5 (&VAR_6->virtual, VAR_8);
 }

      __second:

 if (VAR_6->substream_output[!VAR_6->output_mpu] == ((void*)0)) {
  return;
 }

 while (VAR_10 > 0) {



  for (VAR_12 = 30000; VAR_12 > 0; VAR_12--) {
   if (FUNC_1 (VAR_6))
    break;
  }

  FUNC_4 (&VAR_6->virtual, VAR_8);
  if (!VAR_6->isvirtual)
   VAR_11 = 0;
  VAR_7 = VAR_6->output_mpu ^ VAR_11;
  VAR_11 = 0;
  if ((VAR_6->mode[VAR_7] & VAR_0) == 0) {
   FUNC_5 (&VAR_6->virtual, VAR_8);
   return;
  }
  if (FUNC_3(VAR_6->substream_output[VAR_7]))
   goto __timer;
  if (FUNC_1 (VAR_6)) {
   if (VAR_7 != VAR_6->output_mpu) {
    FUNC_6(VAR_6, VAR_7 == VAR_4 ?
       VAR_3 :
       VAR_2);
    VAR_6->output_mpu = VAR_7;
   } else if (FUNC_2(VAR_6->substream_output[VAR_7], &VAR_9, 1) == 1) {
    if (!VAR_6->isvirtual ||
     (VAR_9 != VAR_3 &&
      VAR_9 != VAR_2))
     FUNC_6(VAR_6, VAR_9);
    VAR_10--;
   } else {
         __timer:
    if (VAR_6->istimer) {
     if (--VAR_6->istimer <= 0)
      FUNC_0(&VAR_6->timer);
    }
    VAR_6->mode[VAR_7] &= ~VAR_1;
    FUNC_5 (&VAR_6->virtual, VAR_8);
    return;
   }
  } else {
   FUNC_5 (&VAR_6->virtual, VAR_8);
   return;
  }
  FUNC_5 (&VAR_6->virtual, VAR_8);
 }
}
