
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_korg1212 {int timer; scalar_t__ stop_pending_cnt; TYPE_1__* sharedBufferPtr; } ;
struct TYPE_2__ {int cardCommand; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct snd_korg1212 *VAR_2)
{
 if (! VAR_2->stop_pending_cnt) {
  VAR_2->sharedBufferPtr->cardCommand = 0xffffffff;

  VAR_2->stop_pending_cnt = VAR_0;
  FUNC_0(&VAR_2->timer, VAR_1 + 1);
 }
}
