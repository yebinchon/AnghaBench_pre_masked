
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracing_map_elt {int dummy; } ;
struct tracing_map {int max_elts; TYPE_1__* ops; int elts; int next_elt; } ;
struct TYPE_2__ {int (* elt_init ) (struct tracing_map_elt*) ;} ;


 struct tracing_map_elt** FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tracing_map_elt*) ;

__attribute__((used)) static struct tracing_map_elt *FUNC_3(struct tracing_map *VAR_0)
{
 struct tracing_map_elt *VAR_1 = ((void*)0);
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->next_elt);
 if (VAR_2 < VAR_0->max_elts) {
  VAR_1 = *(FUNC_0(VAR_0->elts, VAR_2));
  if (VAR_0->ops && VAR_0->ops->elt_init)
   VAR_0->ops->elt_init(VAR_1);
 }

 return VAR_1;
}
