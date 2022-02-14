
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char) ;

__attribute__((used)) static BOOL FUNC_2(WCHAR *VAR_2, WCHAR **VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = FUNC_0(VAR_2);
    BOOL VAR_7;

    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++, VAR_5++)
    {
        if (VAR_2[VAR_4] == '\\')
        {
            VAR_4++;
            switch (VAR_2[VAR_4])
            {
            case 'n':
                VAR_2[VAR_5] = '\n';
                break;
            case 'r':
                VAR_2[VAR_5] = '\r';
                break;
            case '0':
                VAR_2[VAR_5] = '\0';
                break;
            case '\\':
            case '"':
                VAR_2[VAR_5] = VAR_2[VAR_4];
                break;
            default:
                if (!VAR_2[VAR_4]) return VAR_0;
                FUNC_1(VAR_1, VAR_2[VAR_4]);
                VAR_2[VAR_5] = VAR_2[VAR_4];
                break;
            }
        }
        else if (VAR_2[VAR_4] == '"')
            break;
        else
            VAR_2[VAR_5] = VAR_2[VAR_4];
    }

    VAR_7 = (VAR_2[VAR_4] == '"');
    *VAR_3 = VAR_2 + VAR_4 + 1;
    VAR_2[VAR_5] = '\0';
    return VAR_7;
}
