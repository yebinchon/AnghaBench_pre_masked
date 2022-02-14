
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_sort_entry {int elt; int key; } ;
struct tracing_map {int dummy; } ;
struct seq_file {int dummy; } ;
struct hist_trigger_data {int n_sort_keys; int sort_keys; struct tracing_map* map; } ;


 int FUNC_0 (struct seq_file*,struct hist_trigger_data*,int ,int ) ;
 int FUNC_1 (struct tracing_map_sort_entry**,int) ;
 int FUNC_2 (struct tracing_map*,int ,int ,struct tracing_map_sort_entry***) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0,
    struct hist_trigger_data *VAR_1)
{
 struct tracing_map_sort_entry **VAR_2 = ((void*)0);
 struct tracing_map *VAR_3 = VAR_1->map;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1->sort_keys,
          VAR_1->n_sort_keys,
          &VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_0(VAR_0, VAR_1,
      VAR_2[VAR_4]->key,
      VAR_2[VAR_4]->elt);

 FUNC_1(VAR_2, VAR_5);

 return VAR_5;
}
