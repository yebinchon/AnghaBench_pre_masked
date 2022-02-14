
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct hist_trigger_data {unsigned int n_var_refs; int map; struct hist_field** var_refs; } ;
struct TYPE_2__ {unsigned int idx; struct hist_trigger_data* hist_data; } ;
struct hist_field {int read_once; TYPE_1__ var; } ;


 struct tracing_map_elt* FUNC_0 (int ,void*) ;
 int FUNC_1 (struct tracing_map_elt*,unsigned int) ;
 int FUNC_2 (struct tracing_map_elt*,unsigned int) ;
 int FUNC_3 (struct tracing_map_elt*,unsigned int) ;

__attribute__((used)) static bool FUNC_4(struct hist_trigger_data *VAR_0, void *VAR_1,
        u64 *VAR_2, bool VAR_3)
{
 struct hist_trigger_data *VAR_4;
 struct tracing_map_elt *VAR_5;
 struct hist_field *VAR_6;
 unsigned int VAR_7, VAR_8;
 bool VAR_9 = 1;
 u64 VAR_10 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0->n_var_refs; VAR_7++) {
  VAR_6 = VAR_0->var_refs[VAR_7];
  VAR_8 = VAR_6->var.idx;
  VAR_4 = VAR_6->var.hist_data;

  if (VAR_4 == ((void*)0)) {
   VAR_9 = 0;
   break;
  }

  if ((VAR_3 && VAR_4 != VAR_0) ||
      (!VAR_3 && VAR_4 == VAR_0))
   continue;

  VAR_5 = FUNC_0(VAR_4->map, VAR_1);
  if (!VAR_5) {
   VAR_9 = 0;
   break;
  }

  if (!FUNC_3(VAR_5, VAR_8)) {
   VAR_9 = 0;
   break;
  }

  if (VAR_3 || !VAR_6->read_once)
   VAR_10 = FUNC_1(VAR_5, VAR_8);
  else
   VAR_10 = FUNC_2(VAR_5, VAR_8);

  VAR_2[VAR_7] = VAR_10;
 }

 return VAR_9;
}
