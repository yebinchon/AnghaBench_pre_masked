
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_ice1712 {int midi_output; int reg_lock; } ;
struct TYPE_2__ {struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_4(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 struct snd_ice1712 *VAR_3 = VAR_1->rmidi->private_data;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->reg_lock, VAR_4);
 if (VAR_2) {
  VAR_3->midi_output = 1;
  FUNC_3(VAR_3);
 } else {
  VAR_3->midi_output = 0;
  FUNC_0(VAR_3, VAR_0, 0);
 }
 FUNC_2(&VAR_3->reg_lock, VAR_4);
}
