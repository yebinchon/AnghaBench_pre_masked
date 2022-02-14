
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {scalar_t__ dl_runtime; int inactive_timer; scalar_t__ dl_non_contending; } ;
struct dl_rq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sched_dl_entity*,struct dl_rq*) ;
 int FUNC_1 (struct sched_dl_entity*,struct dl_rq*) ;
 struct dl_rq* FUNC_2 (struct sched_dl_entity*) ;
 int FUNC_3 (struct sched_dl_entity*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct sched_dl_entity *VAR_1, int VAR_2)
{
 struct dl_rq *VAR_3 = FUNC_2(VAR_1);





 if (VAR_1->dl_runtime == 0)
  return;

 if (VAR_2 & VAR_0)
  FUNC_0(VAR_1, VAR_3);

 if (VAR_1->dl_non_contending) {
  VAR_1->dl_non_contending = 0;







  if (FUNC_4(&VAR_1->inactive_timer) == 1)
   FUNC_5(FUNC_3(VAR_1));
 } else {







  FUNC_1(VAR_1, VAR_3);
 }
}
