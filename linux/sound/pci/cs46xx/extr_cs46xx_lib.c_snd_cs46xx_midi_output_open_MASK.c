
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_cs46xx {int uartm; int reg_lock; int midcr; struct snd_rawmidi_substream* midi_output; int (* active_ctrl ) (struct snd_cs46xx*,int) ;} ;
struct TYPE_2__ {struct snd_cs46xx* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_cs46xx*) ;
 int FUNC_1 (struct snd_cs46xx*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_cs46xx*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_rawmidi_substream *VAR_4)
{
 struct snd_cs46xx *VAR_5 = VAR_4->rmidi->private_data;

 VAR_5->active_ctrl(VAR_5, 1);

 FUNC_2(&VAR_5->reg_lock);
 VAR_5->uartm |= VAR_2;
 VAR_5->midcr |= VAR_3;
 VAR_5->midi_output = VAR_4;
 if (!(VAR_5->uartm & VAR_1)) {
  FUNC_0(VAR_5);
 } else {
  FUNC_1(VAR_5, VAR_0, VAR_5->midcr);
 }
 FUNC_3(&VAR_5->reg_lock);
 return 0;
}
