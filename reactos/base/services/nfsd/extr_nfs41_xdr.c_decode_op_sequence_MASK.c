
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_5__ {scalar_t__ sr_status; int sr_resok4; } ;
typedef TYPE_2__ nfs41_sequence_res ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_4,
    nfs_resop4 *VAR_5)
{
    nfs41_sequence_res *VAR_6 = (nfs41_sequence_res*)VAR_5->res;

    if (FUNC_0(VAR_5->op, VAR_2))
        return VAR_0;

    if (!FUNC_2(VAR_4, &VAR_6->sr_status))
        return VAR_0;

    if (VAR_6->sr_status == VAR_1)
        return FUNC_1(VAR_4, &VAR_6->sr_resok4);

    return VAR_3;
}
