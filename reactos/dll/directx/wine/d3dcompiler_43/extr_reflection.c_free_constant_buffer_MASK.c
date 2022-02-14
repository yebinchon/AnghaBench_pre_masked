
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dcompiler_shader_reflection_constant_buffer {unsigned int variable_count; int * name; int * variables; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct d3dcompiler_shader_reflection_constant_buffer *VAR_0)
{
    if (VAR_0->variables)
    {
        unsigned int VAR_1;

        for (VAR_1 = 0; VAR_1 < VAR_0->variable_count; ++VAR_1)
        {
            FUNC_2(&VAR_0->variables[VAR_1]);
        }
        FUNC_1(FUNC_0(), 0, VAR_0->variables);
    }

    FUNC_1(FUNC_0(), 0, VAR_0->name);
}
