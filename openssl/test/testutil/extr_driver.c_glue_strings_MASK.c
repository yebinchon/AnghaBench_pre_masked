
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 char const* FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0[], size_t *VAR_1)
{
    size_t VAR_2 = 0;
    char *VAR_3, *VAR_4;
    int VAR_5;

    for (VAR_5 = 0; VAR_0[VAR_5] != ((void*)0); VAR_5++)
        VAR_2 += FUNC_3(VAR_0[VAR_5]);

    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_2;

    if (!FUNC_1(VAR_4 = VAR_3 = FUNC_0(VAR_2 + 1)))
        return ((void*)0);

    for (VAR_5 = 0; VAR_0[VAR_5] != ((void*)0); VAR_5++)
        VAR_3 += FUNC_3(FUNC_2(VAR_3, VAR_0[VAR_5]));

    return VAR_4;
}
