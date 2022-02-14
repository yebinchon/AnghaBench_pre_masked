
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 char* FUNC_0 (size_t) ;

__attribute__((used)) static WCHAR *FUNC_1(WCHAR *VAR_0, size_t VAR_1, size_t *VAR_2)
{
    size_t VAR_3, VAR_4, VAR_5;
    WCHAR *VAR_6;

    for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        WCHAR VAR_7 = VAR_0[VAR_3];

        if (!VAR_7) break;

        if (VAR_7 == '\r' || VAR_7 == '\n' || VAR_7 == '\\' || VAR_7 == '"')
            VAR_4++;
    }

    VAR_6 = FUNC_0((VAR_1 + VAR_4 + 1) * sizeof(WCHAR));

    for (VAR_3 = 0, VAR_5 = 0; VAR_3 < VAR_1; VAR_3++, VAR_5++)
    {
        WCHAR VAR_8 = VAR_0[VAR_3];

        if (!VAR_8) break;

        switch (VAR_8)
        {
        case '\r':
            VAR_6[VAR_5++] = '\\';
            VAR_6[VAR_5] = 'r';
            break;
        case '\n':
            VAR_6[VAR_5++] = '\\';
            VAR_6[VAR_5] = 'n';
            break;
        case '\\':
            VAR_6[VAR_5++] = '\\';
            VAR_6[VAR_5] = '\\';
            break;
        case '"':
            VAR_6[VAR_5++] = '\\';
            VAR_6[VAR_5] = '"';
            break;
        default:
            VAR_6[VAR_5] = VAR_8;
        }
    }

    VAR_6[VAR_5] = 0;
    *VAR_2 = VAR_5;
    return VAR_6;
}
