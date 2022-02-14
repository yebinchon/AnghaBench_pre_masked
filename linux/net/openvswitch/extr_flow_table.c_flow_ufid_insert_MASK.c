
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table_instance {scalar_t__ n_buckets; int rcu; } ;
struct TYPE_2__ {int hash; } ;
struct sw_flow {int id; TYPE_1__ ufid_table; } ;
struct flow_table {scalar_t__ ufid_count; int ufid_ti; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct table_instance* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct table_instance*) ;
 struct table_instance* FUNC_3 (struct table_instance*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct table_instance*,struct sw_flow*) ;

__attribute__((used)) static void FUNC_6(struct flow_table *VAR_1, struct sw_flow *VAR_2)
{
 struct table_instance *VAR_3;

 VAR_2->ufid_table.hash = FUNC_4(&VAR_2->id);
 VAR_3 = FUNC_1(VAR_1->ufid_ti);
 FUNC_5(VAR_3, VAR_2);
 VAR_1->ufid_count++;


 if (VAR_1->ufid_count > VAR_3->n_buckets) {
  struct table_instance *VAR_4;

  VAR_4 = FUNC_3(VAR_3, 1);
  if (VAR_4) {
   FUNC_2(VAR_1->ufid_ti, VAR_4);
   FUNC_0(&VAR_3->rcu, VAR_0);
  }
 }
}
