
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_dl_entity {int deadline; } ;
struct dl_rq {int dl_nr_running; } ;
struct TYPE_2__ {int prio; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dl_rq*,int ) ;
 int FUNC_2 (struct sched_dl_entity*,struct dl_rq*) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (struct sched_dl_entity*) ;
 int FUNC_5 (struct dl_rq*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static inline
void FUNC_7(struct sched_dl_entity *VAR_0, struct dl_rq *VAR_1)
{
 int VAR_2 = FUNC_4(VAR_0)->prio;

 FUNC_0(!FUNC_3(VAR_2));
 FUNC_0(!VAR_1->dl_nr_running);
 VAR_1->dl_nr_running--;
 FUNC_6(FUNC_5(VAR_1), 1);

 FUNC_1(VAR_1, VAR_0->deadline);
 FUNC_2(VAR_0, VAR_1);
}
