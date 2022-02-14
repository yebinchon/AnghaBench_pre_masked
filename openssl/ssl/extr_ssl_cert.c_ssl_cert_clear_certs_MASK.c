
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pkeys; } ;
struct TYPE_4__ {scalar_t__ serverinfo_length; int * serverinfo; int * chain; int * privatekey; int * x509; } ;
typedef TYPE_1__ CERT_PKEY ;
typedef TYPE_2__ CERT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int (*) (int *)) ;

void FUNC_4(CERT *VAR_1)
{
    int VAR_2;
    if (VAR_1 == ((void*)0))
        return;
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        CERT_PKEY *VAR_3 = VAR_1->pkeys + VAR_2;
        FUNC_2(VAR_3->x509);
        VAR_3->x509 = ((void*)0);
        FUNC_0(VAR_3->privatekey);
        VAR_3->privatekey = ((void*)0);
        FUNC_3(VAR_3->chain, FUNC_2);
        VAR_3->chain = ((void*)0);
        FUNC_1(VAR_3->serverinfo);
        VAR_3->serverinfo = ((void*)0);
        VAR_3->serverinfo_length = 0;
    }
}
