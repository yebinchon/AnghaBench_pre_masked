
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int FUNC_0 (unsigned char const*,int,int *) ;
 int FUNC_1 (int **,int const*) ;
 int FUNC_2 (int **,int const*) ;

__attribute__((used)) static int FUNC_3(ASN1_VALUE **VAR_0, const unsigned char *VAR_1, int VAR_2,
                  int VAR_3, char *VAR_4, const ASN1_ITEM *VAR_5)
{
    BIGNUM *VAR_6;

    if (*VAR_0 == ((void*)0) && !FUNC_2(VAR_0, VAR_5))
        return 0;
    VAR_6 = (BIGNUM *)*VAR_0;
    if (!FUNC_0(VAR_1, VAR_2, VAR_6)) {
        FUNC_1(VAR_0, VAR_5);
        return 0;
    }
    return 1;
}
