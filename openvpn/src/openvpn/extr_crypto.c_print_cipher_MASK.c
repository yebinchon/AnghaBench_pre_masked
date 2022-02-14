
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cipher_kt_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (int ) ;

void
FUNC_7(const cipher_kt_t *VAR_0)
{
    const char *VAR_1 = FUNC_4(VAR_0) ?
                               " by default" : "";

    FUNC_5("%s  (%d bit key%s, ",
           FUNC_6(FUNC_3(VAR_0)),
           FUNC_1(VAR_0) * 8, VAR_1);

    if (FUNC_0(VAR_0) == 1)
    {
        FUNC_5("stream cipher");
    }
    else
    {
        FUNC_5("%d bit block", FUNC_0(VAR_0) * 8);
    }

    if (!FUNC_2(VAR_0))
    {
        FUNC_5(", TLS client/server mode only");
    }

    FUNC_5(")\n");
}
