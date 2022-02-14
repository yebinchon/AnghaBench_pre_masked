
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_ASN1_METHOD ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int*,int *,int *,char const**,int *,int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int ,char const*) ;

__attribute__((used)) static int FUNC_6(void)
{
    int VAR_0;
    int VAR_1 = -1;
    int VAR_2 = 1;
    int VAR_3;
    const EVP_PKEY_ASN1_METHOD *VAR_4;

    for (VAR_0 = 0; VAR_0 < FUNC_2(); VAR_0++) {
        VAR_4 = FUNC_0(VAR_0);
        FUNC_1(&VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_4);
        if (VAR_3 < VAR_1)
            VAR_2 = 0;
        VAR_1 = VAR_3;

    }
    if (!VAR_2) {
        FUNC_4("EVP_PKEY_ASN1_METHOD table out of order");
        for (VAR_0 = 0; VAR_0 < FUNC_2(); VAR_0++) {
            const char *VAR_5;

            VAR_4 = FUNC_0(VAR_0);
            FUNC_1(&VAR_3, ((void*)0), ((void*)0), &VAR_5, ((void*)0), VAR_4);
            if (VAR_5 == ((void*)0))
                VAR_5 = "<NO NAME>";
            FUNC_5("%d : %s : %s", VAR_3, FUNC_3(VAR_3), VAR_5);
        }
    }
    return VAR_2;
}
