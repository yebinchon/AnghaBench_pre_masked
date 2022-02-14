
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct table_instance {size_t node_ver; } ;
struct TYPE_4__ {int * node; } ;
struct TYPE_3__ {int * node; } ;
struct sw_flow {int mask; TYPE_2__ ufid_table; int id; TYPE_1__ flow_table; } ;
struct flow_table {scalar_t__ count; int ufid_count; int ufid_ti; int ti; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct flow_table*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct table_instance* FUNC_4 (int ) ;

void FUNC_5(struct flow_table *VAR_0, struct sw_flow *VAR_1)
{
 struct table_instance *VAR_2 = FUNC_4(VAR_0->ti);
 struct table_instance *VAR_3 = FUNC_4(VAR_0->ufid_ti);

 FUNC_0(VAR_0->count == 0);
 FUNC_2(&VAR_1->flow_table.node[VAR_2->node_ver]);
 VAR_0->count--;
 if (FUNC_3(&VAR_1->id)) {
  FUNC_2(&VAR_1->ufid_table.node[VAR_3->node_ver]);
  VAR_0->ufid_count--;
 }




 FUNC_1(VAR_0, VAR_1->mask);
}
