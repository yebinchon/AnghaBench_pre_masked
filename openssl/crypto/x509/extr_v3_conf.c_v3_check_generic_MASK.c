
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(const char **VAR_0)
{
    int VAR_1 = 0;
    const char *VAR_2 = *VAR_0;
    if ((FUNC_1(VAR_2) >= 4) && FUNC_2(VAR_2, "DER:", 4) == 0) {
        VAR_2 += 4;
        VAR_1 = 1;
    } else if ((FUNC_1(VAR_2) >= 5) && FUNC_2(VAR_2, "ASN1:", 5) == 0) {
        VAR_2 += 5;
        VAR_1 = 2;
    } else
        return 0;

    while (FUNC_0(*VAR_2))
        VAR_2++;
    *VAR_0 = VAR_2;
    return VAR_1;
}
