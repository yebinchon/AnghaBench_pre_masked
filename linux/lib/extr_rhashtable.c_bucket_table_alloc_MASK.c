
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct bucket_table {size_t size; int * buckets; int hash_rnd; int walkers; int rcu; int dep_map; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 struct bucket_table* FUNC_3 (int ,int) ;
 int FUNC_4 (int *,char*,struct lock_class_key*,int ) ;
 struct bucket_table* FUNC_5 (struct rhashtable*,size_t,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct bucket_table*,int ,size_t) ;

__attribute__((used)) static struct bucket_table *FUNC_8(struct rhashtable *VAR_3,
            size_t VAR_4,
            gfp_t VAR_5)
{
 struct bucket_table *VAR_6 = ((void*)0);
 size_t VAR_7;
 int VAR_8;
 static struct lock_class_key VAR_9;

 VAR_6 = FUNC_3(FUNC_7(VAR_6, VAR_2, VAR_4), VAR_5);

 VAR_7 = VAR_4;

 if (VAR_6 == ((void*)0) && (VAR_5 & ~VAR_1) != VAR_0) {
  VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5);
  VAR_4 = 0;
 }

 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_4(&VAR_6->dep_map, "rhashtable_bucket", &VAR_9, 0);

 VAR_6->size = VAR_7;

 FUNC_6(&VAR_6->rcu);
 FUNC_0(&VAR_6->walkers);

 VAR_6->hash_rnd = FUNC_2();

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_1(VAR_6->buckets[VAR_8]);

 return VAR_6;
}
