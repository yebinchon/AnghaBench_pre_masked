
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ class; scalar_t__ type; scalar_t__ rows; scalar_t__ columns; scalar_t__ element_count; unsigned int member_count; struct d3dx_parameter* members; int name; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_1(void *VAR_2, struct d3dx_parameter *VAR_3)
{
    struct d3dx_parameter *VAR_4 = (struct d3dx_parameter *)VAR_2;
    BOOL VAR_5;
    unsigned int VAR_6, VAR_7;

    VAR_5 = !FUNC_0(VAR_4->name, VAR_3->name) && VAR_4->class == VAR_3->class
            && VAR_4->type == VAR_3->type && VAR_4->rows == VAR_3->rows
            && VAR_4->columns == VAR_3->columns && VAR_4->element_count == VAR_3->element_count
            && VAR_4->member_count == VAR_3->member_count;

    VAR_7 = VAR_4->element_count ? VAR_4->element_count : VAR_4->member_count;

    if (!VAR_5 || !VAR_7)
        return VAR_5;

    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
        if (!FUNC_1(&VAR_4->members[VAR_6], &VAR_3->members[VAR_6]))
            return VAR_0;
    }
    return VAR_1;
}
