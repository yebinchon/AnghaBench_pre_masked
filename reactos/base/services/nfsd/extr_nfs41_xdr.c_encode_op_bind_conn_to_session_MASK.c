
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int op; scalar_t__ arg; } ;
typedef TYPE_1__ nfs_argop4 ;
struct TYPE_5__ {int dir; scalar_t__ sessionid; } ;
typedef TYPE_2__ nfs41_bind_conn_to_session_args ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    uint32_t VAR_5 = 0;

    nfs41_bind_conn_to_session_args *VAR_6 =
        (nfs41_bind_conn_to_session_args*)VAR_4->arg;

    if (FUNC_0(VAR_4->op, VAR_2))
        return VAR_0;

    if (!FUNC_2(VAR_3, (char *)VAR_6->sessionid, VAR_1))
        return VAR_0;

    if (!FUNC_1(VAR_3, (enum_t *)&VAR_6->dir))
        return VAR_0;

    return FUNC_3(VAR_3, &VAR_5);
}
