
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_param_eval {int shader_inputs; int pres; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct d3dx_param_eval*) ;
 int FUNC_2 (char*,struct d3dx_param_eval*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct d3dx_param_eval *VAR_0)
{
    FUNC_2("peval %p.\n", VAR_0);

    if (!VAR_0)
        return;

    FUNC_4(&VAR_0->pres);
    FUNC_3(&VAR_0->shader_inputs);
    FUNC_1(FUNC_0(), 0, VAR_0);
}
