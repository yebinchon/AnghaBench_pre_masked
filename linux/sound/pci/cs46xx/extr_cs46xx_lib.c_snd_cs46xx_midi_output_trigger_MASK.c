
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_cs46xx*,int ) ;
 int FUNC_1 (struct snd_cs46xx*,int ,unsigned char) ;
 int FUNC_2 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_rawmidi_substream *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 struct snd_cs46xx *VAR_8 = VAR_5->rmidi->private_data;
 unsigned char VAR_9;

 FUNC_3(&VAR_8->reg_lock, VAR_7);
 if (VAR_6) {
  if ((VAR_8->midcr & VAR_3) == 0) {
   VAR_8->midcr |= VAR_3;

   while ((VAR_8->midcr & VAR_3) &&
          (FUNC_0(VAR_8, VAR_1) & VAR_4) == 0) {
    if (FUNC_2(VAR_5, &VAR_9, 1) != 1) {
     VAR_8->midcr &= ~VAR_3;
    } else {
     FUNC_1(VAR_8, VAR_2, VAR_9);
    }
   }
   FUNC_1(VAR_8, VAR_0, VAR_8->midcr);
  }
 } else {
  if (VAR_8->midcr & VAR_3) {
   VAR_8->midcr &= ~VAR_3;
   FUNC_1(VAR_8, VAR_0, VAR_8->midcr);
  }
 }
 FUNC_4(&VAR_8->reg_lock, VAR_7);
}
