
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* walk_parameter_dep_func ) (void*,struct d3dx_parameter*) ;
struct d3dx_parameter {unsigned int element_count; unsigned int member_count; struct d3dx_parameter* members; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(struct d3dx_parameter *VAR_2, walk_parameter_dep_func VAR_3,
        void *VAR_4)
{
    unsigned int VAR_5;
    unsigned int VAR_6;

    if (VAR_3(VAR_4, VAR_2))
        return VAR_1;

    VAR_6 = VAR_2->element_count ? VAR_2->element_count : VAR_2->member_count;
    for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5)
    {
        if (FUNC_0(&VAR_2->members[VAR_5], VAR_3, VAR_4))
            return VAR_1;
    }
    return VAR_0;
}
