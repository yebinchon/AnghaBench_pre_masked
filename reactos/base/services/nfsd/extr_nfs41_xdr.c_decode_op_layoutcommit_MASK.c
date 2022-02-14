
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; int new_size; scalar_t__ has_new_size; } ;
typedef TYPE_1__ pnfs_layoutcommit_res ;
struct TYPE_5__ {int op; scalar_t__ res; } ;
typedef TYPE_2__ nfs_resop4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_4,
    nfs_resop4 *VAR_5)
{
    pnfs_layoutcommit_res *VAR_6 = (pnfs_layoutcommit_res*)VAR_5->res;

    if (FUNC_0(VAR_5->op, VAR_2))
        return VAR_0;

    if (!FUNC_3(VAR_4, &VAR_6->status))
        return VAR_0;

    if (VAR_6->status == VAR_1) {
        if (!FUNC_1(VAR_4, &VAR_6->has_new_size))
            return VAR_0;

        if (VAR_6->has_new_size)
            if (!FUNC_2(VAR_4, &VAR_6->new_size))
                return VAR_0;
    }
    return VAR_3;
}
