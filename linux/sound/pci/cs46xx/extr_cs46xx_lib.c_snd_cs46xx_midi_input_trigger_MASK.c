
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_cs46xx {int midcr; int reg_lock; } ;
struct TYPE_2__ {struct snd_cs46xx* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs46xx*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 struct snd_cs46xx *VAR_5 = VAR_2->rmidi->private_data;

 FUNC_1(&VAR_5->reg_lock, VAR_4);
 if (VAR_3) {
  if ((VAR_5->midcr & VAR_1) == 0) {
   VAR_5->midcr |= VAR_1;
   FUNC_0(VAR_5, VAR_0, VAR_5->midcr);
  }
 } else {
  if (VAR_5->midcr & VAR_1) {
   VAR_5->midcr &= ~VAR_1;
   FUNC_0(VAR_5, VAR_0, VAR_5->midcr);
  }
 }
 FUNC_2(&VAR_5->reg_lock, VAR_4);
}
