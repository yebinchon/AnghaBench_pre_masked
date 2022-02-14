
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0, int VAR_1)
{
    const char *VAR_2;
    switch (VAR_1) {
    case -1:
        VAR_2 = "BOOL ABSENT";
        break;

    case 0:
        VAR_2 = "FALSE";
        break;

    default:
        VAR_2 = "TRUE";
        break;

    }

    if (FUNC_0(VAR_0, VAR_2) <= 0)
        return 0;
    return 1;

}
