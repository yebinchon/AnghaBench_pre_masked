
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, void *VAR_2)
{
    int VAR_3;
    int *VAR_4 = VAR_2;

    if (*VAR_4 == -1)
        return;
    if ((VAR_3 = FUNC_1(VAR_1)) == VAR_0
        && (VAR_3 = FUNC_0(VAR_1)) == VAR_0)
        return;
    if (*VAR_4 != VAR_0 && *VAR_4 != VAR_3) {
        *VAR_4 = -1;
        return;
    }
    *VAR_4 = VAR_3;
}
