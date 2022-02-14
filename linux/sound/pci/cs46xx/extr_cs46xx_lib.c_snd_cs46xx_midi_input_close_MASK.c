
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_cs46xx {int midcr; int uartm; int (* active_ctrl ) (struct snd_cs46xx*,int) ;int reg_lock; int * midi_input; } ;
struct TYPE_2__ {struct snd_cs46xx* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_cs46xx*) ;
 int FUNC_1 (struct snd_cs46xx*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_cs46xx*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_rawmidi_substream *VAR_5)
{
 struct snd_cs46xx *VAR_6 = VAR_5->rmidi->private_data;

 FUNC_2(&VAR_6->reg_lock);
 VAR_6->midcr &= ~(VAR_4 | VAR_3);
 VAR_6->midi_input = ((void*)0);
 if (!(VAR_6->uartm & VAR_2)) {
  FUNC_0(VAR_6);
 } else {
  FUNC_1(VAR_6, VAR_0, VAR_6->midcr);
 }
 VAR_6->uartm &= ~VAR_1;
 FUNC_3(&VAR_6->reg_lock);
 VAR_6->active_ctrl(VAR_6, -1);
 return 0;
}
