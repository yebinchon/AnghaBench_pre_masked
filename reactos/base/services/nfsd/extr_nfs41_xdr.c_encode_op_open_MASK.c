
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ arg; } ;
typedef TYPE_1__ nfs_argop4 ;
struct TYPE_5__ {int claim; int openhow; int owner; int share_deny; int share_access; int seqid; } ;
typedef TYPE_2__ nfs41_op_open_args ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_2,
    nfs_argop4 *VAR_3)
{
    nfs41_op_open_args *VAR_4 = (nfs41_op_open_args*)VAR_3->arg;

    if (FUNC_2(VAR_3->op, VAR_1))
        return VAR_0;

    if (!FUNC_4(VAR_2, &VAR_4->seqid))
        return VAR_0;

    if (!FUNC_4(VAR_2, &VAR_4->share_access))
        return VAR_0;

    if (!FUNC_4(VAR_2, &VAR_4->share_deny))
        return VAR_0;

    if (!FUNC_3(VAR_2, VAR_4->owner))
        return VAR_0;

    if (!FUNC_1(VAR_2, &VAR_4->openhow))
        return VAR_0;

    return FUNC_0(VAR_2, VAR_4->claim);
}
