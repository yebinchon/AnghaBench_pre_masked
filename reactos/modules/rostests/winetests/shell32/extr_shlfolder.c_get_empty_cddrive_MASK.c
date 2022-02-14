
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static WCHAR *FUNC_3(void)
{
    static WCHAR VAR_2[] = {'A',':','\\',0};
    DWORD VAR_3 = FUNC_2();

    VAR_2[0] = 'A';
    while (VAR_3)
    {
        if ((VAR_3 & 1) &&
            FUNC_0(VAR_2) == VAR_0 &&
            FUNC_1(VAR_2) == VAR_1)
        {
            return VAR_2;
        }

        VAR_3 = VAR_3 >> 1;
        VAR_2[0]++;
    }
    return ((void*)0);
}
