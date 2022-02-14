
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opentype; int how; } ;
typedef TYPE_1__ openflag4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    openflag4 *VAR_3)
{
    bool_t VAR_4 = VAR_1;

    if (!FUNC_1(VAR_2, &VAR_3->opentype))
        return VAR_0;

    switch (VAR_3->opentype)
    {
    case 128:
        VAR_4 = FUNC_0(VAR_2, &VAR_3->how);
        break;
    default:
        break;
    }
    return VAR_4;
}
