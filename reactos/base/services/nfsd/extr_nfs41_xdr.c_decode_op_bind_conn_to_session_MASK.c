
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_5__ {scalar_t__ status; int dir; } ;
typedef TYPE_2__ nfs41_bind_conn_to_session_res ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_5,
    nfs_resop4 *VAR_6)
{
    unsigned char VAR_7[VAR_2];
    nfs41_bind_conn_to_session_res *VAR_8 =
        (nfs41_bind_conn_to_session_res*)VAR_6->res;
    bool_t VAR_9;

    if (FUNC_0(VAR_6->op, VAR_3))
        return VAR_0;

    if (!FUNC_2(VAR_5, (enum_t *)&VAR_8->status))
        return VAR_0;

    if (VAR_8->status == VAR_1) {
        if (!FUNC_3(VAR_5, (char *)&VAR_7, VAR_2))
            return VAR_0;

        if (!FUNC_2(VAR_5, (enum_t *)&VAR_8->dir))
            return VAR_0;

        return FUNC_1(VAR_5, &VAR_9);
    }
    return VAR_4;
}
