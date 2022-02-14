
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int hash_shift; int rcu; int * hash_buckets; int next; int hash_rnd; int dev; int primary_key; } ;
struct neigh_table {unsigned int (* hash ) (int ,int ,int ) ;int nht; int lock; } ;
struct neigh_hash_table {int hash_shift; int rcu; int * hash_buckets; int next; int hash_rnd; int dev; int primary_key; } ;


 int FUNC_0 (struct neigh_table*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct neighbour* FUNC_3 (unsigned long) ;
 int VAR_1 ;
 int FUNC_4 (int ,struct neighbour*) ;
 struct neighbour* FUNC_5 (int ,int ) ;
 unsigned int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static struct neigh_hash_table *FUNC_7(struct neigh_table *VAR_2,
      unsigned long VAR_3)
{
 unsigned int VAR_4, VAR_5;
 struct neigh_hash_table *VAR_6, *VAR_7;

 FUNC_0(VAR_2, VAR_0);

 VAR_7 = FUNC_5(VAR_2->nht,
         FUNC_2(&VAR_2->lock));
 VAR_6 = FUNC_3(VAR_3);
 if (!VAR_6)
  return VAR_7;

 for (VAR_4 = 0; VAR_4 < (1 << VAR_7->hash_shift); VAR_4++) {
  struct neighbour *VAR_8, *VAR_9;

  for (VAR_8 = FUNC_5(VAR_7->hash_buckets[VAR_4],
         FUNC_2(&VAR_2->lock));
       VAR_8 != ((void*)0);
       VAR_8 = VAR_9) {
   VAR_5 = VAR_2->hash(VAR_8->primary_key, VAR_8->dev,
      VAR_6->hash_rnd);

   VAR_5 >>= (32 - VAR_6->hash_shift);
   VAR_9 = FUNC_5(VAR_8->next,
      FUNC_2(&VAR_2->lock));

   FUNC_4(VAR_8->next,
        FUNC_5(
      VAR_6->hash_buckets[VAR_5],
      FUNC_2(&VAR_2->lock)));
   FUNC_4(VAR_6->hash_buckets[VAR_5], VAR_8);
  }
 }

 FUNC_4(VAR_2->nht, VAR_6);
 FUNC_1(&VAR_7->rcu, VAR_1);
 return VAR_6;
}
