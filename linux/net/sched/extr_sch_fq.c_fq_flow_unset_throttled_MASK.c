
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fq_sched_data {int old_flows; int throttled_flows; int delayed; } ;
struct fq_flow {int rate_node; } ;


 int FUNC_0 (int *,struct fq_flow*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct fq_sched_data *VAR_0, struct fq_flow *VAR_1)
{
 FUNC_1(&VAR_1->rate_node, &VAR_0->delayed);
 VAR_0->throttled_flows--;
 FUNC_0(&VAR_0->old_flows, VAR_1);
}
