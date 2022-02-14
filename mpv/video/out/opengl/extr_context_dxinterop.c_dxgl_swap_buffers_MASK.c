
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct TYPE_2__ {int (* DXLockObjectsNV ) (int ,int,int *) ;int (* DXUnlockObjectsNV ) (int ,int,int *) ;} ;
struct priv {int lost_device; int rtarget_h; int device_h; int device; int backbuffer; int rtarget; TYPE_1__ gl; } ;
typedef int HRESULT ;
typedef TYPE_1__ GL ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,int *,int *,int ) ;
 int FUNC_2 (int ,int ,int *,int ,int *,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ra_ctx*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int,int *) ;

__attribute__((used)) static void FUNC_11(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    GL *VAR_3 = &VAR_2->gl;
    HRESULT VAR_4;

    FUNC_8();


    if (VAR_2->lost_device)
        FUNC_5(VAR_1);
    if (VAR_2->lost_device)
        return;

    if (!VAR_3->DXUnlockObjectsNV(VAR_2->device_h, 1, &VAR_2->rtarget_h)) {
        FUNC_3(VAR_1->vo, "Couldn't unlock rendertarget for present: %s\n",
               FUNC_7());
        return;
    }


    VAR_4 = FUNC_2(VAR_2->device, VAR_2->rtarget, ((void*)0),
                                        VAR_2->backbuffer, ((void*)0), VAR_0);
    if (FUNC_0(VAR_4)) {
        FUNC_3(VAR_1->vo, "Couldn't stretchrect for present: %s\n",
               FUNC_6(VAR_4));
        return;
    }

    VAR_4 = FUNC_1(VAR_2->device, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
    switch (VAR_4) {
    case 128:
    case 129:
        FUNC_4(VAR_1->vo, "Direct3D device lost! Resetting.\n");
        VAR_2->lost_device = 1;
        FUNC_5(VAR_1);
        return;
    default:
        if (FUNC_0(VAR_4))
            FUNC_3(VAR_1->vo, "Failed to present: %s\n", FUNC_6(VAR_4));
    }

    if (!VAR_3->DXLockObjectsNV(VAR_2->device_h, 1, &VAR_2->rtarget_h)) {
        FUNC_3(VAR_1->vo, "Couldn't lock rendertarget after present: %s\n",
               FUNC_7());
    }
}
