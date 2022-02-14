
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {TYPE_1__* key; TYPE_1__* pkeys; } ;
struct TYPE_4__ {int * x509; scalar_t__ privatekey; } ;
typedef TYPE_1__ CERT_PKEY ;
typedef TYPE_2__ CERT ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(CERT *VAR_1, X509 *VAR_2)
{
    int VAR_3;
    if (VAR_2 == ((void*)0))
        return 0;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        CERT_PKEY *VAR_4 = VAR_1->pkeys + VAR_3;
        if (VAR_4->x509 == VAR_2 && VAR_4->privatekey) {
            VAR_1->key = VAR_4;
            return 1;
        }
    }

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        CERT_PKEY *VAR_5 = VAR_1->pkeys + VAR_3;
        if (VAR_5->privatekey && VAR_5->x509 && !FUNC_0(VAR_5->x509, VAR_2)) {
            VAR_1->key = VAR_5;
            return 1;
        }
    }
    return 0;
}
