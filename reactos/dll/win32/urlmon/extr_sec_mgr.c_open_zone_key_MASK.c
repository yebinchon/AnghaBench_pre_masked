
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_4(HKEY VAR_4, DWORD VAR_5, HKEY *VAR_6)
{
    static const WCHAR VAR_7[] = {'%','s','%','u',0};

    WCHAR VAR_8[FUNC_0(VAR_3) + 12];
    DWORD VAR_9;

    FUNC_3(VAR_8, VAR_7, VAR_3, VAR_5);

    VAR_9 = FUNC_1(VAR_4, VAR_8, VAR_6);

    if(VAR_9 != VAR_0) {
        FUNC_2("RegOpenKey failed\n");
        return VAR_1;
    }

    return VAR_2;
}
