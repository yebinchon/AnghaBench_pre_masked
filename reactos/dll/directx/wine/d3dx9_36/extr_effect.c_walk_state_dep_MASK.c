
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int walk_parameter_dep_func ;
struct TYPE_2__ {int param_eval; int type; } ;
struct d3dx_state {scalar_t__ type; TYPE_1__ parameter; TYPE_1__* referenced_param; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,void*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static BOOL FUNC_3(struct d3dx_state *VAR_4, walk_parameter_dep_func VAR_5,
        void *VAR_6)
{
    if (VAR_4->type == VAR_1 && FUNC_0(VAR_4->parameter.type))
    {
        if (FUNC_2(&VAR_4->parameter, VAR_5, VAR_6))
            return VAR_3;
    }
    else if (VAR_4->type == VAR_0 || VAR_4->type == VAR_2)
    {
        if (FUNC_2(VAR_4->referenced_param, VAR_5, VAR_6))
            return VAR_3;
    }
    return FUNC_1(VAR_4->parameter.param_eval, VAR_5, VAR_6);
}
