
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct ensoniq {int uartm; int reg_lock; int ctrl; scalar_t__ uartc; struct snd_rawmidi_substream* midi_output; } ;
struct TYPE_2__ {struct ensoniq* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ensoniq*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_rawmidi_substream *VAR_5)
{
 struct ensoniq *VAR_6 = VAR_5->rmidi->private_data;

 FUNC_4(&VAR_6->reg_lock);
 VAR_6->uartm |= VAR_2;
 VAR_6->midi_output = VAR_5;
 if (!(VAR_6->uartm & VAR_1)) {
  FUNC_2(FUNC_0(3), FUNC_1(VAR_6, VAR_4));
  FUNC_2(VAR_6->uartc = 0, FUNC_1(VAR_6, VAR_4));
  FUNC_3(VAR_6->ctrl |= VAR_3, FUNC_1(VAR_6, VAR_0));
 }
 FUNC_5(&VAR_6->reg_lock);
 return 0;
}
