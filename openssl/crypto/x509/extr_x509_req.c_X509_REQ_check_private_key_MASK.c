
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_REQ ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int * FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(X509_REQ *VAR_8, EVP_PKEY *VAR_9)
{
    EVP_PKEY *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    VAR_10 = FUNC_3(VAR_8);
    switch (FUNC_0(VAR_10, VAR_9)) {
    case 1:
        VAR_11 = 1;
        break;
    case 0:
        FUNC_4(VAR_3,
                VAR_6);
        break;
    case -1:
        FUNC_4(VAR_3, VAR_5);
        break;
    case -2:

        if (FUNC_2(VAR_9) == VAR_2) {
            FUNC_4(VAR_3, VAR_0);
            break;
        }


        if (FUNC_2(VAR_9) == VAR_1) {

            FUNC_4(VAR_3,
                    VAR_4);
            break;
        }

        FUNC_4(VAR_3, VAR_7);
    }

    FUNC_1(VAR_10);
    return VAR_11;
}
