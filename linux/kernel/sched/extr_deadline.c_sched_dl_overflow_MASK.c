
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ dl_bw; int inactive_timer; } ;
struct task_struct {TYPE_1__ dl; } ;
struct sched_attr {scalar_t__ sched_deadline; scalar_t__ sched_runtime; int sched_flags; scalar_t__ sched_period; } ;
struct dl_bw {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dl_bw*,scalar_t__,int) ;
 int FUNC_1 (struct dl_bw*,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct dl_bw*,scalar_t__,int) ;
 int FUNC_3 (int ) ;
 struct dl_bw* FUNC_4 (int ) ;
 int FUNC_5 (struct task_struct*,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct task_struct*) ;
 scalar_t__ FUNC_11 (struct task_struct*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

int FUNC_13(struct task_struct *VAR_1, int VAR_2,
        const struct sched_attr *VAR_3)
{
 struct dl_bw *VAR_4 = FUNC_4(FUNC_10(VAR_1));
 u64 VAR_5 = VAR_3->sched_period ?: VAR_3->sched_deadline;
 u64 VAR_6 = VAR_3->sched_runtime;
 u64 VAR_7 = FUNC_6(VAR_2) ? FUNC_12(VAR_5, VAR_6) : 0;
 int VAR_8, VAR_9 = -1;

 if (VAR_3->sched_flags & VAR_0)
  return 0;


 if (VAR_7 == VAR_1->dl.dl_bw && FUNC_11(VAR_1))
  return 0;






 FUNC_8(&VAR_4->lock);
 VAR_8 = FUNC_3(FUNC_10(VAR_1));
 if (FUNC_6(VAR_2) && !FUNC_11(VAR_1) &&
     !FUNC_1(VAR_4, VAR_8, 0, VAR_7)) {
  if (FUNC_7(&VAR_1->dl.inactive_timer))
   FUNC_2(VAR_4, VAR_1->dl.dl_bw, VAR_8);
  FUNC_0(VAR_4, VAR_7, VAR_8);
  VAR_9 = 0;
 } else if (FUNC_6(VAR_2) && FUNC_11(VAR_1) &&
     !FUNC_1(VAR_4, VAR_8, VAR_1->dl.dl_bw, VAR_7)) {







  FUNC_2(VAR_4, VAR_1->dl.dl_bw, VAR_8);
  FUNC_0(VAR_4, VAR_7, VAR_8);
  FUNC_5(VAR_1, VAR_7);
  VAR_9 = 0;
 } else if (!FUNC_6(VAR_2) && FUNC_11(VAR_1)) {





  VAR_9 = 0;
 }
 FUNC_9(&VAR_4->lock);

 return VAR_9;
}
