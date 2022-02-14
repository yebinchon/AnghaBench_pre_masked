
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const wchar_t ;
typedef scalar_t__ gboolean ;


 int FUNC_0 (int const*) ;
 char* FUNC_1 (int const*,int,int *,int *,int *) ;
 int const* FUNC_2 (char const*,int const*,int) ;

__attribute__((used)) static char *
FUNC_3 (const char *VAR_0, const wchar_t *VAR_1, int VAR_2,
                      gboolean VAR_3)
{
    char *VAR_4 = ((void*)0);

    if (VAR_3) {
        wchar_t *VAR_5 = FUNC_2 (VAR_0,
                                                         VAR_1,
                                                         VAR_2/sizeof(wchar_t));
        if (VAR_5) {
            VAR_4 = FUNC_1 (VAR_5, -1, ((void*)0), ((void*)0), ((void*)0));
            FUNC_0 (VAR_5);
        } else
            VAR_4 = FUNC_1 (VAR_1, VAR_2/sizeof(wchar_t),
                                         ((void*)0), ((void*)0), ((void*)0));
    } else
        VAR_4 = FUNC_1 (VAR_1, VAR_2/sizeof(wchar_t), ((void*)0), ((void*)0), ((void*)0));

    if (!VAR_4)
        return ((void*)0);

    char *VAR_6;
    for (VAR_6 = VAR_4; *VAR_6 != 0; ++VAR_6)
        if (*VAR_6 == '\\')
            *VAR_6 = '/';

    return VAR_4;
}
