
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ PATTRINFO ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,size_t) ;
 int FUNC_1 (char*) ;
 size_t VAR_3 ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char const*,scalar_t__*,size_t*) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(DWORD VAR_4, int VAR_5, DWORD VAR_6)
{
    static const WCHAR VAR_7[] = {'t','e','s','t','x','x','.','e','x','e',0};

    PATTRINFO VAR_8 = (PATTRINFO)0xdead;
    DWORD VAR_9 = 333;
    BOOL VAR_10;
    size_t VAR_11;
    char* VAR_12 = FUNC_2(VAR_4);
    for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11)
        VAR_12[VAR_11] = (char)(VAR_5 ? VAR_5 : VAR_11);

    FUNC_5(L"testxx.exe", VAR_12, VAR_4);
    FUNC_1(VAR_12);
    VAR_10 = FUNC_4(VAR_7, &VAR_8, &VAR_9);
    FUNC_6(VAR_10 != VAR_0, "expected SdbGetFileAttributes to succeed.\n");
    FUNC_6(VAR_8 != (PATTRINFO)0xdead, "expected a valid pointer.\n");
    FUNC_6(VAR_9 == VAR_3, "expected %u items, got %d.\n", VAR_3, VAR_9);

    if (VAR_9 == VAR_3 && VAR_10)
    {
        FUNC_0(VAR_8, VAR_2, VAR_4);
        FUNC_0(VAR_8, VAR_1, VAR_6);
    }
    if (VAR_10)
        FUNC_3(VAR_8);
}
