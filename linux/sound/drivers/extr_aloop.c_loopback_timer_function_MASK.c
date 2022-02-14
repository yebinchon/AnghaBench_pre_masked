
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct loopback_pcm {TYPE_2__* cable; TYPE_1__* substream; scalar_t__ period_update_pending; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int stream; } ;


 struct loopback_pcm* VAR_0 ;
 struct loopback_pcm* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct loopback_pcm*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 struct loopback_pcm *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 unsigned long VAR_4;

 FUNC_4(&VAR_3->cable->lock, VAR_4);
 if (FUNC_1(VAR_3->cable) & (1 << VAR_3->substream->stream)) {
  FUNC_2(VAR_3);
  if (VAR_3->period_update_pending) {
   VAR_3->period_update_pending = 0;
   FUNC_5(&VAR_3->cable->lock, VAR_4);

   FUNC_3(VAR_3->substream);
   return;
  }
 }
 FUNC_5(&VAR_3->cable->lock, VAR_4);
}
