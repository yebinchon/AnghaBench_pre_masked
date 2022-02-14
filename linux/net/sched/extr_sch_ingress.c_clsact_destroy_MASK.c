
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clsact_sched_data {int ingress_block_info; int ingress_block; int egress_block_info; int egress_block; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct clsact_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int ,struct Qdisc*,int *) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_0)
{
 struct clsact_sched_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->egress_block, VAR_0, &VAR_1->egress_block_info);
 FUNC_3(VAR_1->ingress_block, VAR_0, &VAR_1->ingress_block_info);

 FUNC_1();
 FUNC_0();
}
