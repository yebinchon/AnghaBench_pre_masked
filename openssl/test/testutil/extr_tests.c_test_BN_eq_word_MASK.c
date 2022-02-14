
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const*,int,char*,char const*,char const*,char*,int const*,int *) ;

int FUNC_5(const char *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3,
                    const BIGNUM *VAR_4, BN_ULONG VAR_5)
{
    BIGNUM *VAR_6;

    if (VAR_4 != ((void*)0) && FUNC_1(VAR_4, VAR_5))
        return 1;
    VAR_6 = FUNC_2();
    FUNC_3(VAR_6, VAR_5);
    FUNC_4(((void*)0), VAR_0, VAR_1, "BIGNUM", VAR_2, VAR_3, "==", VAR_4, VAR_6);
    FUNC_0(VAR_6);
    return 0;
}
