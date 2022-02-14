
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int op; scalar_t__ arg; } ;
typedef TYPE_2__ nfs_argop4 ;
struct TYPE_7__ {scalar_t__ want; TYPE_1__* claim; } ;
typedef TYPE_3__ nfs41_want_delegation_args ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_5__ {scalar_t__ claim; scalar_t__ prev_delegate_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    nfs41_want_delegation_args *VAR_5 = (nfs41_want_delegation_args*)VAR_4->arg;

    if (FUNC_0(VAR_4->op, VAR_2))
        return VAR_1;

    if (!FUNC_1(VAR_3, &VAR_5->want))
        return VAR_1;

    if (!FUNC_1(VAR_3, &VAR_5->claim->claim))
        return VAR_1;

    return VAR_5->claim->claim != VAR_0 ||
        FUNC_1(VAR_3, &VAR_5->claim->prev_delegate_type);
}
