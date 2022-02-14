
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const*** VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_1)
{
    for (int VAR_2 = 0; VAR_0[VAR_2][0]; VAR_2++) {
        if (FUNC_0(VAR_0[VAR_2][0], VAR_1) == 0)
            return VAR_0[VAR_2][1];
    }
    return ((void*)0);
}
