
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_3(LPCWSTR VAR_2, LPWSTR VAR_3, int VAR_4)
{
    static const WCHAR VAR_5[] = {'\\','b','i','n','\\','m','o','n','o','.','d','l','l',0};
    static const WCHAR VAR_6[] = {'\\','b','i','n','\\','l','i','b','m','o','n','o','.','d','l','l',0};
    static const WCHAR VAR_7[] = {'\\','b','i','n','\\','m','o','n','o','-','2','.','0','.','d','l','l',0};
    static const WCHAR VAR_8[] = {'\\','b','i','n','\\','l','i','b','m','o','n','o','-','2','.','0','.','d','l','l',0};
    DWORD VAR_9=VAR_0;

    if (VAR_4 == 1)
    {
        FUNC_2(VAR_3, VAR_2);
        FUNC_1(VAR_3, VAR_5);
        VAR_9 = FUNC_0(VAR_3);

        if (VAR_9 == VAR_0)
        {
            FUNC_2(VAR_3, VAR_2);
            FUNC_1(VAR_3, VAR_6);
            VAR_9 = FUNC_0(VAR_3);
        }
    }
    else if (VAR_4 == 2)
    {
        FUNC_2(VAR_3, VAR_2);
        FUNC_1(VAR_3, VAR_1);
        VAR_9 = FUNC_0(VAR_3);

        if (VAR_9 == VAR_0)
        {
            FUNC_2(VAR_3, VAR_2);
            FUNC_1(VAR_3, VAR_7);
            VAR_9 = FUNC_0(VAR_3);
        }

        if (VAR_9 == VAR_0)
        {
            FUNC_2(VAR_3, VAR_2);
            FUNC_1(VAR_3, VAR_8);
            VAR_9 = FUNC_0(VAR_3);
        }
    }

    return (VAR_9 != VAR_0);
}
