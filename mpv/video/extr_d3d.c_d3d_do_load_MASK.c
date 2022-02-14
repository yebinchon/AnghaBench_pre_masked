
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (void*,char*) ;
 void* FUNC_1 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
    VAR_1 = FUNC_1(L"d3d11.dll");
    VAR_2 = FUNC_1(L"d3d9.dll");
    VAR_3 = FUNC_1(L"dxva2.dll");

    if (VAR_1) {
        VAR_0 =
            (void *)FUNC_0(VAR_1, "D3D11CreateDevice");
    }
}
