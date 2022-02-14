
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int,int *,int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_7;
    if (0)
    {

    FUNC_1(0xdeadbeef);
    VAR_7 = FUNC_4(VAR_4, VAR_2, (PBYTE) VAR_6, (FUNC_2(VAR_6) + 1) * sizeof(WCHAR), ((void*)0), 0, ((void*)0));
    FUNC_3( VAR_7 == VAR_1, "returned %d with %u (expected ERROR_SUCCESS)\n", VAR_7, FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_7 = FUNC_4(VAR_4, VAR_2, (PBYTE) VAR_6, (FUNC_2(VAR_6) + 1) * sizeof(WCHAR), ((void*)0), 0, ((void*)0));
    FUNC_3( VAR_7 == VAR_0, "returned %d with %u (expected ERROR_ALREADY_EXISTS)\n", VAR_7, FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_7 = FUNC_4(VAR_4, VAR_2, (PBYTE) VAR_5, (FUNC_2(VAR_5) + 1) * sizeof(WCHAR), ((void*)0), 0, ((void*)0));
    FUNC_3( VAR_7 == VAR_0, "returned %d with %u (expected ERROR_ALREADY_EXISTS)\n", VAR_7, FUNC_0());







    FUNC_1(0xdeadbeef);
    VAR_7 = FUNC_4(VAR_4, VAR_3, (PBYTE) VAR_6, (FUNC_2(VAR_6) + 1) * sizeof(WCHAR), ((void*)0), 0, ((void*)0));
    FUNC_3( VAR_7 == VAR_1, "returned %d with %u (expected ERROR_SUCCESS)\n", VAR_7, FUNC_0());
    }

}
