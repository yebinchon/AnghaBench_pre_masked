
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int szStub; int szLocale; int szGUID; int szCompID; scalar_t__ dwIsInstalled; int szVersion; int szDispName; int bRollback; } ;
typedef int PINT ;
typedef TYPE_1__ PERUSERSECTIONW ;
typedef int PCWSTR ;
typedef int INFCONTEXT ;
typedef int HRESULT ;
typedef int HINF ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,char const*,int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_5(HINF VAR_1, PCWSTR VAR_2, const void *VAR_3)
{
    PERUSERSECTIONW VAR_4;
    INFCONTEXT VAR_5;
    DWORD VAR_6;

    static const WCHAR VAR_7[] = {'D','i','s','p','l','a','y','N','a','m','e',0};
    static const WCHAR VAR_8[] = {'V','e','r','s','i','o','n',0};
    static const WCHAR VAR_9[] = {'I','s','I','n','s','t','a','l','l','e','d',0};
    static const WCHAR VAR_10[] = {'C','o','m','p','o','n','e','n','t','I','D',0};
    static const WCHAR VAR_11[] = {'G','U','I','D',0};
    static const WCHAR VAR_12[] = {'L','o','c','a','l','e',0};
    static const WCHAR VAR_13[] = {'S','t','u','b','P','a','t','h',0};

    VAR_4.bRollback = VAR_0;
    VAR_4.dwIsInstalled = 0;

    FUNC_4(((void*)0), VAR_1, VAR_2, VAR_7, VAR_4.szDispName, FUNC_0(VAR_4.szDispName), &VAR_6);

    FUNC_4(((void*)0), VAR_1, VAR_2, VAR_8, VAR_4.szVersion, FUNC_0(VAR_4.szVersion), &VAR_6);

    if (FUNC_2(VAR_1, VAR_2, VAR_9, &VAR_5))
    {
        FUNC_3(&VAR_5, 1, (PINT)&VAR_4.dwIsInstalled);
    }

    FUNC_4(((void*)0), VAR_1, VAR_2, VAR_10, VAR_4.szCompID, FUNC_0(VAR_4.szCompID), &VAR_6);

    FUNC_4(((void*)0), VAR_1, VAR_2, VAR_11, VAR_4.szGUID, FUNC_0(VAR_4.szGUID), &VAR_6);

    FUNC_4(((void*)0), VAR_1, VAR_2, VAR_12, VAR_4.szLocale, FUNC_0(VAR_4.szLocale), &VAR_6);

    FUNC_4(((void*)0), VAR_1, VAR_2, VAR_13, VAR_4.szStub, FUNC_0(VAR_4.szStub), &VAR_6);

    return FUNC_1(&VAR_4);
}
