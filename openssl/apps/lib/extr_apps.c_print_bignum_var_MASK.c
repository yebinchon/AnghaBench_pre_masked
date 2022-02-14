
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int const*,unsigned char*) ;
 scalar_t__ FUNC_2 (int const*) ;

void FUNC_3(BIO *VAR_0, const BIGNUM *VAR_1, const char *VAR_2,
                      int VAR_3, unsigned char *VAR_4)
{
    FUNC_0(VAR_0, "    static unsigned char %s_%d[] = {", VAR_2, VAR_3);
    if (FUNC_2(VAR_1)) {
        FUNC_0(VAR_0, "\n        0x00");
    } else {
        int VAR_5, VAR_6;

        VAR_6 = FUNC_1(VAR_1, VAR_4);
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            FUNC_0(VAR_0, (VAR_5 % 10) == 0 ? "\n        " : " ");
            if (VAR_5 < VAR_6 - 1)
                FUNC_0(VAR_0, "0x%02X,", VAR_4[VAR_5]);
            else
                FUNC_0(VAR_0, "0x%02X", VAR_4[VAR_5]);
        }
    }
    FUNC_0(VAR_0, "\n    };\n");
}
