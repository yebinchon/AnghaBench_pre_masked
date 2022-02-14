
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {scalar_t__ hardware; unsigned int open; int open_lock; struct snd_rawmidi_substream* midi_substream_input; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_2__ {struct snd_sb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct snd_sb*,int ) ;
 int FUNC_1 (struct snd_sb*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_6)
{
 unsigned long VAR_7;
 struct snd_sb *VAR_8;
 unsigned int VAR_9;

 VAR_8 = VAR_6->rmidi->private_data;
 VAR_9 = VAR_8->hardware >= VAR_2
  ? VAR_4 | VAR_5 : 0;
 FUNC_2(&VAR_8->open_lock, VAR_7);
 if (VAR_8->open & ~VAR_9) {
  FUNC_3(&VAR_8->open_lock, VAR_7);
  return -VAR_0;
 }
 VAR_8->open |= VAR_3;
 VAR_8->midi_substream_input = VAR_6;
 if (!(VAR_8->open & VAR_4)) {
  FUNC_3(&VAR_8->open_lock, VAR_7);
  FUNC_1(VAR_8);
  if (VAR_8->hardware >= VAR_2)
   FUNC_0(VAR_8, VAR_1);
 } else {
  FUNC_3(&VAR_8->open_lock, VAR_7);
 }
 return 0;
}
