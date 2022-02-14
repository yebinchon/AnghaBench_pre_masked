
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIT_STRING_BITNAME ;
typedef int ASN1_BIT_STRING ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *,int,int) ;

int FUNC_2(ASN1_BIT_STRING *VAR_0, const char *VAR_1, int VAR_2,
                            BIT_STRING_BITNAME *VAR_3)
{
    int VAR_4;
    VAR_4 = FUNC_0(VAR_1, VAR_3);
    if (VAR_4 < 0)
        return 0;
    if (VAR_0) {
        if (!FUNC_1(VAR_0, VAR_4, VAR_2))
            return 0;
    }
    return 1;
}
