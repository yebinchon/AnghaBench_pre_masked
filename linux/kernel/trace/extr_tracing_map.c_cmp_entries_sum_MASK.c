
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* tracing_map_cmp_fn_t ) (void*,void*) ;
struct tracing_map_sort_key {size_t field_idx; scalar_t__ descending; } ;
struct tracing_map_sort_entry {struct tracing_map_elt* elt; } ;
struct tracing_map_field {int (* cmp_fn ) (void*,void*) ;int sum; } ;
struct tracing_map_elt {struct tracing_map_field* fields; TYPE_1__* map; } ;
struct TYPE_2__ {struct tracing_map_sort_key sort_key; } ;



__attribute__((used)) static int FUNC_0(const struct tracing_map_sort_entry **VAR_0,
      const struct tracing_map_sort_entry **VAR_1)
{
 const struct tracing_map_elt *VAR_2, *VAR_3;
 struct tracing_map_sort_key *VAR_4;
 struct tracing_map_field *VAR_5;
 tracing_map_cmp_fn_t VAR_6;
 void *VAR_7, *VAR_8;
 int VAR_9 = 0;

 VAR_2 = (*VAR_0)->elt;
 VAR_3 = (*VAR_1)->elt;

 VAR_4 = &VAR_2->map->sort_key;

 VAR_5 = &VAR_2->fields[VAR_4->field_idx];
 VAR_6 = VAR_5->cmp_fn;

 VAR_7 = &VAR_2->fields[VAR_4->field_idx].sum;
 VAR_8 = &VAR_3->fields[VAR_4->field_idx].sum;

 VAR_9 = VAR_6(VAR_7, VAR_8);
 if (VAR_4->descending)
  VAR_9 = -VAR_9;

 return VAR_9;
}
