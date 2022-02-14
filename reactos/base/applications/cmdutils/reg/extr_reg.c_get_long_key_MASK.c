
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {scalar_t__ key; char* long_name; } ;
typedef scalar_t__ HKEY ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static WCHAR *FUNC_5(HKEY VAR_1, WCHAR *VAR_2)
{
    DWORD VAR_3, VAR_4 = FUNC_0(VAR_0), VAR_5;
    WCHAR *VAR_6;
    WCHAR VAR_7[] = {'%','s','\\','%','s',0};

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    {
        if (VAR_1 == VAR_0[VAR_3].key)
            break;
    }

    VAR_5 = FUNC_4(VAR_0[VAR_3].long_name);

    if (!VAR_2)
    {
        VAR_6 = FUNC_1((VAR_5 + 1) * sizeof(WCHAR));
        FUNC_3(VAR_6, VAR_0[VAR_3].long_name);
        return VAR_6;
    }

    VAR_5 += FUNC_4(VAR_2) + 1;
    VAR_6 = FUNC_1((VAR_5 + 1) * sizeof(WCHAR));
    FUNC_2(VAR_6, VAR_7, VAR_0[VAR_3].long_name, VAR_2);
    return VAR_6;
}
