
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct TYPE_4__ {int (* BindFramebuffer ) (int ,int ) ;int (* FramebufferTexture2D ) (int ,int ,int ,int ,int ) ;int (* DXLockObjectsNV ) (int ,int,int *) ;int (* DXRegisterObjectNV ) (int ,int ,int ,int ,int ) ;int (* GenTextures ) (int,int *) ;int (* DXSetResourceShareHandleNV ) (int ,int *) ;} ;
struct priv {int texture; int main_fb; int rtarget_h; int device_h; int rtarget; int device; int backbuffer; int swapchain; TYPE_1__ gl; } ;
struct TYPE_5__ {scalar_t__ Format; scalar_t__ Height; scalar_t__ Width; int member_0; } ;
typedef int IDirect3DSwapChain9 ;
typedef int HRESULT ;
typedef int * HANDLE ;
typedef TYPE_1__ GL ;
typedef TYPE_2__ D3DSURFACE_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int *,int **) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int *,int *,void**) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,unsigned int,...) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int ,int ,int ,int ,int ) ;
 int FUNC_14 (int ,int,int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static int FUNC_18(struct ra_ctx *VAR_8)
{
    struct priv *VAR_9 = VAR_8->priv;
    GL *VAR_10 = &VAR_9->gl;
    HRESULT VAR_11;

    IDirect3DSwapChain9 *VAR_12;
    VAR_11 = FUNC_2(VAR_9->device, 0, &VAR_12);
    if (FUNC_0(VAR_11)) {
        FUNC_6(VAR_8->vo, "Couldn't get swap chain: %s\n", FUNC_9(VAR_11));
        return -1;
    }

    VAR_11 = FUNC_5(VAR_12, &VAR_6,
        (void**)&VAR_9->swapchain);
    if (FUNC_0(VAR_11)) {
        FUNC_8(VAR_12);
        FUNC_6(VAR_8->vo, "Obtained swap chain is not IDirect3DSwapChain9Ex: %s\n",
               FUNC_9(VAR_11));
        return -1;
    }
    FUNC_8(VAR_12);

    VAR_11 = FUNC_4(VAR_9->swapchain, 0,
        VAR_0, &VAR_9->backbuffer);
    if (FUNC_0(VAR_11)) {
        FUNC_6(VAR_8->vo, "Couldn't get backbuffer: %s\n", FUNC_9(VAR_11));
        return -1;
    }


    D3DSURFACE_DESC VAR_13 = { 0 };
    FUNC_3(VAR_9->backbuffer, &VAR_13);

    FUNC_7(VAR_8->vo, "DX_interop backbuffer size: %ux%u\n",
        (unsigned)VAR_13.Width, (unsigned)VAR_13.Height);
    FUNC_7(VAR_8->vo, "DX_interop backbuffer format: %u\n",
        (unsigned)VAR_13.Format);



    HANDLE VAR_14 = ((void*)0);
    VAR_11 = FUNC_1(VAR_9->device, VAR_13.Width,
        VAR_13.Height, VAR_13.Format, VAR_1, 0, VAR_2,
        &VAR_9->rtarget, &VAR_14);
    if (FUNC_0(VAR_11)) {
        FUNC_6(VAR_8->vo, "Couldn't create rendertarget: %s\n", FUNC_9(VAR_11));
        return -1;
    }



    if (VAR_14)
        VAR_10->DXSetResourceShareHandleNV(VAR_9->rtarget, VAR_14);


    VAR_10->GenTextures(1, &VAR_9->texture);


    VAR_9->rtarget_h = VAR_10->DXRegisterObjectNV(VAR_9->device_h, VAR_9->rtarget, VAR_9->texture,
        VAR_5, VAR_7);
    if (!VAR_9->rtarget_h) {
        FUNC_6(VAR_8->vo, "Couldn't share rendertarget with OpenGL: %s\n",
               FUNC_10());
        return -1;
    }



    if (!VAR_10->DXLockObjectsNV(VAR_9->device_h, 1, &VAR_9->rtarget_h)) {
        FUNC_6(VAR_8->vo, "Couldn't lock rendertarget: %s\n",
               FUNC_10());
        return -1;
    }

    VAR_10->BindFramebuffer(VAR_4, VAR_9->main_fb);
    VAR_10->FramebufferTexture2D(VAR_4, VAR_3,
        VAR_5, VAR_9->texture, 0);
    VAR_10->BindFramebuffer(VAR_4, 0);

    return 0;
}
