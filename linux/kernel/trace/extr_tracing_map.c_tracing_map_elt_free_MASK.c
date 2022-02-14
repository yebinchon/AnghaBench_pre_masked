
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tracing_map_elt {struct tracing_map_elt* key; struct tracing_map_elt* var_set; struct tracing_map_elt* vars; struct tracing_map_elt* fields; TYPE_2__* map; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* elt_free ) (struct tracing_map_elt*) ;} ;


 int FUNC_0 (struct tracing_map_elt*) ;
 int FUNC_1 (struct tracing_map_elt*) ;

__attribute__((used)) static void FUNC_2(struct tracing_map_elt *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->map->ops && VAR_0->map->ops->elt_free)
  VAR_0->map->ops->elt_free(VAR_0);
 FUNC_0(VAR_0->fields);
 FUNC_0(VAR_0->vars);
 FUNC_0(VAR_0->var_set);
 FUNC_0(VAR_0->key);
 FUNC_0(VAR_0);
}
