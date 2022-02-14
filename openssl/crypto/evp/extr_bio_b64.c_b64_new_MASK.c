
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cont; int start; int * base64; } ;
typedef TYPE_1__ BIO_B64_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int * FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_2)
{
    BIO_B64_CTX *VAR_3;

    if ((VAR_3 = FUNC_5(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0);
        return 0;
    }

    VAR_3->cont = 1;
    VAR_3->start = 1;
    VAR_3->base64 = FUNC_2();
    if (VAR_3->base64 == ((void*)0)) {
        FUNC_4(VAR_3);
        return 0;
    }

    FUNC_0(VAR_2, VAR_3);
    FUNC_1(VAR_2, 1);

    return 1;
}
