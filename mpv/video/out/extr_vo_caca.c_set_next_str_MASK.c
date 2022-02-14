
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const* const,char const*) ;

__attribute__((used)) static void FUNC_1(const char * const *VAR_0, const char **VAR_1,
                         const char **VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3 += 2) {
        if (FUNC_0(VAR_0[VAR_3], *VAR_1) == 0) {
            if (VAR_0[VAR_3 + 2] == ((void*)0))
                VAR_3 = -2;
            *VAR_1 = VAR_0[VAR_3 + 2];
            *VAR_2 = VAR_0[VAR_3 + 3];
            return;
        }
    }

    *VAR_1 = VAR_0[0];
    *VAR_2 = VAR_0[1];
}
