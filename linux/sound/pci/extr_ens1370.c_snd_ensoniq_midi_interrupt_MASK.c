
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {int dummy; } ;
struct ensoniq {int uartm; unsigned char uartc; int reg_lock; int midi_output; int midi_input; struct snd_rawmidi* rmidi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ensoniq*,int ) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ensoniq * VAR_8)
{
 struct snd_rawmidi *VAR_9 = VAR_8->rmidi;
 unsigned char VAR_10, VAR_11, VAR_12;

 if (VAR_9 == ((void*)0))
  return;

 FUNC_5(&VAR_8->reg_lock);
 VAR_11 = VAR_8->uartm & VAR_0 ? VAR_2 : 0;
 while (VAR_11) {
  VAR_10 = FUNC_1(FUNC_0(VAR_8, VAR_7));
  if ((VAR_10 & VAR_11) == 0)
   break;
  VAR_12 = FUNC_1(FUNC_0(VAR_8, VAR_6));
  FUNC_3(VAR_8->midi_input, &VAR_12, 1);
 }
 FUNC_6(&VAR_8->reg_lock);


 FUNC_5(&VAR_8->reg_lock);
 VAR_11 = VAR_8->uartm & VAR_1 ? VAR_4 : 0;
 while (VAR_11) {
  VAR_10 = FUNC_1(FUNC_0(VAR_8, VAR_7));
  if ((VAR_10 & VAR_11) == 0)
   break;
  if (FUNC_4(VAR_8->midi_output, &VAR_12, 1) != 1) {
   VAR_8->uartc &= ~VAR_3;
   FUNC_2(VAR_8->uartc, FUNC_0(VAR_8, VAR_5));
   VAR_11 &= ~VAR_4;
  } else {
   FUNC_2(VAR_12, FUNC_0(VAR_8, VAR_6));
  }
 }
 FUNC_6(&VAR_8->reg_lock);
}
