
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ verf; int committed; } ;
typedef TYPE_1__ nfs41_write_verf ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfs41_write_verf *VAR_3)
{
    if (!FUNC_0(VAR_2, (enum_t *)&VAR_3->committed))
        return VAR_0;

    return FUNC_1(VAR_2, (char *)VAR_3->verf, VAR_1);
}
