
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_6__ {int notification; TYPE_3__* device; } ;
typedef TYPE_2__ pnfs_getdeviceinfo_res_ok ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_1__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_2,
    pnfs_getdeviceinfo_res_ok *VAR_3)
{
    u_int32_t VAR_4;

    if (!FUNC_1(VAR_2, (enum_t *)&VAR_3->device->device.type))
        return VAR_0;

    if (VAR_3->device->device.type != VAR_1)
        return VAR_0;

    if (!FUNC_3(VAR_2, &VAR_4))
        return VAR_0;

    if (!FUNC_2(VAR_2, VAR_3->device))
        return VAR_0;

    return FUNC_0(VAR_2, &VAR_3->notification);
}
