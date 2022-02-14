
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {int open; int open_lock; int midi_timer; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_sb* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct snd_rawmidi_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_rawmidi_substream *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 struct snd_sb *VAR_5;

 VAR_5 = VAR_2->rmidi->private_data;
 FUNC_2(&VAR_5->open_lock, VAR_4);
 if (VAR_3) {
  if (!(VAR_5->open & VAR_0)) {
   FUNC_0(&VAR_5->midi_timer, 1 + VAR_1);
   VAR_5->open |= VAR_0;
  }
 } else {
  if (VAR_5->open & VAR_0) {
   VAR_5->open &= ~VAR_0;
  }
 }
 FUNC_3(&VAR_5->open_lock, VAR_4);

 if (VAR_3)
  FUNC_1(VAR_2);
}
