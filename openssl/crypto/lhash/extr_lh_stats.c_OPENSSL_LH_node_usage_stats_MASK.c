
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPENSSL_LHASH ;
typedef int FILE ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int const*,int *) ;

void FUNC_5(const OPENSSL_LHASH *VAR_1, FILE *VAR_2)
{
    BIO *VAR_3;

    VAR_3 = FUNC_1(FUNC_2());
    if (VAR_3 == ((void*)0))
        return;
    FUNC_3(VAR_3, VAR_2, VAR_0);
    FUNC_4(VAR_1, VAR_3);
    FUNC_0(VAR_3);
}
