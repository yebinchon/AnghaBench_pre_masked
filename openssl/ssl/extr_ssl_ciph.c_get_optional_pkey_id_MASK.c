
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_ASN1_METHOD ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int **,char const*,int) ;
 scalar_t__ FUNC_2 (int*,int *,int *,int *,int *,int const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0)
{
    const EVP_PKEY_ASN1_METHOD *VAR_1;
    ENGINE *VAR_2 = ((void*)0);
    int VAR_3 = 0;
    VAR_1 = FUNC_1(&VAR_2, VAR_0, -1);
    if (VAR_1) {
        if (FUNC_2(&VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                    VAR_1) <= 0)
            VAR_3 = 0;
    }
    FUNC_0(VAR_2);
    return VAR_3;
}
