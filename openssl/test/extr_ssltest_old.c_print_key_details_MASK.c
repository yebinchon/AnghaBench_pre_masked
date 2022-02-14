
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EC_KEY ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int) ;


 int VAR_0 ;

 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(BIO *VAR_1, EVP_PKEY *VAR_2)
{
    int VAR_3 = FUNC_7(VAR_2);

    if (VAR_3 == VAR_0) {
        EC_KEY *VAR_4 = FUNC_6(VAR_2);
        int VAR_5;
        const char *VAR_6;
        VAR_5 = FUNC_1(FUNC_3(VAR_4));
        FUNC_2(VAR_4);
        VAR_6 = FUNC_4(VAR_5);
        if (!VAR_6)
            VAR_6 = FUNC_8(VAR_5);
        FUNC_0(VAR_1, "%d bits EC (%s)", FUNC_5(VAR_2), VAR_6);
    } else

    {
        const char *VAR_7;
        switch (VAR_3) {
        case 128:
            VAR_7 = "RSA";
            break;
        case 129:
            VAR_7 = "DSA";
            break;
        case 130:
            VAR_7 = "DH";
            break;
        default:
            VAR_7 = FUNC_8(VAR_3);
            break;
        }
        FUNC_0(VAR_1, "%d bits %s", FUNC_5(VAR_2), VAR_7);
    }
}
