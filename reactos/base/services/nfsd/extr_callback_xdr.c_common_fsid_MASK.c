
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minor; int major; } ;
typedef TYPE_1__ nfs41_fsid ;
typedef int bool_t ;
typedef int XDR ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_1(XDR *VAR_0, nfs41_fsid *VAR_1)
{
    return FUNC_0(VAR_0, &VAR_1->major)
        && FUNC_0(VAR_0, &VAR_1->minor);
}
