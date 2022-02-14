
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 scalar_t__ FUNC_0 (int *,char) ;
 scalar_t__ FUNC_1 (int *,char) ;

__attribute__((used)) static char *FUNC_2(CONF *VAR_0, char *VAR_1)
{
    int VAR_2 = *VAR_1;

    VAR_1++;
    while (!(FUNC_0(VAR_0, *VAR_1)) && (*VAR_1 != VAR_2)) {
        if (FUNC_1(VAR_0, *VAR_1)) {
            VAR_1++;
            if (FUNC_0(VAR_0, *VAR_1))
                return VAR_1;
        }
        VAR_1++;
    }
    if (*VAR_1 == VAR_2)
        VAR_1++;
    return VAR_1;
}
