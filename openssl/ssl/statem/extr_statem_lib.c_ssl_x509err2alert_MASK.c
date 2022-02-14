
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x509err; int alert; } ;
typedef TYPE_1__ X509ERR2ALERT ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(int VAR_2)
{
    const X509ERR2ALERT *VAR_3;

    for (VAR_3 = VAR_1; VAR_3->x509err != VAR_0; ++VAR_3)
        if (VAR_3->x509err == VAR_2)
            break;
    return VAR_3->alert;
}
