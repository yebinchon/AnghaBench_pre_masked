
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;

int FUNC_6(SSL *VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    BIO *VAR_6 = ((void*)0);

    VAR_6 = FUNC_0(FUNC_1());

    if (VAR_6 == ((void*)0)) {
        FUNC_4(VAR_2, VAR_1);
        goto err;
    }
    FUNC_2(VAR_6, VAR_4, VAR_0);
    FUNC_3(VAR_3, VAR_6, VAR_6);







    FUNC_5(VAR_4);

    VAR_5 = 1;
 err:
    return VAR_5;
}
