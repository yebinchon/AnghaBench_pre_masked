
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_LOOKUP ;
struct TYPE_3__ {int cert_store; } ;
typedef TYPE_1__ SSL_CTX ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ) ;

int FUNC_5(SSL_CTX *VAR_0)
{
    X509_LOOKUP *VAR_1;

    VAR_1 = FUNC_4(VAR_0->cert_store, FUNC_3());
    if (VAR_1 == ((void*)0))
        return 0;


    FUNC_1();

    FUNC_2(VAR_1, ((void*)0));

    FUNC_0();

    return 1;
}
