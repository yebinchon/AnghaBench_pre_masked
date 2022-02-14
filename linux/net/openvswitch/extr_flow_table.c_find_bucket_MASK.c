
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct table_instance {int n_buckets; struct hlist_head* buckets; int hash_seed; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_1(struct table_instance *VAR_0, u32 VAR_1)
{
 VAR_1 = FUNC_0(VAR_1, VAR_0->hash_seed);
 return &VAR_0->buckets[VAR_1 & (VAR_0->n_buckets - 1)];
}
