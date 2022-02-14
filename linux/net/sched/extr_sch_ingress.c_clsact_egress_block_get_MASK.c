
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int block_index; } ;
struct clsact_sched_data {TYPE_1__ egress_block_info; } ;
struct Qdisc {int dummy; } ;


 struct clsact_sched_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static u32 FUNC_1(struct Qdisc *VAR_0)
{
 struct clsact_sched_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->egress_block_info.block_index;
}
