
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_SIG ;
struct TYPE_5__ {int * shkeybag; } ;
struct TYPE_6__ {TYPE_1__ value; int type; } ;
typedef TYPE_2__ PKCS12_SAFEBAG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

PKCS12_SAFEBAG *FUNC_3(X509_SIG *VAR_3)
{
    PKCS12_SAFEBAG *VAR_4 = FUNC_1();


    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_2, VAR_0);
        return ((void*)0);
    }
    VAR_4->type = FUNC_0(VAR_1);
    VAR_4->value.shkeybag = VAR_3;
    return VAR_4;
}
