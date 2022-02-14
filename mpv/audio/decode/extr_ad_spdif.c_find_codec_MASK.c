
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_2)
{
    for (int VAR_3 = 0; VAR_1[VAR_3] != VAR_0; VAR_3++) {
        const char *VAR_4 = FUNC_0(VAR_1[VAR_3]);
        if (VAR_4 && VAR_2 && FUNC_1(VAR_4, VAR_2) == 0)
            return 1;
    }
    return 0;
}
