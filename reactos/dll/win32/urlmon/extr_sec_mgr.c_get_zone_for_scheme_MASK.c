
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char const* LPCWSTR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*,int *,scalar_t__*,int *,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static BOOL FUNC_3(HKEY VAR_4, LPCWSTR VAR_5, DWORD *VAR_6)
{
    static const WCHAR VAR_7[] = {'*',0};

    DWORD VAR_8;
    DWORD VAR_9 = sizeof(DWORD);
    DWORD VAR_10;


    VAR_8 = FUNC_0(VAR_4, VAR_5, ((void*)0), &VAR_10, (BYTE*)VAR_6, &VAR_9);
    if(VAR_8 == VAR_0) {
        if(VAR_10 == VAR_2)
            return VAR_3;
        FUNC_1("Unexpected value type %d for value %s, expected REG_DWORD\n", VAR_10, FUNC_2(VAR_5));
    }


    VAR_9 = sizeof(DWORD);
    VAR_8 = FUNC_0(VAR_4, VAR_7, ((void*)0), &VAR_10, (BYTE*)VAR_6, &VAR_9);
    if(VAR_8 != VAR_0)
        return VAR_1;

    if(VAR_10 != VAR_2) {
        FUNC_1("Unexpected value type %d for value %s, expected REG_DWORD\n", VAR_10, FUNC_2(VAR_7));
        return VAR_1;
    }

    return VAR_3;
}
