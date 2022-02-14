
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct table_instance {int n_buckets; int keep_flows; int hash_seed; scalar_t__ node_ver; int * buckets; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct table_instance*) ;
 struct table_instance* FUNC_3 (int,int ) ;
 int * FUNC_4 (int,int,int ) ;

__attribute__((used)) static struct table_instance *FUNC_5(int VAR_1)
{
 struct table_instance *VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 int VAR_3;

 if (!VAR_2)
  return ((void*)0);

 VAR_2->buckets = FUNC_4(VAR_1, sizeof(struct hlist_head),
         VAR_0);
 if (!VAR_2->buckets) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(&VAR_2->buckets[VAR_3]);

 VAR_2->n_buckets = VAR_1;
 VAR_2->node_ver = 0;
 VAR_2->keep_flows = 0;
 FUNC_1(&VAR_2->hash_seed, sizeof(u32));

 return VAR_2;
}
