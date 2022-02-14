
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ PATTRINFO ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(size_t VAR_3, DWORD VAR_4)
{
    static const WCHAR VAR_5[] = {'t','e','s','t','x','x','.','e','x','e',0};
    static char VAR_6[] = {4, 4, 4, 4, 1, 1, 1, 1, 4, 4, 4, 4, 2, 2, 2, 2};

    PATTRINFO VAR_7 = (PATTRINFO)0xdead;
    DWORD VAR_8 = 333;
    BOOL VAR_9;

    FUNC_3(L"testxx.exe", VAR_6, VAR_3);
    VAR_9 = FUNC_2(VAR_5, &VAR_7, &VAR_8);
    FUNC_4(VAR_9 != VAR_0, "expected SdbGetFileAttributes to succeed.\n");
    FUNC_4(VAR_7 != (PATTRINFO)0xdead, "expected a valid pointer.\n");
    FUNC_4(VAR_8 == VAR_2, "expected %u items, got %d.\n", VAR_2, VAR_8);

    if (VAR_8 == VAR_2 && VAR_9)
    {
        FUNC_0(VAR_7, VAR_1, VAR_4);
    }
    if (VAR_9)
        FUNC_1(VAR_7);
}
