
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPACKET ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int FUNC_3 (int *,size_t,unsigned char**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,size_t) ;

int FUNC_8(WPACKET *VAR_1, const BIGNUM *VAR_2)
{
    unsigned char *VAR_3;
    size_t VAR_4;

    if (FUNC_1(VAR_2))
        return 0;
    VAR_4 = FUNC_2(VAR_2) / 8 + 1;

    if (!FUNC_6(VAR_1)
            || !FUNC_5(VAR_1, VAR_0)
            || !FUNC_7(VAR_1, VAR_4)
            || !FUNC_3(VAR_1, VAR_4, &VAR_3)
            || !FUNC_4(VAR_1))
        return 0;

    if (VAR_3 != ((void*)0)
            && FUNC_0(VAR_2, VAR_3, (int)VAR_4) != (int)VAR_4)
        return 0;

    return 1;
}
