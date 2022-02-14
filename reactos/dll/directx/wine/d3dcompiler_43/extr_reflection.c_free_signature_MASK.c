
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dcompiler_shader_signature {int string_data; int elements; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,struct d3dcompiler_shader_signature*) ;

__attribute__((used)) static void FUNC_3(struct d3dcompiler_shader_signature *VAR_0)
{
    FUNC_2("Free signature %p\n", VAR_0);

    FUNC_1(FUNC_0(), 0, VAR_0->elements);
    FUNC_1(FUNC_0(), 0, VAR_0->string_data);
}
