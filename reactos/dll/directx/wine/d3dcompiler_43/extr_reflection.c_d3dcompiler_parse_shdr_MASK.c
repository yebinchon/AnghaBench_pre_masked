
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dcompiler_shader_reflection {int version; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const**,int *) ;

__attribute__((used)) static HRESULT FUNC_2(struct d3dcompiler_shader_reflection *VAR_1, const char *VAR_2, DWORD VAR_3)
{
    const char *VAR_4 = VAR_2;

    FUNC_1(&VAR_4, &VAR_1->version);
    FUNC_0("Shader version: %u\n", VAR_1->version);



    return VAR_0;
}
