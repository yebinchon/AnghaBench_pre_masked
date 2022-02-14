
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vertex {int dummy; } ;
typedef int IDirect3DVertexBuffer9 ;
typedef int IDirect3DDevice9 ;
typedef scalar_t__ HRESULT ;
typedef int D3DXMATRIX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,float,float,float,float) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ,int ,float,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int ,int) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(IDirect3DDevice9 *VAR_4, IDirect3DVertexBuffer9 *VAR_5)
{
    HRESULT VAR_6;
    D3DXMATRIX VAR_7;

    FUNC_1(&VAR_7, 2.0f, 2.0f, 0.0f, 1.0f);
    FUNC_7(VAR_4, VAR_2, &VAR_7);

    VAR_6 = FUNC_3(VAR_4, 0, ((void*)0), VAR_0, FUNC_0(0, 0, 0), 1.0f, 0);
    FUNC_8(VAR_6 == VAR_3, "IDirect3DDevice9_Clear returned: %08x\n", VAR_6);

    VAR_6 = FUNC_2(VAR_4);
    FUNC_8(VAR_6 == VAR_3, "IDirect3DDevice9_BeginScene returned: %08x\n", VAR_6);

    VAR_6 = FUNC_6(VAR_4, 0, VAR_5, 0, sizeof(struct vertex));
    FUNC_8(VAR_6 == VAR_3, "IDirect3DDevice9_SetStreamSource returned: %08x\n", VAR_6);
    VAR_6 = FUNC_4(VAR_4, VAR_1, 0, 2);
    FUNC_8(VAR_6 == VAR_3, "IDirect3DDevice9_DrawPrimitive returned: %08x\n", VAR_6);

    VAR_6 = FUNC_5(VAR_4);
    FUNC_8(VAR_6 == VAR_3, "IDirect3DDevice9_EndScene returned: %08x\n", VAR_6);
}
