
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ arg; } ;
typedef TYPE_1__ nfs_argop4 ;
struct TYPE_5__ {int name; } ;
typedef TYPE_2__ nfs41_secinfo_args ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    nfs41_secinfo_args *VAR_5 = (nfs41_secinfo_args *)VAR_4->arg;

    if (FUNC_1(VAR_4->op, VAR_1))
        return VAR_0;

    if (!FUNC_0(VAR_3, VAR_5->name))
        return VAR_0;

    return VAR_2;
}
