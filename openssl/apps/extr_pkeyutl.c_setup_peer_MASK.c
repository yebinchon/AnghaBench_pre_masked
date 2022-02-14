
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int ENGINE ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (char const*,int,int ,int *,int *,char*) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_2, int VAR_3, const char *VAR_4,
                      ENGINE *VAR_5)
{
    EVP_PKEY *VAR_6 = ((void*)0);
    ENGINE *VAR_7 = ((void*)0);
    int VAR_8;

    if (VAR_3 == VAR_0)
        VAR_7 = VAR_5;
    VAR_6 = FUNC_4(VAR_4, VAR_3, 0, ((void*)0), VAR_7, "Peer Key");
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_1, "Error reading peer key %s\n", VAR_4);
        FUNC_1(VAR_1);
        return 0;
    }

    VAR_8 = FUNC_2(VAR_2, VAR_6);

    FUNC_3(VAR_6);
    if (VAR_8 <= 0)
        FUNC_1(VAR_1);
    return VAR_8;
}
