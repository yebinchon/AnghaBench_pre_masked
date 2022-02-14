
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nseconds; int seconds; } ;
typedef TYPE_1__ nfstime4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_1,
    nfstime4 *VAR_2)
{
    if (!FUNC_0(VAR_1, &VAR_2->seconds))
        return VAR_0;

    return FUNC_1(VAR_1, &VAR_2->nseconds);
}
