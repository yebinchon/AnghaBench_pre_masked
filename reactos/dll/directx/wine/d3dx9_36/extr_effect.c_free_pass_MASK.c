
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_pass {unsigned int annotation_count; unsigned int state_count; int * name; int * states; int * annotations; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,struct d3dx_pass*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct d3dx_pass *VAR_1)
{
    unsigned int VAR_2;

    FUNC_2("Free pass %p\n", VAR_1);

    if (!VAR_1)
        return;

    if (VAR_1->annotations)
    {
        for (VAR_2 = 0; VAR_2 < VAR_1->annotation_count; ++VAR_2)
            FUNC_3(&VAR_1->annotations[VAR_2], VAR_0, VAR_0);
        FUNC_1(FUNC_0(), 0, VAR_1->annotations);
        VAR_1->annotations = ((void*)0);
    }

    if (VAR_1->states)
    {
        for (VAR_2 = 0; VAR_2 < VAR_1->state_count; ++VAR_2)
            FUNC_4(&VAR_1->states[VAR_2]);
        FUNC_1(FUNC_0(), 0, VAR_1->states);
        VAR_1->states = ((void*)0);
    }

    FUNC_1(FUNC_0(), 0, VAR_1->name);
    VAR_1->name = ((void*)0);
}
