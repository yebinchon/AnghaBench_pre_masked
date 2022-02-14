
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS7 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int) ;

int FUNC_6(PKCS7 *VAR_3, BIO *VAR_4, int VAR_5)
{
    BIO *VAR_6;
    int VAR_7 = 0;

    if ((VAR_6 = FUNC_3(VAR_3, ((void*)0))) == ((void*)0)) {
        FUNC_4(VAR_1, VAR_0);
        return 0;
    }

    FUNC_5(VAR_4, VAR_6, VAR_5);

    (void)FUNC_0(VAR_6);

    if (!FUNC_2(VAR_3, VAR_6)) {
        FUNC_4(VAR_1, VAR_2);
        goto err;
    }

    VAR_7 = 1;

 err:
    FUNC_1(VAR_6);

    return VAR_7;

}
