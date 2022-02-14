
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {unsigned int element_count; unsigned int member_count; struct d3dx_parameter* semantic; struct d3dx_parameter* name; struct d3dx_parameter* members; scalar_t__ param_eval; int type; } ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct d3dx_parameter*) ;
 int FUNC_2 (char*,struct d3dx_parameter*,struct d3dx_parameter*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct d3dx_parameter*,int) ;

__attribute__((used)) static void FUNC_6(struct d3dx_parameter *VAR_1, BOOL VAR_2, BOOL VAR_3)
{
    unsigned int VAR_4;

    FUNC_2("Free parameter %p, name %s, type %s, element %#x, child %#x.\n", VAR_1, VAR_1->name,
            FUNC_4(VAR_1->type), VAR_2, VAR_3);

    if (VAR_1->param_eval)
        FUNC_3(VAR_1->param_eval);

    if (VAR_1->members)
    {
        unsigned int VAR_5 = VAR_1->element_count ? VAR_1->element_count : VAR_1->member_count;

        for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
            FUNC_6(&VAR_1->members[VAR_4], VAR_1->element_count != 0, VAR_0);
        FUNC_1(FUNC_0(), 0, VAR_1->members);
    }

    FUNC_5(VAR_1, VAR_3);


    if (!VAR_2)
    {
        FUNC_1(FUNC_0(), 0, VAR_1->name);
        FUNC_1(FUNC_0(), 0, VAR_1->semantic);
    }
}
