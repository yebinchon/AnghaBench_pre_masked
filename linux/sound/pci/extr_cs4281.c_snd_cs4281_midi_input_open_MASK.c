
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct cs4281 {int uartm; int reg_lock; int midcr; struct snd_rawmidi_substream* midi_input; } ;
struct TYPE_2__ {struct cs4281* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cs4281*) ;
 int FUNC_1 (struct cs4281*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_3)
{
 struct cs4281 *VAR_4 = VAR_3->rmidi->private_data;

 FUNC_2(&VAR_4->reg_lock);
  VAR_4->midcr |= VAR_1;
 VAR_4->midi_input = VAR_3;
 if (!(VAR_4->uartm & VAR_2)) {
  FUNC_0(VAR_4);
 } else {
  FUNC_1(VAR_4, VAR_0, VAR_4->midcr);
 }
 FUNC_3(&VAR_4->reg_lock);
 return 0;
}
