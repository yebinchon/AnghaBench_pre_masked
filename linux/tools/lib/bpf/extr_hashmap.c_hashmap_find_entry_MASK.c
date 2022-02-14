
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_entry {int key; struct hashmap_entry* next; } ;
struct hashmap {int ctx; scalar_t__ (* equal_fn ) (int ,void const*,int ) ;struct hashmap_entry** buckets; } ;


 scalar_t__ FUNC_0 (int ,void const*,int ) ;

__attribute__((used)) static bool FUNC_1(const struct hashmap *VAR_0,
          const void *VAR_1, size_t VAR_2,
          struct hashmap_entry ***VAR_3,
          struct hashmap_entry **VAR_4)
{
 struct hashmap_entry *VAR_5, **VAR_6;

 if (!VAR_0->buckets)
  return 0;

 for (VAR_6 = &VAR_0->buckets[VAR_2], VAR_5 = *VAR_6;
      VAR_5;
      VAR_6 = &VAR_5->next, VAR_5 = VAR_5->next) {
  if (VAR_0->equal_fn(VAR_5->key, VAR_1, VAR_0->ctx)) {
   if (VAR_3)
    *VAR_3 = VAR_6;
   *VAR_4 = VAR_5;
   return 1;
  }
 }

 return 0;
}
