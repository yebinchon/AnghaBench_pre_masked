
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_5__ {int status; } ;
typedef TYPE_2__ nfs41_free_stateid_res ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfs_resop4 *VAR_3)
{
    nfs41_free_stateid_res *VAR_4 = (nfs41_free_stateid_res*)VAR_3->res;

    if (FUNC_0(VAR_3->op, VAR_1))
        return VAR_0;

    return FUNC_1(VAR_2, &VAR_4->status);
}
