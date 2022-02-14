
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float) ;
 float FUNC_1 (char*,char**) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, float *VAR_1)
{
    char *VAR_2;
    float VAR_3;

    VAR_3 = FUNC_1(VAR_0, &VAR_2);
    if (!VAR_2 || (VAR_2 == VAR_0) || !FUNC_0(VAR_3))
        return -1;

    *VAR_1 = VAR_3;
    return 0;
}
