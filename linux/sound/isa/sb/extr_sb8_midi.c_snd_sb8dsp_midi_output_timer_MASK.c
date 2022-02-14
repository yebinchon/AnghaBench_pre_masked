
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct snd_sb {int open_lock; int midi_timer; struct snd_rawmidi_substream* midi_substream_output; } ;
struct snd_rawmidi_substream {int dummy; } ;


 struct snd_sb* VAR_0 ;
 struct snd_sb* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct snd_rawmidi_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct snd_sb *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct snd_rawmidi_substream *VAR_5 = VAR_4->midi_substream_output;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->open_lock, VAR_6);
 FUNC_1(&VAR_4->midi_timer, 1 + VAR_1);
 FUNC_4(&VAR_4->open_lock, VAR_6);
 FUNC_2(VAR_5);
}
