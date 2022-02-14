
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct VERTEX {int dummy; } ;
struct TYPE_3__ {int d3d9_dev; int d3d9_vertex; } ;
typedef TYPE_1__ VMR9DefaultAllocatorPresenterImpl ;
typedef int IDirect3DTexture9 ;
typedef int IDirect3DSurface9 ;
typedef int IDirect3DBaseTexture9 ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_8(VMR9DefaultAllocatorPresenterImpl *VAR_4, IDirect3DSurface9 *VAR_5)
{
    IDirect3DTexture9 *VAR_6 = ((void*)0);
    HRESULT VAR_7;

    VAR_7 = FUNC_3(VAR_4->d3d9_dev, VAR_3);
    if (FUNC_0(VAR_7))
    {
        FUNC_1("SetFVF: %08x\n", VAR_7);
        return VAR_7;
    }

    VAR_7 = FUNC_4(VAR_4->d3d9_dev, 0, VAR_4->d3d9_vertex, 0, sizeof(struct VERTEX));
    if (FUNC_0(VAR_7))
    {
        FUNC_1("SetStreamSource: %08x\n", VAR_7);
        return VAR_7;
    }

    VAR_7 = FUNC_6(VAR_5, &VAR_1, (void **) &VAR_6);
    if (FUNC_0(VAR_7))
    {
        FUNC_1("IDirect3DSurface9_GetContainer failed\n");
        return VAR_7;
    }
    VAR_7 = FUNC_5(VAR_4->d3d9_dev, 0, (IDirect3DBaseTexture9 *)VAR_6);
    FUNC_7(VAR_6);
    if (FUNC_0(VAR_7))
    {
        FUNC_1("SetTexture: %08x\n", VAR_7);
        return VAR_7;
    }

    VAR_7 = FUNC_2(VAR_4->d3d9_dev, VAR_0, 0, 2);
    if (FUNC_0(VAR_7))
    {
        FUNC_1("DrawPrimitive: %08x\n", VAR_7);
        return VAR_7;
    }

    return VAR_2;
}
