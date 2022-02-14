
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pkey_flags; char const* pem_str; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;
typedef int ENGINE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int **,char const*,int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*,int) ;

const EVP_PKEY_ASN1_METHOD *FUNC_7(ENGINE **VAR_1,
                                                   const char *VAR_2, int VAR_3)
{
    int VAR_4;
    const EVP_PKEY_ASN1_METHOD *VAR_5 = ((void*)0);

    if (VAR_3 == -1)
        VAR_3 = FUNC_5(VAR_2);
    if (VAR_1) {

        ENGINE *VAR_6;
        VAR_5 = FUNC_2(&VAR_6, VAR_2, VAR_3);
        if (VAR_5) {



            if (!FUNC_1(VAR_6))
                VAR_5 = ((void*)0);
            FUNC_0(VAR_6);
            *VAR_1 = VAR_6;
            return VAR_5;
        }

        *VAR_1 = ((void*)0);
    }
    for (VAR_4 = FUNC_4(); VAR_4-- > 0; ) {
        VAR_5 = FUNC_3(VAR_4);
        if (VAR_5->pkey_flags & VAR_0)
            continue;
        if ((int)FUNC_5(VAR_5->pem_str) == VAR_3
            && FUNC_6(VAR_5->pem_str, VAR_2, VAR_3) == 0)
            return VAR_5;
    }
    return ((void*)0);
}
