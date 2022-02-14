
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
struct sched_dl_entity {struct hrtimer dl_timer; } ;
struct task_struct {struct sched_dl_entity dl; } ;
struct rq {int lock; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct sched_dl_entity*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct hrtimer*) ;
 int FUNC_3 (struct hrtimer*) ;
 int FUNC_4 (struct hrtimer*,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct rq*) ;
 struct rq* FUNC_11 (struct task_struct*) ;

__attribute__((used)) static int FUNC_12(struct task_struct *VAR_1)
{
 struct sched_dl_entity *VAR_2 = &VAR_1->dl;
 struct hrtimer *VAR_3 = &VAR_2->dl_timer;
 struct rq *VAR_4 = FUNC_11(VAR_1);
 ktime_t VAR_5, VAR_6;
 s64 VAR_7;

 FUNC_8(&VAR_4->lock);






 VAR_6 = FUNC_9(FUNC_0(VAR_2));
 VAR_5 = FUNC_2(VAR_3);
 VAR_7 = FUNC_6(VAR_5) - FUNC_10(VAR_4);
 VAR_6 = FUNC_5(VAR_6, VAR_7);






 if (FUNC_7(VAR_6, VAR_5) < 0)
  return 0;
 if (!FUNC_3(VAR_3)) {
  FUNC_1(VAR_1);
  FUNC_4(VAR_3, VAR_6, VAR_0);
 }

 return 1;
}
