
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tracing_map_elt {int* var_set; TYPE_3__* map; int * vars; TYPE_1__* fields; } ;
struct TYPE_6__ {unsigned int n_fields; unsigned int n_vars; TYPE_2__* ops; } ;
struct TYPE_5__ {int (* elt_clear ) (struct tracing_map_elt*) ;} ;
struct TYPE_4__ {scalar_t__ cmp_fn; int sum; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct tracing_map_elt*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct tracing_map_elt *VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->map->n_fields; VAR_2++)
  if (VAR_1->fields[VAR_2].cmp_fn == VAR_0)
   FUNC_0(&VAR_1->fields[VAR_2].sum, 0);

 for (VAR_2 = 0; VAR_2 < VAR_1->map->n_vars; VAR_2++) {
  FUNC_0(&VAR_1->vars[VAR_2], 0);
  VAR_1->var_set[VAR_2] = 0;
 }

 if (VAR_1->map->ops && VAR_1->map->ops->elt_clear)
  VAR_1->map->ops->elt_clear(VAR_1);
}
