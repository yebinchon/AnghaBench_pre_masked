
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct cs4281 {int midcr; int uartm; int reg_lock; int * midi_input; } ;
struct TYPE_2__ {struct cs4281* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cs4281*) ;
 int FUNC_1 (struct cs4281*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_5)
{
 struct cs4281 *VAR_6 = VAR_5->rmidi->private_data;

 FUNC_2(&VAR_6->reg_lock);
 VAR_6->midcr &= ~(VAR_2 | VAR_1);
 VAR_6->midi_input = ((void*)0);
 if (!(VAR_6->uartm & VAR_4)) {
  FUNC_0(VAR_6);
 } else {
  FUNC_1(VAR_6, VAR_0, VAR_6->midcr);
 }
 VAR_6->uartm &= ~VAR_3;
 FUNC_3(&VAR_6->reg_lock);
 return 0;
}
