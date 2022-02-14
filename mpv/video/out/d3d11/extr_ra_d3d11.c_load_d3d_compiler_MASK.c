
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_d3d11 {scalar_t__ D3DCompile; int d3d_compiler_ver; } ;
struct ra {struct ra_d3d11* priv; } ;
typedef scalar_t__ pD3DCompile ;
typedef int * HMODULE ;


 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (char*,int *,int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct ra *VAR_1)
{
    struct ra_d3d11 *VAR_2 = VAR_1->priv;
    HMODULE VAR_3 = ((void*)0);


    if (FUNC_1()) {
        VAR_3 = FUNC_2(L"d3dcompiler_47.dll", ((void*)0),
                                     VAR_0);
    }

    if (!VAR_3)
        VAR_3 = FUNC_3(L"d3dcompiler_47.dll");

    if (!VAR_3)
        VAR_3 = FUNC_3(L"d3dcompiler_46.dll");

    if (!VAR_3)
        VAR_3 = FUNC_3(L"d3dcompiler_43.dll");

    if (!VAR_3)
        return 0;

    VAR_2->d3d_compiler_ver = FUNC_4(VAR_3);

    VAR_2->D3DCompile = (pD3DCompile)FUNC_0(VAR_3, "D3DCompile");
    if (!VAR_2->D3DCompile)
        return 0;
    return 1;
}
