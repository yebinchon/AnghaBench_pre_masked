
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const) ;
 scalar_t__ FUNC_1 (char*,char const* const,int) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, const char *const *VAR_1)
{
    for (int VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
        int VAR_3 = FUNC_0(VAR_1[VAR_2]);
        if (FUNC_1(VAR_0, VAR_1[VAR_2], VAR_3) == 0)
            return VAR_0 + VAR_3;
    }
    return VAR_0;
}
