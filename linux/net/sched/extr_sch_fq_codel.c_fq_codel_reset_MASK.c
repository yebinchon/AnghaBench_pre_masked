
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fq_codel_sched_data {int flows_cnt; scalar_t__ memory_usage; int backlogs; struct fq_codel_flow* flows; int old_flows; int new_flows; } ;
struct fq_codel_flow {int cvars; int flowchain; } ;
struct TYPE_4__ {scalar_t__ backlog; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_2__ qstats; TYPE_1__ q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fq_codel_flow*) ;
 int FUNC_3 (int ,int ,int) ;
 struct fq_codel_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0)
{
 struct fq_codel_sched_data *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->new_flows);
 FUNC_0(&VAR_1->old_flows);
 for (VAR_2 = 0; VAR_2 < VAR_1->flows_cnt; VAR_2++) {
  struct fq_codel_flow *VAR_3 = VAR_1->flows + VAR_2;

  FUNC_2(VAR_3);
  FUNC_0(&VAR_3->flowchain);
  FUNC_1(&VAR_3->cvars);
 }
 FUNC_3(VAR_1->backlogs, 0, VAR_1->flows_cnt * sizeof(u32));
 VAR_0->q.qlen = 0;
 VAR_0->qstats.backlog = 0;
 VAR_1->memory_usage = 0;
}
