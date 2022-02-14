
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tracing_map_elt {int* var_set; int * vars; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct tracing_map_elt *VAR_0, unsigned int VAR_1, u64 VAR_2)
{
 FUNC_0(&VAR_0->vars[VAR_1], VAR_2);
 VAR_0->var_set[VAR_1] = 1;
}
