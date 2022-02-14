
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int WCHAR ;
typedef int * LPCSTR ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int,scalar_t__,int *,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int const*,int *,scalar_t__) ;
 int FUNC_2 (int,char*,int *,int) ;

__attribute__((used)) static void FUNC_3(LPCSTR VAR_0, int VAR_1, DWORD VAR_2, BOOL VAR_3,
 const BYTE *VAR_4, DWORD VAR_5, DWORD VAR_6)
{
    BYTE VAR_7[8] = {0};
    DWORD VAR_8 = sizeof(VAR_7)-1, VAR_9 = 0xdeadbeef;
    BOOL VAR_10;
    WCHAR VAR_11[64];
    int VAR_12;
    for (VAR_12 = 0; (VAR_11[VAR_12] = VAR_0[VAR_12]) != 0; ++VAR_12);
    VAR_10 = FUNC_0(VAR_11, VAR_1, VAR_2, VAR_7, &VAR_8, ((void*)0), &VAR_9);
    FUNC_2(VAR_10 == VAR_3 && VAR_8 == VAR_5 && FUNC_1(VAR_4, VAR_7, VAR_8) == 0
     && VAR_9 == VAR_6, "base64 \"%s\" len %d: W and A differ\n", VAR_0, VAR_1);
}
