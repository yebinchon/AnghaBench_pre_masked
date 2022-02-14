
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0)
{
    if (FUNC_2(VAR_0) < 4)
        return 0;
    if (FUNC_1(VAR_0, "zc:", 3) == 0)
        return 1;
    if (FUNC_1(VAR_0, "dna", 3) != 0)
        return 0;

    VAR_0 +=3;

    if (!FUNC_0(VAR_0[0]&0xFF))
        return 0;
    while (FUNC_0(VAR_0[0]&0xFF))
        VAR_0++;

    if (VAR_0[0] == '\0')
        return 1;

    if (VAR_0[0] != '@')
        return 0;
    else
        VAR_0++;

    if (!FUNC_0(VAR_0[0]&0xFF))
        return 0;
    while (FUNC_0(VAR_0[0]&0xFF))
        VAR_0++;

    if (VAR_0[0] == '\0')
        return 1;
    else
        return 0;
}
