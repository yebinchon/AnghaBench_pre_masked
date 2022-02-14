
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct table_instance {scalar_t__ n_buckets; int rcu; } ;
struct TYPE_3__ {int hash; } ;
struct sw_flow {TYPE_2__* mask; int key; TYPE_1__ flow_table; } ;
struct flow_table {scalar_t__ count; scalar_t__ last_rehash; int ti; } ;
struct TYPE_4__ {int range; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct table_instance* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct table_instance*) ;
 struct table_instance* FUNC_4 (struct table_instance*,int) ;
 int FUNC_5 (struct table_instance*,struct sw_flow*) ;
 struct table_instance* FUNC_6 (struct table_instance*,scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct flow_table *VAR_3, struct sw_flow *VAR_4)
{
 struct table_instance *VAR_5 = ((void*)0);
 struct table_instance *VAR_6;

 VAR_4->flow_table.hash = FUNC_1(&VAR_4->key, &VAR_4->mask->range);
 VAR_6 = FUNC_2(VAR_3->ti);
 FUNC_5(VAR_6, VAR_4);
 VAR_3->count++;


 if (VAR_3->count > VAR_6->n_buckets)
  VAR_5 = FUNC_4(VAR_6, 0);
 else if (FUNC_7(VAR_2, VAR_3->last_rehash + VAR_0))
  VAR_5 = FUNC_6(VAR_6, VAR_6->n_buckets, 0);

 if (VAR_5) {
  FUNC_3(VAR_3->ti, VAR_5);
  FUNC_0(&VAR_6->rcu, VAR_1);
  VAR_3->last_rehash = VAR_2;
 }
}
