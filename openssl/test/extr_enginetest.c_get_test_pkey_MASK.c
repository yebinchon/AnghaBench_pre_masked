
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n ;
typedef int e ;
typedef int RSA ;
typedef int EVP_PKEY ;


 int FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ,int ,int *) ;

__attribute__((used)) static EVP_PKEY *FUNC_7(void)
{
    static unsigned char VAR_0[] =
        "\x00\xAA\x36\xAB\xCE\x88\xAC\xFD\xFF\x55\x52\x3C\x7F\xC4\x52\x3F"
        "\x90\xEF\xA0\x0D\xF3\x77\x4A\x25\x9F\x2E\x62\xB4\xC5\xD9\x9C\xB5"
        "\xAD\xB3\x00\xA0\x28\x5E\x53\x01\x93\x0E\x0C\x70\xFB\x68\x76\x93"
        "\x9C\xE6\x16\xCE\x62\x4A\x11\xE0\x08\x6D\x34\x1E\xBC\xAC\xA0\xA1"
        "\xF5";
    static unsigned char VAR_1[] = "\x11";

    RSA *VAR_2 = FUNC_5();
    EVP_PKEY *VAR_3 = FUNC_3();

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || !FUNC_1(VAR_3, VAR_2)) {
        FUNC_4(VAR_2);
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    if (!FUNC_6(VAR_2, FUNC_0(VAR_0, sizeof(VAR_0)-1, ((void*)0)),
                      FUNC_0(VAR_1, sizeof(VAR_1)-1, ((void*)0)), ((void*)0))) {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
