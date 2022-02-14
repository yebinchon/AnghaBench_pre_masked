
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_technique {unsigned int annotation_count; unsigned int pass_count; int * name; int * passes; int * annotations; int * saved_state; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct d3dx_technique*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct d3dx_technique *VAR_1)
{
    unsigned int VAR_2;

    FUNC_3("Free technique %p\n", VAR_1);

    if (!VAR_1)
        return;

    if (VAR_1->saved_state)
    {
        FUNC_2(VAR_1->saved_state);
        VAR_1->saved_state = ((void*)0);
    }

    if (VAR_1->annotations)
    {
        for (VAR_2 = 0; VAR_2 < VAR_1->annotation_count; ++VAR_2)
            FUNC_4(&VAR_1->annotations[VAR_2], VAR_0, VAR_0);
        FUNC_1(FUNC_0(), 0, VAR_1->annotations);
        VAR_1->annotations = ((void*)0);
    }

    if (VAR_1->passes)
    {
        for (VAR_2 = 0; VAR_2 < VAR_1->pass_count; ++VAR_2)
            FUNC_5(&VAR_1->passes[VAR_2]);
        FUNC_1(FUNC_0(), 0, VAR_1->passes);
        VAR_1->passes = ((void*)0);
    }

    FUNC_1(FUNC_0(), 0, VAR_1->name);
    VAR_1->name = ((void*)0);
}
