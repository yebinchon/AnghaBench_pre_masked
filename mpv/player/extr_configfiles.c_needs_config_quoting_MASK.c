
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0)
{
    if (VAR_0[0] == '%')
        return 1;
    for (int VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
        unsigned char VAR_2 = VAR_0[VAR_1];
        if (!FUNC_0(VAR_2) || FUNC_1(VAR_2) || VAR_2 == '#' || VAR_2 == '\'' || VAR_2 == '"')
            return 1;
    }
    return 0;
}
