
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {struct priv* priv; } ;
struct TYPE_2__ {int (* DXCloseDeviceNV ) (scalar_t__) ;} ;
struct priv {scalar_t__ d3d9_dll; int d3d9ex; int device; scalar_t__ device_h; TYPE_1__ gl; } ;
typedef TYPE_1__ GL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    GL *VAR_2 = &VAR_1->gl;

    if (VAR_1->device_h)
        VAR_2->DXCloseDeviceNV(VAR_1->device_h);
    FUNC_1(VAR_1->device);
    FUNC_1(VAR_1->d3d9ex);
    if (VAR_1->d3d9_dll)
        FUNC_0(VAR_1->d3d9_dll);
}
