
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int DWORD ;


 int FUNC_0 (char*,char const*,int ) ;

__attribute__((used)) static DWORD FUNC_1(WCHAR *VAR_0, UINT VAR_1) {
    static const WCHAR VAR_2[] = {'%','u',0};
    DWORD VAR_3 = 0;

    if(!VAR_0) {
        WCHAR VAR_4[11];
        VAR_3 = FUNC_0(VAR_4, VAR_2, VAR_1);
    } else
        VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1);

    return VAR_3;
}
