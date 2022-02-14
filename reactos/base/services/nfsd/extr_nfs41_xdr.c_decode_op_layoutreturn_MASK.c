
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ status; int stateid; scalar_t__ stateid_present; } ;
typedef TYPE_1__ pnfs_layoutreturn_res ;
struct TYPE_5__ {int op; scalar_t__ res; } ;
typedef TYPE_2__ nfs_resop4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_4,
    nfs_resop4 *VAR_5)
{
    pnfs_layoutreturn_res *VAR_6 = (pnfs_layoutreturn_res*)VAR_5->res;

    if (FUNC_0(VAR_5->op, VAR_2))
        return VAR_0;

    if (!FUNC_3(VAR_4, (uint32_t *)&VAR_6->status))
        return VAR_0;

    if (VAR_6->status == VAR_1) {
        if (!FUNC_1(VAR_4, &VAR_6->stateid_present))
            return VAR_0;

        if (VAR_6->stateid_present)
            return FUNC_2(VAR_4, &VAR_6->stateid);
    }
    return VAR_3;
}
