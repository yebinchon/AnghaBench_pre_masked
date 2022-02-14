
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int op; scalar_t__ res; } ;
typedef TYPE_1__ nfs_resop4 ;
struct TYPE_8__ {int attr_vals_len; scalar_t__ attr_vals; } ;
struct TYPE_7__ {scalar_t__ status; int info; TYPE_3__ obj_attributes; } ;
typedef TYPE_2__ nfs41_getattr_res ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,char*,int ,int ) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_5,
    nfs_resop4 *VAR_6)
{
    nfs41_getattr_res *VAR_7 = (nfs41_getattr_res*)VAR_6->res;

    if (FUNC_1(VAR_6->op, VAR_2))
        return VAR_0;

    if (!FUNC_3(VAR_5, &VAR_7->status))
        return VAR_0;

    if (VAR_7->status == VAR_1)
    {
        XDR VAR_8;

        if (!FUNC_2(VAR_5, &VAR_7->obj_attributes))
            return VAR_0;
        FUNC_4(&VAR_8, (char *)VAR_7->obj_attributes.attr_vals, VAR_7->obj_attributes.attr_vals_len, VAR_4);
        return FUNC_0(&VAR_8, &VAR_7->obj_attributes, VAR_7->info);
    }
    return VAR_3;
}
