
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {struct priv* priv; } ;
struct TYPE_2__ {int (* DeleteTextures ) (int,scalar_t__*) ;int (* DXUnregisterObjectNV ) (int ,scalar_t__) ;int (* DXUnlockObjectsNV ) (int ,int,scalar_t__*) ;} ;
struct priv {int swapchain; int backbuffer; int rtarget; scalar_t__ texture; scalar_t__ rtarget_h; int device_h; TYPE_1__ gl; } ;
typedef TYPE_1__ GL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    GL *VAR_2 = &VAR_1->gl;

    if (VAR_1->rtarget_h) {
        VAR_2->DXUnlockObjectsNV(VAR_1->device_h, 1, &VAR_1->rtarget_h);
        VAR_2->DXUnregisterObjectNV(VAR_1->device_h, VAR_1->rtarget_h);
    }
    VAR_1->rtarget_h = 0;
    if (VAR_1->texture)
        VAR_2->DeleteTextures(1, &VAR_1->texture);
    VAR_1->texture = 0;

    FUNC_0(VAR_1->rtarget);
    FUNC_0(VAR_1->backbuffer);
    FUNC_0(VAR_1->swapchain);
}
