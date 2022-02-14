
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int const*,int ) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char const*,int,char*,char const*,char const*,char*,int *,int *) ;

int FUNC_7(const char *VAR_0, int VAR_1, const char *VAR_2,
                        const char *VAR_3, const BIGNUM *VAR_4, BN_ULONG VAR_5)
{
    BIGNUM *VAR_6, *VAR_7;

    if (VAR_4 != ((void*)0) && FUNC_0(VAR_4, VAR_5))
        return 1;
    VAR_6 = FUNC_3();
    VAR_7 = FUNC_1(VAR_4);
    FUNC_4(VAR_7, 0);
    FUNC_5(VAR_6, VAR_5);
    FUNC_6(((void*)0), VAR_0, VAR_1, "BIGNUM", VAR_2, VAR_3, "abs==",
                             VAR_7, VAR_6);
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);
    return 0;
}
