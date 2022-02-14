
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_sort_key {int field_idx; } ;
struct tracing_map_sort_entry {int dummy; } ;
struct tracing_map {int dummy; } ;


 int FUNC_0 (struct tracing_map_sort_entry const**,struct tracing_map_sort_entry const**) ;
 int FUNC_1 (struct tracing_map_sort_entry const**,struct tracing_map_sort_entry const**) ;
 scalar_t__ FUNC_2 (struct tracing_map*,int ) ;
 int FUNC_3 (struct tracing_map*,struct tracing_map_sort_key*) ;
 int FUNC_4 (struct tracing_map_sort_entry const**,unsigned int,int,int (*) (void const*,void const*),int *) ;

__attribute__((used)) static void FUNC_5(struct tracing_map *VAR_0,
      const struct tracing_map_sort_entry **VAR_1,
      unsigned int VAR_2,
      struct tracing_map_sort_key *VAR_3,
      struct tracing_map_sort_key *VAR_4)
{
 int (*VAR_5)(const struct tracing_map_sort_entry **,
     const struct tracing_map_sort_entry **);
 int (*VAR_6)(const struct tracing_map_sort_entry **,
       const struct tracing_map_sort_entry **);
 unsigned VAR_7, VAR_8 = 0, VAR_9 = 1;

 if (FUNC_2(VAR_0, VAR_3->field_idx))
  VAR_5 = FUNC_0;
 else
  VAR_5 = FUNC_1;

 if (FUNC_2(VAR_0, VAR_4->field_idx))
  VAR_6 = FUNC_0;
 else
  VAR_6 = FUNC_1;

 for (VAR_7 = 0; VAR_7 < VAR_2 - 1; VAR_7++) {
  const struct tracing_map_sort_entry **VAR_10 = &VAR_1[VAR_7];
  const struct tracing_map_sort_entry **VAR_11 = &VAR_1[VAR_7 + 1];

  if (VAR_5(VAR_10, VAR_11) == 0) {
   VAR_9++;
   if (VAR_7 < VAR_2 - 2)
    continue;
  }

  if (VAR_9 < 2) {
   VAR_8 = VAR_7 + 1;
   VAR_9 = 1;
   continue;
  }

  FUNC_3(VAR_0, VAR_4);
  FUNC_4(&VAR_1[VAR_8], VAR_9,
       sizeof(struct tracing_map_sort_entry *),
       (int (*)(const void *, const void *))VAR_6, ((void*)0));
  FUNC_3(VAR_0, VAR_3);

  VAR_8 = VAR_7 + 1;
  VAR_9 = 1;
 }
}
