
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {void* key; void* value; } ;
struct hashmap {int sz; int * buckets; int cap_bits; int ctx; int (* hash_fn ) (void const*,int ) ;} ;
typedef enum hashmap_insert_strategy { ____Placeholder_hashmap_insert_strategy } hashmap_insert_strategy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct hashmap_entry*) ;
 scalar_t__ FUNC_2 (struct hashmap*,void const*,size_t,int *,struct hashmap_entry**) ;
 int FUNC_3 (struct hashmap*) ;
 scalar_t__ FUNC_4 (struct hashmap*) ;
 struct hashmap_entry* FUNC_5 (int) ;
 int FUNC_6 (void const*,int ) ;
 int FUNC_7 (void const*,int ) ;

int FUNC_8(struct hashmap *VAR_7, const void *VAR_8, void *VAR_9,
      enum hashmap_insert_strategy VAR_10,
      const void **VAR_11, void **VAR_12)
{
 struct hashmap_entry *VAR_13;
 size_t VAR_14;
 int VAR_15;

 if (VAR_11)
  *VAR_11 = ((void*)0);
 if (VAR_12)
  *VAR_12 = ((void*)0);

 VAR_14 = FUNC_0(VAR_7->hash_fn(VAR_8, VAR_7->ctx), VAR_7->cap_bits);
 if (VAR_10 != VAR_4 &&
     FUNC_2(VAR_7, VAR_8, VAR_14, ((void*)0), &VAR_13)) {
  if (VAR_11)
   *VAR_11 = VAR_13->key;
  if (VAR_12)
   *VAR_12 = VAR_13->value;

  if (VAR_10 == VAR_5 || VAR_10 == VAR_6) {
   VAR_13->key = VAR_8;
   VAR_13->value = VAR_9;
   return 0;
  } else if (VAR_10 == VAR_3) {
   return -VAR_0;
  }
 }

 if (VAR_10 == VAR_6)
  return -VAR_1;

 if (FUNC_4(VAR_7)) {
  VAR_15 = FUNC_3(VAR_7);
  if (VAR_15)
   return VAR_15;
  VAR_14 = FUNC_0(VAR_7->hash_fn(VAR_8, VAR_7->ctx), VAR_7->cap_bits);
 }

 VAR_13 = FUNC_5(sizeof(struct hashmap_entry));
 if (!VAR_13)
  return -VAR_2;

 VAR_13->key = VAR_8;
 VAR_13->value = VAR_9;
 FUNC_1(&VAR_7->buckets[VAR_14], VAR_13);
 VAR_7->sz++;

 return 0;
}
