
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {int open; scalar_t__ hardware; int open_lock; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_sb* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_sb*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 struct snd_sb *VAR_6;

 VAR_6 = VAR_3->rmidi->private_data;
 FUNC_1(&VAR_6->open_lock, VAR_5);
 if (VAR_4) {
  if (!(VAR_6->open & VAR_2)) {
   if (VAR_6->hardware < VAR_1)
    FUNC_0(VAR_6, VAR_0);
   VAR_6->open |= VAR_2;
  }
 } else {
  if (VAR_6->open & VAR_2) {
   if (VAR_6->hardware < VAR_1)
    FUNC_0(VAR_6, VAR_0);
   VAR_6->open &= ~VAR_2;
  }
 }
 FUNC_2(&VAR_6->open_lock, VAR_5);
}
