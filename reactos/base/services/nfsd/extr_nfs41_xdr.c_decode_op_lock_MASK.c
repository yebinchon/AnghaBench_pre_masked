
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int op; scalar_t__ res; } ;
typedef TYPE_3__ nfs_resop4 ;
struct TYPE_6__ {int lock_stateid; } ;
struct TYPE_7__ {int denied; TYPE_1__ resok4; } ;
struct TYPE_9__ {int status; TYPE_2__ u; } ;
typedef TYPE_4__ nfs41_lock_res ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_3,
    nfs_resop4 *VAR_4)
{
    nfs41_lock_res *VAR_5 = (nfs41_lock_res*)VAR_4->res;

    if (FUNC_1(VAR_4->op, VAR_1))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_5->status))
        return VAR_0;

    switch (VAR_5->status) {
    case 128:
        return FUNC_2(VAR_3, VAR_5->u.resok4.lock_stateid);
        break;
    case 129:
        return FUNC_0(VAR_3, &VAR_5->u.denied);
        break;
    default:
        break;
    }

    return VAR_2;
}
