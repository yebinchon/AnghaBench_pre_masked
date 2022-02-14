
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int will_signal_layout_avail; int res_ok; } ;
struct TYPE_6__ {int status; TYPE_1__ u; } ;
typedef TYPE_2__ pnfs_layoutget_res ;
struct TYPE_7__ {int op; scalar_t__ res; } ;
typedef TYPE_3__ nfs_resop4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_3,
    nfs_resop4 *VAR_4)
{
    pnfs_layoutget_res *VAR_5 = (pnfs_layoutget_res*)VAR_4->res;

    if (FUNC_1(VAR_4->op, VAR_1))
        return VAR_0;

    if (!FUNC_3(VAR_3, (uint32_t *)&VAR_5->status))
        return VAR_0;

    switch (VAR_5->status) {
    case 128:
        return FUNC_0(VAR_3, VAR_5->u.res_ok);
    case 129:
        return FUNC_2(VAR_3, &VAR_5->u.will_signal_layout_avail);
    }
    return VAR_2;
}
