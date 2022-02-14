
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {int open; int open_lock; int * midi_substream_input; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_sb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_sb*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi_substream *VAR_3)
{
 unsigned long VAR_4;
 struct snd_sb *VAR_5;

 VAR_5 = VAR_3->rmidi->private_data;
 FUNC_1(&VAR_5->open_lock, VAR_4);
 VAR_5->open &= ~(VAR_0 | VAR_1);
 VAR_5->midi_substream_input = ((void*)0);
 if (!(VAR_5->open & VAR_2)) {
  FUNC_2(&VAR_5->open_lock, VAR_4);
  FUNC_0(VAR_5);
 } else {
  FUNC_2(&VAR_5->open_lock, VAR_4);
 }
 return 0;
}
