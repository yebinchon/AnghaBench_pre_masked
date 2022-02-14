
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int BIGNUM ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 (int const*,int *) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

int FUNC_6(BIO *VAR_0, const ASN1_INTEGER *VAR_1)
{
    BIGNUM *VAR_2;
    int VAR_3 = 0;
    char *VAR_4;

    VAR_2 = FUNC_0(VAR_1, ((void*)0));
    if (VAR_2 == ((void*)0))
        return -1;
    if ((VAR_4 = FUNC_2(VAR_2))) {
        VAR_3 = FUNC_1(VAR_0, "0x", 2) > 0;
        VAR_3 = VAR_3 && FUNC_1(VAR_0, VAR_4, FUNC_5(VAR_4)) > 0;
        FUNC_4(VAR_4);
    }
    FUNC_3(VAR_2);

    return VAR_3;
}
