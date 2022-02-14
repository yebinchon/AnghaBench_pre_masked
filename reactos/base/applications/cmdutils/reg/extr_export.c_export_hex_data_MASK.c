
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static void FUNC_4(HANDLE VAR_1, WCHAR **VAR_2, DWORD VAR_3,
                            DWORD VAR_4, void *VAR_5, DWORD VAR_6)
{
    static const WCHAR VAR_7[] = {'%','0','2','x',0};
    static const WCHAR VAR_8[] = {'\\','\r','\n',' ',' ',0};
    size_t VAR_9, VAR_10, VAR_11;

    VAR_4 += FUNC_0(VAR_1, VAR_3);

    if (!VAR_6) return;

    VAR_9 = VAR_6 - 1;
    *VAR_2 = FUNC_1(VAR_6 * 3 * sizeof(WCHAR));

    for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_6; VAR_10++)
    {
        VAR_11 += FUNC_2(*VAR_2 + VAR_11, VAR_7, ((BYTE *)VAR_5)[VAR_10]);
        if (VAR_10 == VAR_9) break;
        (*VAR_2)[VAR_11++] = ',';
        (*VAR_2)[VAR_11] = 0;
        VAR_4 += 3;

        if (VAR_4 >= VAR_0)
        {
            FUNC_3(VAR_1, *VAR_2);
            FUNC_3(VAR_1, VAR_8);
            VAR_4 = 2;
            VAR_11 = 0;
        }
    }
}
