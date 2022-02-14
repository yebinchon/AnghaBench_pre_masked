
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_2__* rmidi; } ;
typedef size_t snd_wavefront_mpu_id ;
struct TYPE_7__ {int* mode; int virtual; int istimer; int timer; } ;
typedef TYPE_3__ snd_wavefront_midi_t ;
typedef int snd_wavefront_card_t ;
struct TYPE_6__ {TYPE_1__* card; int * private_data; } ;
struct TYPE_5__ {scalar_t__ private_data; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct snd_rawmidi_substream*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_rawmidi_substream *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 snd_wavefront_midi_t *VAR_6;
 snd_wavefront_mpu_id VAR_7;

 if (VAR_3 == ((void*)0) || VAR_3->rmidi == ((void*)0))
         return;

 if (VAR_3->rmidi->private_data == ((void*)0))
         return;

 VAR_7 = *((snd_wavefront_mpu_id *) VAR_3->rmidi->private_data);

 if ((VAR_6 = FUNC_0 (VAR_3)) == ((void*)0)) {
  return;
 }

 FUNC_3 (&VAR_6->virtual, VAR_5);
 if (VAR_4) {
  if ((VAR_6->mode[VAR_7] & VAR_0) == 0) {
   if (!VAR_6->istimer) {
    FUNC_5(&VAR_6->timer,
         VAR_2,
         0);
    FUNC_1(&VAR_6->timer, 1 + VAR_1);
   }
   VAR_6->istimer++;
   VAR_6->mode[VAR_7] |= VAR_0;
  }
 } else {
  VAR_6->mode[VAR_7] &= ~VAR_0;
 }
 FUNC_4 (&VAR_6->virtual, VAR_5);

 if (VAR_4)
  FUNC_2((snd_wavefront_card_t *)VAR_3->rmidi->card->private_data);
}
