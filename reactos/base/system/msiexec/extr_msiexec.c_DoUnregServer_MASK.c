
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int SC_HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,char const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static DWORD FUNC_6(void)
{
    static const WCHAR VAR_5[] = {'M','S','I','S','e','r','v','e','r',0};
    SC_HANDLE VAR_6, VAR_7;
    DWORD VAR_8 = 0;

    if (!(VAR_6 = FUNC_3(((void*)0), VAR_3, VAR_2)))
    {
        FUNC_5(VAR_4, "Failed to open service control manager\n");
        return 1;
    }
    if ((VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_0)))
    {
        if (!FUNC_1(VAR_7))
        {
            FUNC_5(VAR_4, "Failed to delete MSI service\n");
            VAR_8 = 1;
        }
        FUNC_0(VAR_7);
    }
    else if (FUNC_2() != VAR_1)
    {
        FUNC_5(VAR_4, "Failed to open MSI service\n");
        VAR_8 = 1;
    }
    FUNC_0(VAR_6);
    return VAR_8;
}
