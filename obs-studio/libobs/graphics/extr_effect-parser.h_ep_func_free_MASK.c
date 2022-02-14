
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct ep_func {TYPE_1__ sampler_deps; TYPE_1__ param_deps; TYPE_1__ struct_deps; TYPE_1__ func_deps; TYPE_1__ param_vars; int contents; int mapping; int ret_type; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct ep_func *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->param_vars.num; VAR_1++)
  FUNC_3(VAR_0->param_vars.array + VAR_1);

 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->ret_type);
 FUNC_0(VAR_0->mapping);
 FUNC_2(&VAR_0->contents);
 FUNC_1(VAR_0->param_vars);
 FUNC_1(VAR_0->func_deps);
 FUNC_1(VAR_0->struct_deps);
 FUNC_1(VAR_0->param_deps);
 FUNC_1(VAR_0->sampler_deps);
}
