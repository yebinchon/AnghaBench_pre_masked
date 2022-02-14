
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; scalar_t__ arg; } ;
typedef TYPE_1__ nfs_argop4 ;
struct TYPE_5__ {int access; } ;
typedef TYPE_2__ nfs41_access_args ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfs_argop4 *VAR_3)
{
    nfs41_access_args *VAR_4 = (nfs41_access_args*)VAR_3->arg;

    if (FUNC_0(VAR_3->op, VAR_1))
        return VAR_0;

    return FUNC_1(VAR_2, &VAR_4->access);
}
