
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFN_D3D11_CREATE_DEVICE ;
typedef scalar_t__ PFN_CREATE_DXGI_FACTORY ;
typedef int HMODULE ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_2 = FUNC_1(L"d3d11.dll");
    HMODULE VAR_3 = FUNC_1(L"dxgi.dll");
    if (!VAR_2 || !VAR_3)
        return;

    VAR_1 = (PFN_D3D11_CREATE_DEVICE)
        FUNC_0(VAR_2, "D3D11CreateDevice");
    VAR_0 = (PFN_CREATE_DXGI_FACTORY)
        FUNC_0(VAR_3, "CreateDXGIFactory1");
}
