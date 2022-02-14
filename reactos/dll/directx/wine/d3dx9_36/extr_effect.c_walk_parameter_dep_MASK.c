
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ (* walk_parameter_dep_func ) (void*,struct d3dx_parameter*) ;
struct d3dx_sampler {unsigned int state_count; int * states; } ;
struct d3dx_parameter {scalar_t__ class; unsigned int element_count; unsigned int member_count; TYPE_2__* members; struct d3dx_sampler* data; int type; int param_eval; TYPE_1__* top_level_param; } ;
struct TYPE_4__ {int param_eval; struct d3dx_sampler* data; } ;
struct TYPE_3__ {struct d3dx_parameter param; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__ (*) (void*,struct d3dx_parameter*),void*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__ (*) (void*,struct d3dx_parameter*),void*) ;

__attribute__((used)) static BOOL FUNC_4(struct d3dx_parameter *VAR_3, walk_parameter_dep_func VAR_4,
        void *VAR_5)
{
    unsigned int VAR_6;
    unsigned int VAR_7;

    VAR_3 = &VAR_3->top_level_param->param;
    if (VAR_4(VAR_5, VAR_3))
        return VAR_2;

    if (FUNC_2(VAR_3->param_eval, VAR_4, VAR_5))
        return VAR_2;

    if (VAR_3->class == VAR_0 && FUNC_0(VAR_3->type))
    {
        struct d3dx_sampler *VAR_8;
        unsigned int VAR_9;
        unsigned int VAR_10 = FUNC_1(VAR_3->element_count, 1);

        for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
        {
            VAR_8 = VAR_3->element_count ? VAR_3->members[VAR_9].data : VAR_3->data;
            for (VAR_6 = 0; VAR_6 < VAR_8->state_count; ++VAR_6)
            {
                if (FUNC_3(&VAR_8->states[VAR_6], VAR_4, VAR_5))
                    return VAR_2;
            }
        }
        return VAR_1;
    }

    VAR_7 = VAR_3->element_count ? VAR_3->element_count : VAR_3->member_count;
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
        if (FUNC_2(VAR_3->members[VAR_6].param_eval, VAR_4, VAR_5))
            return VAR_2;
    }

    return VAR_1;
}
