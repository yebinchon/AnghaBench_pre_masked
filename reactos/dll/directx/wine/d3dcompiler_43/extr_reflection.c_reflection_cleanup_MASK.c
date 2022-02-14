
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dcompiler_shader_reflection {unsigned int constant_buffer_count; int * creator; int * resource_string; int * bound_resources; int * constant_buffers; int types; int * pcsg; int * osgn; int * isgn; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (char*,struct d3dcompiler_shader_reflection*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct d3dcompiler_shader_reflection *VAR_1)
{
    FUNC_2("Cleanup %p\n", VAR_1);

    if (VAR_1->isgn)
    {
        FUNC_4(VAR_1->isgn);
        FUNC_1(FUNC_0(), 0, VAR_1->isgn);
    }

    if (VAR_1->osgn)
    {
        FUNC_4(VAR_1->osgn);
        FUNC_1(FUNC_0(), 0, VAR_1->osgn);
    }

    if (VAR_1->pcsg)
    {
        FUNC_4(VAR_1->pcsg);
        FUNC_1(FUNC_0(), 0, VAR_1->pcsg);
    }

    if (VAR_1->constant_buffers)
    {
        unsigned int VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_1->constant_buffer_count; ++VAR_2)
        {
            FUNC_3(&VAR_1->constant_buffers[VAR_2]);
        }
    }

    FUNC_5(&VAR_1->types, VAR_0, ((void*)0));
    FUNC_1(FUNC_0(), 0, VAR_1->constant_buffers);
    FUNC_1(FUNC_0(), 0, VAR_1->bound_resources);
    FUNC_1(FUNC_0(), 0, VAR_1->resource_string);
    FUNC_1(FUNC_0(), 0, VAR_1->creator);
}
