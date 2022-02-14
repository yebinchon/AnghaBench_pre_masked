
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int a; int b; int g; int r; } ;
struct hlsl_probe_info {int y; TYPE_3__ c; int message; int x; int epsilon; } ;
struct TYPE_7__ {int Pitch; TYPE_1__* pBits; } ;
struct TYPE_6__ {int a; int b; int g; int r; } ;
typedef int IDirect3DVertexShader9 ;
typedef int IDirect3DVertexBuffer9 ;
typedef int IDirect3DSurface9 ;
typedef int IDirect3DPixelShader9 ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;
typedef TYPE_1__ D3DXCOLOR ;
typedef TYPE_2__ D3DLOCKED_RECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;
 int FUNC_2 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__,TYPE_1__,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int,char*,unsigned int,...) ;
 int FUNC_8 (int *,int **,int **,int ,unsigned int,unsigned int,int *,int *) ;

__attribute__((used)) static void FUNC_9(IDirect3DDevice9 *VAR_3, IDirect3DVertexShader9 *VAR_4,
        IDirect3DPixelShader9 *VAR_5, IDirect3DVertexBuffer9 *VAR_6,
        const struct hlsl_probe_info *VAR_7, unsigned int VAR_8,
        unsigned int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
    IDirect3DSurface9 *VAR_12;
    IDirect3DSurface9 *VAR_13;

    HRESULT VAR_14;
    D3DLOCKED_RECT VAR_15;
    D3DXCOLOR *VAR_16;
    unsigned int VAR_17;

    FUNC_8(VAR_3, &VAR_12, &VAR_13, VAR_0,
            VAR_9, VAR_10, VAR_4, VAR_5);


    FUNC_6(VAR_3, VAR_6);
    FUNC_0(VAR_3, VAR_12, VAR_13);
    VAR_14 = FUNC_2(VAR_13, &VAR_15, ((void*)0), VAR_1);
    FUNC_7(VAR_14 == VAR_2, "IDirect3DSurface9_LockRect returned: %08x\n", VAR_14);
    VAR_16 = VAR_15.pBits;


    for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++, VAR_7++) {
        int VAR_18 = VAR_7->x + (VAR_7->y * VAR_15.Pitch / sizeof(D3DXCOLOR));
        FUNC_7(FUNC_5(VAR_7->c, VAR_16[VAR_18], VAR_7->epsilon),
                "Line %d: At (%d, %d): %s: Expected (%.04f,%.04f,%.04f, %.04f), got "
                "(%.04f,%.04f,%.04f,%.04f)\n", VAR_11, VAR_7->x, VAR_7->y, VAR_7->message,
                VAR_7->c.r, VAR_7->c.g, VAR_7->c.b, VAR_7->c.a, VAR_16[VAR_18].r,
                VAR_16[VAR_18].g, VAR_16[VAR_18].b, VAR_16[VAR_18].a);
    }

    VAR_14 = FUNC_4(VAR_13);
    FUNC_7(VAR_14 == VAR_2, "IDirect3DSurface9_UnlockRect returned: %08x\n", VAR_14);





    VAR_14 = FUNC_1(VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(VAR_14 == VAR_2, "IDirect3DDevice9_Present returned: %08x\n", VAR_14);

    FUNC_3(VAR_12);
    FUNC_3(VAR_13);
}
