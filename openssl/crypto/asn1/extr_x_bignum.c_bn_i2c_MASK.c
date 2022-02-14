
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const ASN1_VALUE **VAR_0, unsigned char *VAR_1, int *VAR_2,
                  const ASN1_ITEM *VAR_3)
{
    BIGNUM *VAR_4;
    int VAR_5;
    if (*VAR_0 == ((void*)0))
        return -1;
    VAR_4 = (BIGNUM *)*VAR_0;

    if (FUNC_1(VAR_4) & 0x7)
        VAR_5 = 0;
    else
        VAR_5 = 1;
    if (VAR_1) {
        if (VAR_5)
            *VAR_1++ = 0;
        FUNC_0(VAR_4, VAR_1);
    }
    return VAR_5 + FUNC_2(VAR_4);
}
