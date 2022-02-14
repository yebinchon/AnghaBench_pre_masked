
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;

int FUNC_1(BIO *VAR_0, int VAR_1, int VAR_2, const void *VAR_3,
                   int VAR_4)
{
    const unsigned char *VAR_5 = VAR_3;
    int VAR_6, VAR_7 = 0;

    if (VAR_4 < 1)
        return 1;

    for (VAR_6 = 0; VAR_6 < VAR_4 - 1; VAR_6++) {
        if (VAR_6 && !VAR_7)
            FUNC_0(VAR_0, "%*s", VAR_1, "");

        FUNC_0(VAR_0, "%02X:", VAR_5[VAR_6]);

        VAR_7 = (VAR_7 + 1) % VAR_2;
        if (!VAR_7)
            FUNC_0(VAR_0, "\n");
    }

    if (VAR_6 && !VAR_7)
        FUNC_0(VAR_0, "%*s", VAR_1, "");
    FUNC_0(VAR_0, "%02X", VAR_5[VAR_4 - 1]);
    return 1;
}
