
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ssl; } ;
typedef TYPE_1__ BIO_SSL ;
typedef int BIO ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(BIO *VAR_1)
{
    BIO_SSL *VAR_2;

    for (; VAR_1 != ((void*)0); VAR_1 = FUNC_2(VAR_1)) {
        if (FUNC_1(VAR_1) != VAR_0)
            continue;
        VAR_2 = FUNC_0(VAR_1);
        if (VAR_2 != ((void*)0) && VAR_2->ssl != ((void*)0))
            FUNC_3(VAR_2->ssl);
    }
}
