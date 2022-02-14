
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int op; scalar_t__ arg; } ;
typedef TYPE_2__ nfs_argop4 ;
struct TYPE_7__ {int count; int offset; TYPE_1__* stateid; } ;
typedef TYPE_3__ nfs41_read_args ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_5__ {int stateid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_2,
    nfs_argop4 *VAR_3)
{
    nfs41_read_args *VAR_4 = (nfs41_read_args*)VAR_3->arg;

    if (FUNC_0(VAR_3->op, VAR_1))
        return VAR_0;

    if (!FUNC_1(VAR_2, &VAR_4->stateid->stateid))
        return VAR_0;

    if (!FUNC_2(VAR_2, &VAR_4->offset))
        return VAR_0;

    return FUNC_3(VAR_2, &VAR_4->count);
}
