
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONG ;


 int FUNC_0 (char) ;

__attribute__((used)) static bool FUNC_1(ULONG VAR_0, WCHAR* VAR_1) {
    ULONG VAR_2;

    if (VAR_0 != 36 * sizeof(WCHAR))
        return 0;

    for (VAR_2 = 0; VAR_2 < 36; VAR_2++) {
        if (VAR_2 == 8 || VAR_2 == 13 || VAR_2 == 18 || VAR_2 == 23) {
            if (VAR_1[VAR_2] != '-')
                return 0;
        } else if (!FUNC_0(VAR_1[VAR_2]))
            return 0;
    }

    return 1;
}
