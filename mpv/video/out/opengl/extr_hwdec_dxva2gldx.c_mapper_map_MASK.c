
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ra_hwdec_mapper {TYPE_1__* src; int ra; struct priv* priv; } ;
struct priv {int rtarget_h; int device_h; int rtarget; int device; } ;
struct TYPE_9__ {int (* DXLockObjectsNV ) (int ,int,int *) ;int (* DXUnlockObjectsNV ) (int ,int,int *) ;} ;
struct TYPE_8__ {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {int h; int w; scalar_t__* planes; } ;
typedef TYPE_2__ RECT ;
typedef int IDirect3DSurface9 ;
typedef int HRESULT ;
typedef TYPE_3__ GL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_2__*,int ,TYPE_2__*,int ) ;
 int FUNC_2 (struct ra_hwdec_mapper*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int,int *) ;

__attribute__((used)) static int FUNC_8(struct ra_hwdec_mapper *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    GL *VAR_3 = FUNC_5(VAR_1->ra);
    HRESULT VAR_4;

    if (!VAR_3->DXUnlockObjectsNV(VAR_2->device_h, 1, &VAR_2->rtarget_h)) {
        FUNC_2(VAR_1, "Failed unlocking texture for access by OpenGL: %s\n",
               FUNC_4());
        return -1;
    }

    IDirect3DSurface9* VAR_5 = (IDirect3DSurface9 *)VAR_1->src->planes[3];
    RECT VAR_6 = {0, 0, VAR_1->src->w, VAR_1->src->h};
    VAR_4 = FUNC_1(VAR_2->device,
                                        VAR_5, &VAR_6,
                                        VAR_2->rtarget, &VAR_6,
                                        VAR_0);
    if (FUNC_0(VAR_4)) {
        FUNC_2(VAR_1, "Direct3D RGB conversion failed: %s", FUNC_3(VAR_4));
        return -1;
    }

    if (!VAR_3->DXLockObjectsNV(VAR_2->device_h, 1, &VAR_2->rtarget_h)) {
        FUNC_2(VAR_1, "Failed locking texture for access by OpenGL: %s\n",
               FUNC_4());
        return -1;
    }

    return 0;
}
