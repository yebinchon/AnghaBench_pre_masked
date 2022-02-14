
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {int dl_runtime; int runtime; scalar_t__ dl_deadline; scalar_t__ deadline; int dl_boosted; } ;
struct rq {int dummy; } ;
struct dl_rq {int dummy; } ;


 scalar_t__ FUNC_0 (struct sched_dl_entity*,struct sched_dl_entity*,scalar_t__) ;
 int FUNC_1 (struct sched_dl_entity*) ;
 struct dl_rq* FUNC_2 (struct sched_dl_entity*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct rq*) ;
 struct rq* FUNC_5 (struct dl_rq*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct sched_dl_entity*,struct rq*) ;

__attribute__((used)) static void FUNC_8(struct sched_dl_entity *VAR_0,
        struct sched_dl_entity *VAR_1)
{
 struct dl_rq *VAR_2 = FUNC_2(VAR_0);
 struct rq *VAR_3 = FUNC_5(VAR_2);

 if (FUNC_3(VAR_0->deadline, FUNC_4(VAR_3)) ||
     FUNC_0(VAR_0, VAR_1, FUNC_4(VAR_3))) {

  if (FUNC_6(!FUNC_1(VAR_0) &&
        !FUNC_3(VAR_0->deadline, FUNC_4(VAR_3)) &&
        !VAR_0->dl_boosted)){
   FUNC_7(VAR_0, VAR_3);
   return;
  }

  VAR_0->deadline = FUNC_4(VAR_3) + VAR_1->dl_deadline;
  VAR_0->runtime = VAR_1->dl_runtime;
 }
}
