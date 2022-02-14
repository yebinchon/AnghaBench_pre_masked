
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
struct sched_dl_entity {scalar_t__ dl_runtime; int dl_non_contending; scalar_t__ deadline; int runtime; int dl_period; int dl_bw; struct hrtimer inactive_timer; } ;
struct task_struct {scalar_t__ state; struct sched_dl_entity dl; } ;
struct rq {int dl; } ;
struct dl_rq {int dummy; } ;
struct dl_bw {int lock; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct dl_bw*,int ,int ) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ) ;
 struct dl_bw* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sched_dl_entity*) ;
 struct dl_rq* FUNC_7 (struct sched_dl_entity*) ;
 scalar_t__ FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct task_struct*) ;
 scalar_t__ FUNC_10 (struct hrtimer*) ;
 int FUNC_11 (struct hrtimer*,int ,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct rq*) ;
 struct rq* FUNC_16 (struct dl_rq*) ;
 int FUNC_17 (struct sched_dl_entity*,int *) ;
 int FUNC_18 (struct sched_dl_entity*,struct dl_rq*) ;
 int FUNC_19 (struct task_struct*) ;

__attribute__((used)) static void FUNC_20(struct task_struct *VAR_2)
{
 struct sched_dl_entity *VAR_3 = &VAR_2->dl;
 struct hrtimer *VAR_4 = &VAR_3->inactive_timer;
 struct dl_rq *VAR_5 = FUNC_7(VAR_3);
 struct rq *VAR_6 = FUNC_16(VAR_5);
 s64 VAR_7;





 if (VAR_3->dl_runtime == 0)
  return;

 if (FUNC_6(VAR_3))
  return;

 FUNC_0(VAR_3->dl_non_contending);

 VAR_7 = VAR_3->deadline -
   FUNC_3((VAR_3->runtime * VAR_3->dl_period),
   VAR_3->dl_runtime);





 VAR_7 -= FUNC_15(VAR_6);





 if ((VAR_7 < 0) || FUNC_10(&VAR_3->inactive_timer)) {
  if (FUNC_8(VAR_2))
   FUNC_18(VAR_3, VAR_5);
  if (!FUNC_8(VAR_2) || VAR_2->state == VAR_1) {
   struct dl_bw *VAR_8 = FUNC_5(FUNC_19(VAR_2));

   if (VAR_2->state == VAR_1)
    FUNC_17(&VAR_2->dl, &VAR_6->dl);
   FUNC_13(&VAR_8->lock);
   FUNC_2(VAR_8, VAR_2->dl.dl_bw, FUNC_4(FUNC_19(VAR_2)));
   FUNC_1(VAR_2);
   FUNC_14(&VAR_8->lock);
  }

  return;
 }

 VAR_3->dl_non_contending = 1;
 FUNC_9(VAR_2);
 FUNC_11(VAR_4, FUNC_12(VAR_7), VAR_0);
}
