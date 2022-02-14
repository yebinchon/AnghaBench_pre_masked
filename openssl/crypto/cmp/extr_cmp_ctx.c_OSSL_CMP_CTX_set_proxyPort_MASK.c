
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int proxyPort; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(OSSL_CMP_CTX *VAR_1, int VAR_2)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return 0;
    }
    VAR_1->proxyPort = VAR_2;
    return 1;
}
