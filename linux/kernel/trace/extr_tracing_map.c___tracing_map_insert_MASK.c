
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tracing_map_entry {int key; struct tracing_map_elt* val; } ;
struct tracing_map_elt {int key; } ;
struct tracing_map {int map_bits; int map_size; int hits; int key_size; int drops; int map; } ;


 struct tracing_map_elt* FUNC_0 (struct tracing_map_elt*) ;
 struct tracing_map_entry* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int ,int) ;
 struct tracing_map_elt* FUNC_4 (struct tracing_map*) ;
 int FUNC_5 (void*,int ,int ) ;
 scalar_t__ FUNC_6 (void*,int ,int ) ;
 int FUNC_7 (int ,void*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline struct tracing_map_elt *
FUNC_9(struct tracing_map *VAR_0, void *VAR_1, bool VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 int VAR_6 = 0;
 struct tracing_map_entry *VAR_7;
 struct tracing_map_elt *VAR_8;

 VAR_4 = FUNC_5(VAR_1, VAR_0->key_size, 0);
 if (VAR_4 == 0)
  VAR_4 = 1;
 VAR_3 = VAR_4 >> (32 - (VAR_0->map_bits + 1));

 while (1) {
  VAR_3 &= (VAR_0->map_size - 1);
  VAR_7 = FUNC_1(VAR_0->map, VAR_3);
  VAR_5 = VAR_7->key;

  if (VAR_5 && VAR_5 == VAR_4) {
   VAR_8 = FUNC_0(VAR_7->val);
   if (VAR_8 &&
       FUNC_6(VAR_1, VAR_8->key, VAR_0->key_size)) {
    if (!VAR_2)
     FUNC_2(&VAR_0->hits);
    return VAR_8;
   } else if (FUNC_8(!VAR_8)) {
    VAR_6++;
    if (VAR_6 > VAR_0->map_size) {
     FUNC_2(&VAR_0->drops);
     break;
    }
    continue;
   }
  }

  if (!VAR_5) {
   if (VAR_2)
    break;

   if (!FUNC_3(&VAR_7->key, 0, VAR_4)) {
    struct tracing_map_elt *VAR_9;

    VAR_9 = FUNC_4(VAR_0);
    if (!VAR_9) {
     FUNC_2(&VAR_0->drops);
     VAR_7->key = 0;
     break;
    }

    FUNC_7(VAR_9->key, VAR_1, VAR_0->key_size);
    VAR_7->val = VAR_9;
    FUNC_2(&VAR_0->hits);

    return VAR_7->val;
   } else {




    VAR_6++;
    continue;
   }
  }

  VAR_3++;
 }

 return ((void*)0);
}
