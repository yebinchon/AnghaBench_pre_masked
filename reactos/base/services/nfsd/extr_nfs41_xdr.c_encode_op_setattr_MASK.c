
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int op; scalar_t__ arg; } ;
typedef TYPE_2__ nfs_argop4 ;
struct TYPE_10__ {int info; TYPE_1__* stateid; } ;
typedef TYPE_3__ nfs41_setattr_args ;
struct TYPE_11__ {int attr_vals_len; } ;
typedef TYPE_4__ fattr4 ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_8__ {int stateid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    nfs41_setattr_args *VAR_5 = (nfs41_setattr_args*)VAR_4->arg;
    fattr4 VAR_6;

    if (FUNC_1(VAR_4->op, VAR_2))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_5->stateid->stateid))
        return VAR_0;


    VAR_6.attr_vals_len = VAR_1;
    if (!FUNC_0(&VAR_6, VAR_5->info))
        return VAR_0;

    return FUNC_2(VAR_3, &VAR_6);
}
