
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ssl; } ;
typedef TYPE_1__ BIO_SSL ;
typedef int BIO ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(BIO *VAR_0)
{
    BIO_SSL *VAR_1;

    if (VAR_0 == ((void*)0))
        return 0;
    VAR_1 = FUNC_1(VAR_0);
    if (VAR_1->ssl != ((void*)0))
        FUNC_7(VAR_1->ssl);
    if (FUNC_3(VAR_0)) {
        if (FUNC_2(VAR_0))
            FUNC_6(VAR_1->ssl);

        FUNC_0(VAR_0, ~0);
        FUNC_4(VAR_0, 0);
    }
    FUNC_5(VAR_1);
    return 1;
}
