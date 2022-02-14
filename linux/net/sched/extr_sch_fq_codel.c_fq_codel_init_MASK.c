
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int ecn; void* mtu; } ;
struct fq_codel_sched_data {int flows_cnt; int memory_limit; int drop_batch_size; struct fq_codel_flow* flows; void* backlogs; int filter_list; int block; TYPE_1__ cparams; int cstats; int old_flows; int new_flows; void* quantum; } ;
struct fq_codel_flow {int cvars; int flowchain; } ;
struct Qdisc {int limit; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct fq_codel_flow*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct Qdisc*) ;
 struct fq_codel_sched_data* FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_3, struct nlattr *VAR_4,
    struct netlink_ext_ack *VAR_5)
{
 struct fq_codel_sched_data *VAR_6 = FUNC_9(VAR_3);
 int VAR_7;
 int VAR_8;

 VAR_3->limit = 10*1024;
 VAR_6->flows_cnt = 1024;
 VAR_6->memory_limit = 32 << 20;
 VAR_6->drop_batch_size = 64;
 VAR_6->quantum = FUNC_7(FUNC_8(VAR_3));
 FUNC_0(&VAR_6->new_flows);
 FUNC_0(&VAR_6->old_flows);
 FUNC_1(&VAR_6->cparams);
 FUNC_2(&VAR_6->cstats);
 VAR_6->cparams.ecn = 1;
 VAR_6->cparams.mtu = FUNC_7(FUNC_8(VAR_3));

 if (VAR_4) {
  VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5);
  if (VAR_8)
   goto init_failure;
 }

 VAR_8 = FUNC_10(&VAR_6->block, &VAR_6->filter_list, VAR_3, VAR_5);
 if (VAR_8)
  goto init_failure;

 if (!VAR_6->flows) {
  VAR_6->flows = FUNC_5(VAR_6->flows_cnt,
        sizeof(struct fq_codel_flow),
        VAR_1);
  if (!VAR_6->flows) {
   VAR_8 = -VAR_0;
   goto init_failure;
  }
  VAR_6->backlogs = FUNC_5(VAR_6->flows_cnt, sizeof(u32), VAR_1);
  if (!VAR_6->backlogs) {
   VAR_8 = -VAR_0;
   goto alloc_failure;
  }
  for (VAR_7 = 0; VAR_7 < VAR_6->flows_cnt; VAR_7++) {
   struct fq_codel_flow *VAR_9 = VAR_6->flows + VAR_7;

   FUNC_0(&VAR_9->flowchain);
   FUNC_3(&VAR_9->cvars);
  }
 }
 if (VAR_3->limit >= 1)
  VAR_3->flags |= VAR_2;
 else
  VAR_3->flags &= ~VAR_2;
 return 0;

alloc_failure:
 FUNC_6(VAR_6->flows);
 VAR_6->flows = ((void*)0);
init_failure:
 VAR_6->flows_cnt = 0;
 return VAR_8;
}
