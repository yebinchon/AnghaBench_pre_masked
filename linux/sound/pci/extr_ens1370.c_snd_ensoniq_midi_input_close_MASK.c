
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct ensoniq {int uartm; int uartc; int reg_lock; int * midi_input; int ctrl; } ;
struct TYPE_2__ {struct ensoniq* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ensoniq*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_rawmidi_substream *VAR_6)
{
 struct ensoniq *VAR_7 = VAR_6->rmidi->private_data;

 FUNC_3(&VAR_7->reg_lock);
 if (!(VAR_7->uartm & VAR_2)) {
  FUNC_1(VAR_7->uartc = 0, FUNC_0(VAR_7, VAR_5));
  FUNC_2(VAR_7->ctrl &= ~VAR_4, FUNC_0(VAR_7, VAR_0));
 } else {
  FUNC_1(VAR_7->uartc &= ~VAR_3, FUNC_0(VAR_7, VAR_5));
 }
 VAR_7->midi_input = ((void*)0);
 VAR_7->uartm &= ~VAR_1;
 FUNC_4(&VAR_7->reg_lock);
 return 0;
}
