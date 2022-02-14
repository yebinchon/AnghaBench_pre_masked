
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_hwdec_mapper {int * tex; int ra; struct priv* priv; } ;
struct priv {int * rtarget; scalar_t__ texture; scalar_t__ rtarget_h; scalar_t__ device_h; } ;
struct TYPE_3__ {int (* DeleteTextures ) (int,scalar_t__*) ;int (* DXUnregisterObjectNV ) (scalar_t__,scalar_t__) ;int (* DXUnlockObjectsNV ) (scalar_t__,int,scalar_t__*) ;} ;
typedef TYPE_1__ GL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ra_hwdec_mapper*,char*,int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__,int,scalar_t__*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int,scalar_t__*) ;

__attribute__((used)) static void FUNC_8(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    GL *VAR_2 = FUNC_3(VAR_0->ra);

    if (VAR_1->rtarget_h && VAR_1->device_h) {
        if (!VAR_2->DXUnlockObjectsNV(VAR_1->device_h, 1, &VAR_1->rtarget_h)) {
            FUNC_1(VAR_0, "Failed unlocking texture for access by OpenGL: %s\n",
                   FUNC_2());
        }
    }

    if (VAR_1->rtarget_h) {
        if (!VAR_2->DXUnregisterObjectNV(VAR_1->device_h, VAR_1->rtarget_h)) {
            FUNC_1(VAR_0, "Failed to unregister Direct3D surface with OpenGL: %s\n",
                   FUNC_2());
        } else {
            VAR_1->rtarget_h = 0;
        }
    }

    VAR_2->DeleteTextures(1, &VAR_1->texture);
    VAR_1->texture = 0;

    if (VAR_1->rtarget) {
        FUNC_0(VAR_1->rtarget);
        VAR_1->rtarget = ((void*)0);
    }

    FUNC_4(VAR_0->ra, &VAR_0->tex[0]);
}
