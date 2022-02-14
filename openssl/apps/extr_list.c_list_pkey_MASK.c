
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_ASN1_METHOD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int*,char const**,char const**,int const*) ;
 int FUNC_3 () ;
 char const* FUNC_4 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(void)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_3(); VAR_3++) {
        const EVP_PKEY_ASN1_METHOD *VAR_4;
        int VAR_5, VAR_6, VAR_7;
        const char *VAR_8, *VAR_9;
        VAR_4 = FUNC_1(VAR_3);
        FUNC_2(&VAR_5, &VAR_6, &VAR_7,
                                &VAR_8, &VAR_9, VAR_4);
        if (VAR_7 & VAR_0) {
            FUNC_0(VAR_2, "Name: %s\n", FUNC_4(VAR_5));
            FUNC_0(VAR_2, "\tAlias for: %s\n",
                       FUNC_4(VAR_6));
        } else {
            FUNC_0(VAR_2, "Name: %s\n", VAR_8);
            FUNC_0(VAR_2, "\tType: %s Algorithm\n",
                       VAR_7 & VAR_1 ?
                       "External" : "Builtin");
            FUNC_0(VAR_2, "\tOID: %s\n", FUNC_4(VAR_5));
            if (VAR_9 == ((void*)0))
                VAR_9 = "(none)";
            FUNC_0(VAR_2, "\tPEM string: %s\n", VAR_9);
        }

    }
}
