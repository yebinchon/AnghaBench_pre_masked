
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netns_ipvs {int sync_state; int ms; int sync_lock; TYPE_1__* master_tinfo; } ;
struct ipvs_master_sync_state {scalar_t__ sync_queue_len; scalar_t__ sync_queue_delay; int sync_queue; int master_wakeup_work; struct ip_vs_sync_buff* sync_buff; } ;
struct ip_vs_sync_buff {int list; } ;
struct TYPE_2__ {int task; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ip_vs_sync_buff*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct netns_ipvs*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static inline void FUNC_8(struct netns_ipvs *VAR_3,
     struct ipvs_master_sync_state *VAR_4)
{
 struct ip_vs_sync_buff *VAR_5 = VAR_4->sync_buff;

 FUNC_4(&VAR_3->sync_lock);
 if (VAR_3->sync_state & VAR_2 &&
     VAR_4->sync_queue_len < FUNC_6(VAR_3)) {
  if (!VAR_4->sync_queue_len)
   FUNC_3(&VAR_4->master_wakeup_work,
           FUNC_2(VAR_0, 1));
  VAR_4->sync_queue_len++;
  FUNC_1(&VAR_5->list, &VAR_4->sync_queue);
  if ((++VAR_4->sync_queue_delay) == VAR_1) {
   int VAR_6 = (int)(VAR_4 - VAR_3->ms);

   FUNC_7(VAR_3->master_tinfo[VAR_6].task);
  }
 } else
  FUNC_0(VAR_5);
 FUNC_5(&VAR_3->sync_lock);
}
