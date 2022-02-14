
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct ensoniq {unsigned char uartc; int reg_lock; } ;
struct TYPE_2__ {struct ensoniq* private_data; } ;


 int FUNC_0 (struct ensoniq*,int ) ;
 int FUNC_1 (unsigned char) ;
 unsigned char VAR_0 ;
 unsigned char FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char,int ) ;
 int FUNC_5 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct snd_rawmidi_substream *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 struct ensoniq *VAR_8 = VAR_5->rmidi->private_data;
 unsigned char VAR_9;

 FUNC_6(&VAR_8->reg_lock, VAR_7);
 if (VAR_6) {
  if (FUNC_1(VAR_8->uartc) == 0) {
   VAR_8->uartc |= FUNC_2(1);

   while (FUNC_1(VAR_8->uartc) == 1 &&
          (FUNC_3(FUNC_0(VAR_8, VAR_4)) & VAR_1)) {
    if (FUNC_5(VAR_5, &VAR_9, 1) != 1) {
     VAR_8->uartc &= ~VAR_0;
    } else {
     FUNC_4(VAR_9, FUNC_0(VAR_8, VAR_3));
    }
   }
   FUNC_4(VAR_8->uartc, FUNC_0(VAR_8, VAR_2));
  }
 } else {
  if (FUNC_1(VAR_8->uartc) == 1) {
   VAR_8->uartc &= ~VAR_0;
   FUNC_4(VAR_8->uartc, FUNC_0(VAR_8, VAR_2));
  }
 }
 FUNC_7(&VAR_8->reg_lock, VAR_7);
}
