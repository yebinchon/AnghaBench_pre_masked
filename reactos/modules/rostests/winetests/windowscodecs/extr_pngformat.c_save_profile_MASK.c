
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,int ,char*) ;
 int FUNC_4 (int,char*) ;
 char* FUNC_5 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,int *,int ,int *,int *) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static WCHAR *FUNC_9( BYTE *VAR_4, UINT VAR_5 )
{
    static const WCHAR VAR_6[] = {'t','s','t',0};
    WCHAR VAR_7[VAR_3], VAR_8[VAR_3], *VAR_9;
    HANDLE VAR_10;
    DWORD VAR_11;

    FUNC_4(VAR_3, VAR_7);
    FUNC_3(VAR_7, VAR_6, 0, VAR_8);

    VAR_10 = FUNC_1(VAR_8, VAR_1, 0, ((void*)0), VAR_0, 0, ((void*)0));
    if (VAR_10 == VAR_2) return ((void*)0);

    FUNC_6(VAR_10, VAR_4, VAR_5, &VAR_11, ((void*)0));
    FUNC_0( VAR_10 );

    VAR_9 = FUNC_5(FUNC_2(), 0, (FUNC_8(VAR_8) + 1) * sizeof(WCHAR));
    FUNC_7(VAR_9, VAR_8);
    return VAR_9;
}
