
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;
typedef char* BYTE ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,char const*,char*) ;

__attribute__((used)) static WCHAR *FUNC_3(void *VAR_0, DWORD VAR_1)
{
    WCHAR *VAR_2 = FUNC_1(FUNC_0(), 0, (VAR_1 * 3 + 1) * sizeof(WCHAR));

    if (VAR_2)
    {
        static const WCHAR VAR_3[] = { '%','0','2','x',' ',0 };
        DWORD VAR_4;
        WCHAR *VAR_5;

        for (VAR_4 = 0, VAR_5 = VAR_2; VAR_4 < VAR_1; VAR_4++, VAR_5 += 3)
            FUNC_2(VAR_5, VAR_3, ((BYTE *)VAR_0)[VAR_4]);
    }
    return VAR_2;
}
