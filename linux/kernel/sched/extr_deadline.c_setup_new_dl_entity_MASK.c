
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {int dl_runtime; int runtime; scalar_t__ dl_deadline; scalar_t__ deadline; scalar_t__ dl_throttled; int dl_boosted; } ;
struct rq {int dummy; } ;
struct dl_rq {int dummy; } ;


 int FUNC_0 (int ) ;
 struct dl_rq* FUNC_1 (struct sched_dl_entity*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct rq*) ;
 struct rq* FUNC_4 (struct dl_rq*) ;

__attribute__((used)) static inline void FUNC_5(struct sched_dl_entity *VAR_0)
{
 struct dl_rq *VAR_1 = FUNC_1(VAR_0);
 struct rq *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_0->dl_boosted);
 FUNC_0(FUNC_2(FUNC_3(VAR_2), VAR_0->deadline));






 if (VAR_0->dl_throttled)
  return;






 VAR_0->deadline = FUNC_3(VAR_2) + VAR_0->dl_deadline;
 VAR_0->runtime = VAR_0->dl_runtime;
}
