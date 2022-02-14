
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAA ;
typedef scalar_t__ HANDLE ;
typedef size_t DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static DWORD FUNC_5(const char* VAR_2, char* VAR_3, DWORD VAR_4)
{
    char VAR_5[VAR_1];
    const char* VAR_6;
    DWORD VAR_7 = 0, VAR_8 = 0;
    DWORD VAR_9;
    WIN32_FIND_DATAA VAR_10;
    HANDLE VAR_11;

    if (!VAR_2 || !VAR_2[0])
        return 0;

    if (VAR_2[1] == ':')
    {
        VAR_5[0] = VAR_2[0];
        VAR_5[1] = ':';
        VAR_8 = VAR_7 = 2;
    }

    while (VAR_2[VAR_7])
    {

        if (VAR_2[VAR_7] == '\\' || VAR_2[VAR_7] == '/')
        {
            if (!VAR_8 || VAR_5[VAR_8-1] != '\\')
            {

                VAR_5[VAR_8++] = '\\';
            }
            VAR_5[VAR_8] = 0;
            VAR_7++;
            continue;
        }

        VAR_6 = VAR_2 + VAR_7;
        if (VAR_7 == 0 && VAR_6[0] == '.' && (VAR_6[1] == '/' || VAR_6[1] == '\\'))
        {
            VAR_5[VAR_8++] = *VAR_6++;
            VAR_5[VAR_8++] = *VAR_6++;
        }
        for (; *VAR_6 && *VAR_6 != '/' && *VAR_6 != '\\'; VAR_6++);
        VAR_9 = VAR_6 - (VAR_2 + VAR_7);
        FUNC_2(VAR_5 + VAR_8, VAR_2 + VAR_7, VAR_9 + 1);

        VAR_11 = FUNC_1(VAR_5, &VAR_10);
        if (VAR_11 == VAR_0)
            return 0;
        FUNC_0(VAR_11);
        FUNC_3(VAR_5 + VAR_8, VAR_10.cFileName);
        VAR_8 += FUNC_4(VAR_5 + VAR_8);
        VAR_7 += VAR_9;
    }
    VAR_9 = FUNC_4(VAR_2) - 1;
    if ((VAR_2[VAR_9] == '/' || VAR_2[VAR_9] == '\\') &&
        (VAR_5[VAR_8 - 1] != '/' && VAR_5[VAR_8 - 1] != '\\'))
        VAR_5[VAR_8++] = VAR_2[VAR_9];
    VAR_5[VAR_8] = 0;

    VAR_9 = FUNC_4(VAR_5) + 1;
    if (VAR_9 <= VAR_4)
    {
        FUNC_3(VAR_3, VAR_5);
        VAR_9--;
    }

    return VAR_9;
}
