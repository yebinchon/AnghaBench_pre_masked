
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracing_map_sort_key {int field_idx; } ;
struct tracing_map_sort_entry {int dummy; } ;
struct tracing_map_entry {TYPE_1__* val; int key; } ;
struct tracing_map {int map_size; int key_size; int map; int max_elts; } ;
typedef int sort_entry ;
struct TYPE_2__ {int key; } ;


 int VAR_0 ;
 struct tracing_map_entry* FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct tracing_map_sort_entry const**,struct tracing_map_sort_entry const**) ;
 int FUNC_3 (struct tracing_map_sort_entry const**,struct tracing_map_sort_entry const**) ;
 struct tracing_map_sort_entry* FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (struct tracing_map_sort_entry**,int,int ) ;
 scalar_t__ FUNC_6 (struct tracing_map*,int ) ;
 int FUNC_7 (struct tracing_map*,struct tracing_map_sort_key*) ;
 int FUNC_8 (struct tracing_map_sort_entry**,int,int,int (*) (void const*,void const*),int *) ;
 int FUNC_9 (struct tracing_map*,struct tracing_map_sort_entry const**,int,struct tracing_map_sort_key*,struct tracing_map_sort_key*) ;
 int FUNC_10 (struct tracing_map_sort_entry**,int) ;
 struct tracing_map_sort_entry** FUNC_11 (int ) ;

int FUNC_12(struct tracing_map *VAR_1,
        struct tracing_map_sort_key *VAR_2,
        unsigned int VAR_3,
        struct tracing_map_sort_entry ***VAR_4)
{
 int (*VAR_5)(const struct tracing_map_sort_entry **,
         const struct tracing_map_sort_entry **);
 struct tracing_map_sort_entry *VAR_6, **VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_11(FUNC_1(sizeof(VAR_6), VAR_1->max_elts));
 if (!VAR_7)
  return -VAR_0;

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_1->map_size; VAR_8++) {
  struct tracing_map_entry *VAR_11;

  VAR_11 = FUNC_0(VAR_1->map, VAR_8);

  if (!VAR_11->key || !VAR_11->val)
   continue;

  VAR_7[VAR_9] = FUNC_4(VAR_11->val->key,
             VAR_11->val);
  if (!VAR_7[VAR_9++]) {
   VAR_10 = -VAR_0;
   goto free;
  }
 }

 if (VAR_9 == 0) {
  VAR_10 = 0;
  goto free;
 }

 if (VAR_9 == 1) {
  *VAR_4 = VAR_7;
  return 1;
 }

 FUNC_5(VAR_7, VAR_9, VAR_1->key_size);

 if (FUNC_6(VAR_1, VAR_2[0].field_idx))
  VAR_5 = FUNC_2;
 else
  VAR_5 = FUNC_3;

 FUNC_7(VAR_1, &VAR_2[0]);

 FUNC_8(VAR_7, VAR_9, sizeof(struct tracing_map_sort_entry *),
      (int (*)(const void *, const void *))VAR_5, ((void*)0));

 if (VAR_3 > 1)
  FUNC_9(VAR_1,
          (const struct tracing_map_sort_entry **)VAR_7,
          VAR_9,
          &VAR_2[0],
          &VAR_2[1]);

 *VAR_4 = VAR_7;

 return VAR_9;
 free:
 FUNC_10(VAR_7, VAR_9);

 return VAR_10;
}
