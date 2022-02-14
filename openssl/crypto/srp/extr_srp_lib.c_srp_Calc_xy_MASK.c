
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int digest ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,int,int *) ;
 scalar_t__ FUNC_1 (int const*,unsigned char*,int) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*,int const*) ;
 int FUNC_4 (unsigned char*,int,unsigned char*,int *,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (int) ;
 int VAR_0 ;

__attribute__((used)) static BIGNUM *FUNC_8(const BIGNUM *VAR_1, const BIGNUM *VAR_2, const BIGNUM *VAR_3)
{
    unsigned char VAR_4[VAR_0];
    unsigned char *VAR_5 = ((void*)0);
    int VAR_6 = FUNC_2(VAR_3);
    BIGNUM *VAR_7 = ((void*)0);

    if (VAR_1 != VAR_3 && FUNC_3(VAR_1, VAR_3) >= 0)
        return ((void*)0);
    if (VAR_2 != VAR_3 && FUNC_3(VAR_2, VAR_3) >= 0)
        return ((void*)0);
    if ((VAR_5 = FUNC_7(VAR_6 * 2)) == ((void*)0))
        goto err;
    if (FUNC_1(VAR_1, VAR_5, VAR_6) < 0
        || FUNC_1(VAR_2, VAR_5 + VAR_6, VAR_6) < 0
        || !FUNC_4(VAR_5, VAR_6 * 2, VAR_4, ((void*)0), FUNC_5(), ((void*)0)))
        goto err;
    VAR_7 = FUNC_0(VAR_4, sizeof(VAR_4), ((void*)0));
 err:
    FUNC_6(VAR_5);
    return VAR_7;
}
