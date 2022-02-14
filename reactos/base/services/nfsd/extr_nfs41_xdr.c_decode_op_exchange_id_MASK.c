
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_5__ {scalar_t__ status; scalar_t__ sequenceid; scalar_t__ flags; int server_scope_len; int server_owner; int state_protect; int clientid; scalar_t__ server_scope; } ;
typedef TYPE_2__ nfs41_exchange_id_res ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char**,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_6(
    XDR *VAR_5,
    nfs_resop4 *VAR_6)
{
    nfs41_exchange_id_res *VAR_7 = (nfs41_exchange_id_res*)VAR_6->res;
    char *VAR_8 = (char *)VAR_7->server_scope;

    if (FUNC_0(VAR_6->op, VAR_3))
        return VAR_0;

    if (!FUNC_5(VAR_5, &VAR_7->status))
        return VAR_0;

    if (VAR_7->status != VAR_1)
        return VAR_4;

    if (!FUNC_4(VAR_5, &VAR_7->clientid))
        return VAR_0;

    if (!FUNC_5(VAR_5, &VAR_7->sequenceid))
        return VAR_0;

    if (!FUNC_5(VAR_5, &VAR_7->flags))
        return VAR_0;

    if (!FUNC_3(VAR_5, &VAR_7->state_protect))
        return VAR_0;

    if (!FUNC_2(VAR_5, &VAR_7->server_owner))
        return VAR_0;

    return FUNC_1(VAR_5, &VAR_8,
        &VAR_7->server_scope_len, VAR_2);
}
