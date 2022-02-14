
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table_instance {size_t node_ver; } ;
struct TYPE_2__ {int * node; int hash; } ;
struct sw_flow {TYPE_1__ ufid_table; } ;
struct hlist_head {int dummy; } ;


 struct hlist_head* FUNC_0 (struct table_instance*,int ) ;
 int FUNC_1 (int *,struct hlist_head*) ;

__attribute__((used)) static void FUNC_2(struct table_instance *VAR_0,
           struct sw_flow *VAR_1)
{
 struct hlist_head *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->ufid_table.hash);
 FUNC_1(&VAR_1->ufid_table.node[VAR_0->node_ver], VAR_2);
}
