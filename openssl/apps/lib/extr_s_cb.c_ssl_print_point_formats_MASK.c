
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char const**) ;




int FUNC_3(BIO *VAR_0, SSL *VAR_1)
{
    int VAR_2, VAR_3;
    const char *VAR_4;
    VAR_3 = FUNC_2(VAR_1, &VAR_4);
    if (VAR_3 <= 0)
        return 1;
    FUNC_1(VAR_0, "Supported Elliptic Curve Point Formats: ");
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++, VAR_4++) {
        if (VAR_2)
            FUNC_1(VAR_0, ":");
        switch (*VAR_4) {
        case 128:
            FUNC_1(VAR_0, "uncompressed");
            break;

        case 129:
            FUNC_1(VAR_0, "ansiX962_compressed_prime");
            break;

        case 130:
            FUNC_1(VAR_0, "ansiX962_compressed_char2");
            break;

        default:
            FUNC_0(VAR_0, "unknown(%d)", (int)*VAR_4);
            break;

        }
    }
    FUNC_1(VAR_0, "\n");
    return 1;
}
