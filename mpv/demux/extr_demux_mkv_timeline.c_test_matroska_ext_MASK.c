
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0)
{
    static const char *const VAR_1[] = {".mkv", ".mka", ".mks", ".mk3d", ((void*)0)};
    for (int VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
        const char *VAR_3 = VAR_1[VAR_2];
        int VAR_4 = FUNC_1(VAR_0) - FUNC_1(VAR_3);

        if (VAR_4 > 0 && FUNC_0(VAR_0 + VAR_4, VAR_3) == 0)
            return 1;
    }
    return 0;
}
