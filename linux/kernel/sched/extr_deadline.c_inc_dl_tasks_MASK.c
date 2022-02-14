
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sched_dl_entity {int deadline; } ;
struct dl_rq {int dl_nr_running; } ;
struct TYPE_2__ {int prio; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (struct sched_dl_entity*) ;
 int FUNC_4 (struct dl_rq*,int ) ;
 int FUNC_5 (struct sched_dl_entity*,struct dl_rq*) ;
 int FUNC_6 (struct dl_rq*) ;

__attribute__((used)) static inline
void FUNC_7(struct sched_dl_entity *VAR_0, struct dl_rq *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0)->prio;
 u64 VAR_3 = VAR_0->deadline;

 FUNC_0(!FUNC_2(VAR_2));
 VAR_1->dl_nr_running++;
 FUNC_1(FUNC_6(VAR_1), 1);

 FUNC_4(VAR_1, VAR_3);
 FUNC_5(VAR_0, VAR_1);
}
