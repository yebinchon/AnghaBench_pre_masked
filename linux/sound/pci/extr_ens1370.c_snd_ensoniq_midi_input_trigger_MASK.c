
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct ensoniq {int uartc; int reg_lock; } ;
struct TYPE_2__ {struct ensoniq* private_data; } ;


 int FUNC_0 (struct ensoniq*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_rawmidi_substream *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 struct ensoniq *VAR_6 = VAR_3->rmidi->private_data;
 int VAR_7;

 FUNC_3(&VAR_6->reg_lock, VAR_5);
 if (VAR_4) {
  if ((VAR_6->uartc & VAR_0) == 0) {

   for (VAR_7 = 0; VAR_7 < 32; VAR_7++)
    FUNC_1(FUNC_0(VAR_6, VAR_2));
   VAR_6->uartc |= VAR_0;
   FUNC_2(VAR_6->uartc, FUNC_0(VAR_6, VAR_1));
  }
 } else {
  if (VAR_6->uartc & VAR_0) {
   VAR_6->uartc &= ~VAR_0;
   FUNC_2(VAR_6->uartc, FUNC_0(VAR_6, VAR_1));
  }
 }
 FUNC_4(&VAR_6->reg_lock, VAR_5);
}
