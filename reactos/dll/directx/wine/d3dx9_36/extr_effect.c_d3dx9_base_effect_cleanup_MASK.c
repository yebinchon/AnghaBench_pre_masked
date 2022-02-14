
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx9_base_effect {unsigned int parameter_count; unsigned int technique_count; unsigned int object_count; int * objects; int * techniques; int * parameters; int full_name_tmp; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,struct d3dx9_base_effect*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct d3dx9_base_effect *VAR_0)
{
    unsigned int VAR_1;

    FUNC_2("base %p.\n", VAR_0);

    FUNC_6(VAR_0->full_name_tmp);

    if (VAR_0->parameters)
    {
        for (VAR_1 = 0; VAR_1 < VAR_0->parameter_count; ++VAR_1)
            FUNC_5(&VAR_0->parameters[VAR_1]);
        FUNC_1(FUNC_0(), 0, VAR_0->parameters);
        VAR_0->parameters = ((void*)0);
    }

    if (VAR_0->techniques)
    {
        for (VAR_1 = 0; VAR_1 < VAR_0->technique_count; ++VAR_1)
            FUNC_4(&VAR_0->techniques[VAR_1]);
        FUNC_1(FUNC_0(), 0, VAR_0->techniques);
        VAR_0->techniques = ((void*)0);
    }

    if (VAR_0->objects)
    {
        for (VAR_1 = 0; VAR_1 < VAR_0->object_count; ++VAR_1)
        {
            FUNC_3(&VAR_0->objects[VAR_1]);
        }
        FUNC_1(FUNC_0(), 0, VAR_0->objects);
        VAR_0->objects = ((void*)0);
    }
}
