
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct d3dx_top_level_parameter {TYPE_2__* shared_data; TYPE_1__ param; } ;
struct TYPE_4__ {unsigned int count; scalar_t__ size; struct d3dx_top_level_parameter** parameters; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct d3dx_top_level_parameter**) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct d3dx_top_level_parameter*,TYPE_2__*,unsigned int) ;
 int FUNC_3 (struct d3dx_top_level_parameter**,struct d3dx_top_level_parameter**,int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void FUNC_5(struct d3dx_top_level_parameter *VAR_2)
{
    unsigned int VAR_3;

    if (!(VAR_2->param.flags & VAR_0) || !VAR_2->shared_data)
        return;
    VAR_3 = --VAR_2->shared_data->count;

    FUNC_2("param %p, param->shared_data %p, new_count %d.\n", VAR_2, VAR_2->shared_data, VAR_3);

    if (VAR_3)
    {
        unsigned int VAR_4;

        for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
        {
            if (VAR_2->shared_data->parameters[VAR_4] == VAR_2)
            {
                FUNC_3(&VAR_2->shared_data->parameters[VAR_4],
                        &VAR_2->shared_data->parameters[VAR_4 + 1],
                        sizeof(VAR_2->shared_data->parameters[VAR_4]) * (VAR_3 - VAR_4));
                break;
            }
        }
        FUNC_4(&VAR_2->param, VAR_1, ((void*)0));
    }
    else
    {
        FUNC_1(FUNC_0(), 0, VAR_2->shared_data->parameters);

        VAR_2->shared_data->size = 0;
        VAR_2->shared_data = ((void*)0);
    }
}
