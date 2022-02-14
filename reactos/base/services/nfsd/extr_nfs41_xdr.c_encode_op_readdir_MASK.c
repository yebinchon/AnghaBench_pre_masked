
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int op; scalar_t__ arg; } ;
typedef TYPE_2__ nfs_argop4 ;
struct TYPE_5__ {scalar_t__ verf; int cookie; } ;
struct TYPE_7__ {int attr_request; int maxcount; int dircount; TYPE_1__ cookie; } ;
typedef TYPE_3__ nfs41_readdir_args ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    nfs41_readdir_args *VAR_5 = (nfs41_readdir_args*)VAR_4->arg;

    if (FUNC_0(VAR_4->op, VAR_2))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_5->cookie.cookie))
        return VAR_0;

    if (!FUNC_2(VAR_3, (char *)VAR_5->cookie.verf, VAR_1))
        return VAR_0;

    if (!FUNC_4(VAR_3, &VAR_5->dircount))
        return VAR_0;

    if (!FUNC_4(VAR_3, &VAR_5->maxcount))
        return VAR_0;

    return FUNC_1(VAR_3, VAR_5->attr_request);
}
