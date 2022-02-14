
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int op; scalar_t__ res; } ;
typedef TYPE_2__ nfs_resop4 ;
struct TYPE_7__ {scalar_t__ status; TYPE_1__* verf; } ;
typedef TYPE_3__ nfs41_commit_res ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_5__ {scalar_t__ verf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_5,
    nfs_resop4 *VAR_6)
{
    nfs41_commit_res *VAR_7 = (nfs41_commit_res*)VAR_6->res;

    if (FUNC_0(VAR_6->op, VAR_3))
        return VAR_0;

    if (!FUNC_2(VAR_5, &VAR_7->status))
        return VAR_0;

    if (VAR_7->status == VAR_1)
        return FUNC_1(VAR_5, (char *)VAR_7->verf->verf, VAR_2);

    return VAR_4;
}
