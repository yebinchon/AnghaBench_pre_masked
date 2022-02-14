
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_5__ {scalar_t__ status; int reply; scalar_t__ cookieverf; } ;
typedef TYPE_2__ nfs41_readdir_res ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_5,
    nfs_resop4 *VAR_6)
{
    nfs41_readdir_res *VAR_7 = (nfs41_readdir_res*)VAR_6->res;

    if (FUNC_1(VAR_6->op, VAR_3))
        return VAR_0;

    if (!FUNC_3(VAR_5, &VAR_7->status))
        return VAR_0;

    if (VAR_7->status == VAR_1) {
        if (!FUNC_2(VAR_5, (char *)VAR_7->cookieverf, VAR_2))
            return VAR_0;
        return FUNC_0(VAR_5, &VAR_7->reply);
    }
    return VAR_4;
}
