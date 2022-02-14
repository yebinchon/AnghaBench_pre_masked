
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,char const*,int ,char*) ;
 int FUNC_4 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    WCHAR VAR_5[VAR_3];
    WCHAR VAR_6[VAR_3], VAR_7[VAR_3];
    static const WCHAR VAR_8[] = {'p','f','x',0};
    DWORD VAR_9;

    VAR_9 = FUNC_4(VAR_3, VAR_5);
    if (VAR_9 == 0 && FUNC_2() == VAR_0)
    {
        FUNC_6("GetTempPathW is not available\n");
        return;
    }
    FUNC_5(VAR_9 != 0, "GetTempPathW error %d\n", FUNC_2());
    FUNC_5(VAR_9 < VAR_3, "temp path should fit into MAX_PATH\n");

    VAR_9 = FUNC_3(VAR_5, VAR_8, 0, VAR_6);
    FUNC_5(VAR_9 != 0, "GetTempFileNameW error %d\n", FUNC_2());

    VAR_9 = FUNC_3(VAR_5, VAR_8, 0, VAR_7);
    FUNC_5(VAR_9 != 0, "GetTempFileNameW error %d\n", FUNC_2());

    VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_4);
    FUNC_5(!VAR_9 && FUNC_2() == VAR_1,
       "CopyFileW: unexpected error %d\n", FUNC_2());

    VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_2);
    FUNC_5(VAR_9, "CopyFileW: error %d\n", FUNC_2());

    VAR_9 = FUNC_1(VAR_6);
    FUNC_5(VAR_9, "DeleteFileW: error %d\n", FUNC_2());
    VAR_9 = FUNC_1(VAR_7);
    FUNC_5(VAR_9, "DeleteFileW: error %d\n", FUNC_2());
}
