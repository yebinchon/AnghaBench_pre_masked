
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int dummy; } ;
typedef int hashmap_hash_fn ;
typedef int hashmap_equal_fn ;


 int VAR_0 ;
 struct hashmap* FUNC_0 (int ) ;
 int FUNC_1 (struct hashmap*,int ,int ,void*) ;
 struct hashmap* FUNC_2 (int) ;

struct hashmap *FUNC_3(hashmap_hash_fn VAR_1,
        hashmap_equal_fn VAR_2,
        void *VAR_3)
{
 struct hashmap *VAR_4 = FUNC_2(sizeof(struct hashmap));

 if (!VAR_4)
  return FUNC_0(-VAR_0);
 FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
