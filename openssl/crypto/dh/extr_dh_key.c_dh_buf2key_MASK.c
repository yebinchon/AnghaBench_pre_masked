
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char const*,size_t,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int const**,int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int ,int) ;

int FUNC_7(DH *VAR_4, const unsigned char *VAR_5, size_t VAR_6)
{
    int VAR_7 = VAR_1;
    BIGNUM *VAR_8 = ((void*)0);
    const BIGNUM *VAR_9;
    size_t VAR_10;

    if ((VAR_8 = FUNC_0(VAR_5, VAR_6, ((void*)0))) == ((void*)0))
        goto err;
    FUNC_4(VAR_4, &VAR_9, ((void*)0), ((void*)0));
    if (VAR_9 == ((void*)0) || (VAR_10 = FUNC_3(VAR_9)) == 0) {
        VAR_7 = VAR_3;
        goto err;
    }




    if (FUNC_2(VAR_8) || VAR_10 != VAR_6) {
        VAR_7 = VAR_2;
        goto err;
    }
    if (FUNC_5(VAR_4, VAR_8, ((void*)0)) != 1)
        goto err;
    return 1;
err:
    FUNC_6(VAR_0, VAR_7);
    FUNC_1(VAR_8);
    return 0;
}
