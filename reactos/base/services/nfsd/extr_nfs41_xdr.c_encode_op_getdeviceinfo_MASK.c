
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int notify_types; int maxcount; int layout_type; scalar_t__ deviceid; } ;
typedef TYPE_1__ pnfs_getdeviceinfo_args ;
struct TYPE_5__ {int op; scalar_t__ arg; } ;
typedef TYPE_2__ nfs_argop4 ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    pnfs_getdeviceinfo_args *VAR_5 = (pnfs_getdeviceinfo_args*)VAR_4->arg;

    if (FUNC_0(VAR_4->op, VAR_1))
        return VAR_0;

    if (!FUNC_3(VAR_3, (char *)VAR_5->deviceid, VAR_2))
        return VAR_0;

    if (!FUNC_2(VAR_3, (enum_t *)&VAR_5->layout_type))
        return VAR_0;

    if (!FUNC_4(VAR_3, &VAR_5->maxcount))
        return VAR_0;

    return FUNC_1(VAR_3, &VAR_5->notify_types);
}
