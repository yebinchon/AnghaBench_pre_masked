
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct neigh_table {int * stats; int id; int * phash_buckets; int * nht; int entries; int proxy_queue; int proxy_timer; int gc_work; } ;
struct TYPE_4__ {int proc_net_stat; } ;
struct TYPE_3__ {int rcu; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (struct neigh_table*,int *) ;
 int ** VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 TYPE_1__* FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(int VAR_3, struct neigh_table *VAR_4)
{
 VAR_2[VAR_3] = ((void*)0);

 FUNC_2(&VAR_4->gc_work);
 FUNC_3(&VAR_4->proxy_timer);
 FUNC_7(&VAR_4->proxy_queue);
 FUNC_6(VAR_4, ((void*)0));
 if (FUNC_0(&VAR_4->entries))
  FUNC_8("neighbour leakage\n");

 FUNC_1(&FUNC_9(VAR_4->nht, 1)->rcu,
   VAR_1);
 VAR_4->nht = ((void*)0);

 FUNC_5(VAR_4->phash_buckets);
 VAR_4->phash_buckets = ((void*)0);

 FUNC_10(VAR_4->id, VAR_0.proc_net_stat);

 FUNC_4(VAR_4->stats);
 VAR_4->stats = ((void*)0);

 return 0;
}
