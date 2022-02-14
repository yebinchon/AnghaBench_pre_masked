
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tracing_map_elt {TYPE_2__* map; TYPE_3__* fields; } ;
struct TYPE_6__ {scalar_t__ cmp_fn; int offset; } ;
struct TYPE_5__ {unsigned int n_fields; TYPE_1__* fields; } ;
struct TYPE_4__ {scalar_t__ cmp_fn; int offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tracing_map_elt*) ;

__attribute__((used)) static void FUNC_1(struct tracing_map_elt *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->map->n_fields; VAR_2++) {
  VAR_1->fields[VAR_2].cmp_fn = VAR_1->map->fields[VAR_2].cmp_fn;

  if (VAR_1->fields[VAR_2].cmp_fn != VAR_0)
   VAR_1->fields[VAR_2].offset = VAR_1->map->fields[VAR_2].offset;
 }
}
