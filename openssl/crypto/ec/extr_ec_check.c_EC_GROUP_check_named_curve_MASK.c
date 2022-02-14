
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int const*,int *) ;

int FUNC_5(const EC_GROUP *VAR_3, int VAR_4,
                               BN_CTX *VAR_5)
{
    int VAR_6 = VAR_2;

    BN_CTX *VAR_7 = ((void*)0);

    if (VAR_5 == ((void*)0)) {
        VAR_5 = VAR_7 = FUNC_1();
        if (VAR_5 == ((void*)0)) {
            FUNC_3(VAR_0, VAR_1);
            goto err;
        }
    }


    VAR_6 = FUNC_4(VAR_3, VAR_5);
    if (VAR_6 > 0 && VAR_4 && FUNC_2(VAR_6) == ((void*)0))
        VAR_6 = VAR_2;


 err:
    FUNC_0(VAR_5);

    return VAR_6;
}
