
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef scalar_t__ BN_ULONG ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int * FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5(STANZA *VAR_1, int *VAR_2, const char *VAR_3)
{
    BIGNUM *VAR_4;
    BN_ULONG VAR_5;
    int VAR_6 = 0;

    if (!FUNC_2(VAR_4 = FUNC_4(VAR_1, VAR_3))
            || !FUNC_3(VAR_5 = FUNC_1(VAR_4), VAR_0))
        goto err;

    *VAR_2 = (int)VAR_5;
    VAR_6 = 1;
 err:
    FUNC_0(VAR_4);
    return VAR_6;
}
