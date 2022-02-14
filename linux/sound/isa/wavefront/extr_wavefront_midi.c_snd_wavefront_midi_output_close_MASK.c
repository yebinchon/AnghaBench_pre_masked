
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
typedef size_t snd_wavefront_mpu_id ;
struct TYPE_5__ {int open; int * mode; } ;
typedef TYPE_2__ snd_wavefront_midi_t ;
struct TYPE_4__ {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct snd_rawmidi_substream*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_3)
{
 unsigned long VAR_4;
 snd_wavefront_midi_t *VAR_5;
 snd_wavefront_mpu_id VAR_6;

 if (FUNC_1(!VAR_3 || !VAR_3->rmidi))
  return -VAR_1;
 if (FUNC_1(!VAR_3->rmidi->private_data))
  return -VAR_1;

 VAR_6 = *((snd_wavefront_mpu_id *) VAR_3->rmidi->private_data);

 if ((VAR_5 = FUNC_0 (VAR_3)) == ((void*)0))
         return -VAR_0;

 FUNC_2 (&VAR_5->open, VAR_4);
 VAR_5->mode[VAR_6] &= ~VAR_2;
 FUNC_3 (&VAR_5->open, VAR_4);
 return 0;
}
