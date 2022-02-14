
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_GROUP ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*,int *,int *,int *,int *) ;

__attribute__((used)) static size_t FUNC_4(const EC_GROUP *VAR_0)
{

    BIGNUM *VAR_1 = FUNC_1();
    BIGNUM *VAR_2 = FUNC_1();
    BIGNUM *VAR_3 = FUNC_1();
    size_t VAR_4 = 0;

    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
       goto done;

    if (!FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0)))
        goto done;
    VAR_4 = (FUNC_2(VAR_1) + 7) / 8;

 done:
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    return VAR_4;
}
