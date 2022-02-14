
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct snd_korg1212 {scalar_t__ stop_pending_cnt; int dsp_stop_is_processed; size_t cardState; int lock; int wait; TYPE_1__* sharedBufferPtr; int timer; } ;
struct TYPE_2__ {scalar_t__ cardCommand; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 struct snd_korg1212* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 struct snd_korg1212* VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_4)
{
 struct snd_korg1212 *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_3);
 unsigned long VAR_6;

 FUNC_5(&VAR_5->lock, VAR_6);
 if (VAR_5->sharedBufferPtr->cardCommand == 0) {

  VAR_5->stop_pending_cnt = 0;
  VAR_5->dsp_stop_is_processed = 1;
  FUNC_7(&VAR_5->wait);
  FUNC_1("K1212_DEBUG: Stop ack'ed [%s]\n",
        VAR_2[VAR_5->cardState]);
 } else {
  if (--VAR_5->stop_pending_cnt > 0) {

   FUNC_3(&VAR_5->timer, VAR_0 + 1);
  } else {
   FUNC_4("korg1212_timer_func timeout\n");
   VAR_5->sharedBufferPtr->cardCommand = 0;
   VAR_5->dsp_stop_is_processed = 1;
   FUNC_7(&VAR_5->wait);
   FUNC_0("K1212_DEBUG: Stop timeout [%s]\n",
        VAR_2[VAR_5->cardState]);
  }
 }
 FUNC_6(&VAR_5->lock, VAR_6);
}
