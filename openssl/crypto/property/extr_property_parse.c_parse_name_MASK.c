
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int OSSL_PROPERTY_IDX ;
typedef int OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int *,char*,int) ;
 char FUNC_4 (char const) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(OPENSSL_CTX *VAR_3, const char *VAR_4[], int VAR_5,
                      OSSL_PROPERTY_IDX *VAR_6)
{
    char VAR_7[100];
    int VAR_8 = 0;
    size_t VAR_9 = 0;
    const char *VAR_10 = *VAR_4;
    int VAR_11 = 0;

    for (;;) {
        if (!FUNC_2(*VAR_10)) {
            FUNC_0(VAR_0, VAR_2,
                           "HERE-->%s", *VAR_4);
            return 0;
        }
        do {
            if (VAR_9 < sizeof(VAR_7) - 1)
                VAR_7[VAR_9++] = FUNC_4(*VAR_10);
            else
                VAR_8 = 1;
        } while (*++VAR_10 == '_' || FUNC_1(*VAR_10));
        if (*VAR_10 != '.')
            break;
        VAR_11 = 1;
        if (VAR_9 < sizeof(VAR_7) - 1)
            VAR_7[VAR_9++] = *VAR_10;
        else
            VAR_8 = 1;
        VAR_10++;
    }
    VAR_7[VAR_9] = '\0';
    if (VAR_8) {
        FUNC_0(VAR_0, VAR_1, "HERE-->%s", *VAR_4);
        return 0;
    }
    *VAR_4 = FUNC_5(VAR_10);
    *VAR_6 = FUNC_3(VAR_3, VAR_7, VAR_11 && VAR_5);
    return 1;
}
