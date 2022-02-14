
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static WCHAR* FUNC_3(const char* VAR_0)
{
    size_t VAR_1;
    WCHAR* VAR_2;
    int VAR_3;

    VAR_1 = FUNC_2(VAR_0) / 4;
    if (!VAR_1--) return ((void*)0);
    VAR_2 = (WCHAR*)FUNC_1(VAR_1 * 2 + 1);
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        VAR_2[VAR_3] = (FUNC_0(VAR_0[4 * VAR_3]) << 12) |
            (FUNC_0(VAR_0[4 * VAR_3 + 1]) << 8) |
            (FUNC_0(VAR_0[4 * VAR_3 + 2]) << 4) |
            (FUNC_0(VAR_0[4 * VAR_3 + 3]) << 0);
    VAR_2[VAR_1] = '\0';
    return VAR_2;
}
