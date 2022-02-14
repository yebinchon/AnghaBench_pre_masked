
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int,int *,int ,scalar_t__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_4;
    DWORD VAR_5;



    VAR_5 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_4(VAR_2, VAR_1, (PBYTE) VAR_3, (FUNC_2(VAR_3) + 1) * sizeof(WCHAR), ((void*)0), 0, &VAR_5);
    FUNC_3( !VAR_4 || (VAR_4 == VAR_0),
        "returned %d with %u (expected ERROR_SUCCESS or ERROR_FILE_NOT_FOUND)\n",
        VAR_4, FUNC_0());






    VAR_5 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_4 = FUNC_4(VAR_2, VAR_1, (PBYTE) VAR_3, (FUNC_2(VAR_3) + 1) * sizeof(WCHAR), ((void*)0), 0, &VAR_5);
    FUNC_3( VAR_4 == VAR_0,
        "returned %d with %u (expected ERROR_FILE_NOT_FOUND)\n", VAR_4, FUNC_0());




}
