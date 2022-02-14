
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct snd_opl3_voice {scalar_t__ state; scalar_t__ note_off; int chan; int note; scalar_t__ note_off_check; } ;
struct snd_opl3 {int max_voices; int sys_timer_lock; scalar_t__ sys_timer_status; int tlist; int voice_lock; struct snd_opl3_voice* voices; } ;


 struct snd_opl3* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct snd_opl3* VAR_1 ;
 int FUNC_2 (struct snd_opl3*,int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;

void FUNC_5(struct timer_list *VAR_3)
{

 struct snd_opl3 *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 unsigned long VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_3(&VAR_4->voice_lock, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_4->max_voices; VAR_7++) {
  struct snd_opl3_voice *VAR_8 = &VAR_4->voices[VAR_7];
  if (VAR_8->state > 0 && VAR_8->note_off_check) {
   if (VAR_8->note_off == VAR_0)
    FUNC_2(VAR_4, VAR_8->note, 0,
        VAR_8->chan);
   else
    VAR_6++;
  }
 }
 FUNC_4(&VAR_4->voice_lock, VAR_5);

 FUNC_3(&VAR_4->sys_timer_lock, VAR_5);
 if (VAR_6)
  FUNC_1(&VAR_4->tlist, VAR_0 + 1);
 else
  VAR_4->sys_timer_status = 0;
 FUNC_4(&VAR_4->sys_timer_lock, VAR_5);
}
