
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_technique {unsigned int pass_count; struct d3dx_pass* passes; } ;
struct d3dx_pass {unsigned int state_count; int * states; } ;
struct d3dx_parameter {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,struct d3dx_parameter*) ;

__attribute__((used)) static BOOL FUNC_1(struct d3dx_parameter *VAR_3, struct d3dx_technique *VAR_4)
{
    unsigned int VAR_5, VAR_6;
    struct d3dx_pass *VAR_7;

    if (!VAR_4 || !VAR_3)
        return VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_4->pass_count; ++VAR_5)
    {
        VAR_7 = &VAR_4->passes[VAR_5];
        for (VAR_6 = 0; VAR_6 < VAR_7->state_count; ++VAR_6)
        {
            if (FUNC_0(&VAR_7->states[VAR_6], VAR_2, VAR_3))
                return VAR_1;
        }
    }
    return VAR_0;
}
