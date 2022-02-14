
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;

int FUNC_0(const char *VAR_1, const char *VAR_2)
{

    int VAR_3 = (VAR_1[-1] == VAR_0);
    int VAR_4 = *VAR_1++;
    while (VAR_4--) {
        if (*VAR_2 >= *VAR_1 && *VAR_2 <= VAR_1[1]) return VAR_3;
        VAR_1 += 2;
    }
    return !VAR_3;
}
