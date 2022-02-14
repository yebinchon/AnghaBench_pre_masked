
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const WCHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char const*) ;
 int FUNC_5 (int ,int ,char const*,int,char const*,int) ;
 int FUNC_6 (scalar_t__,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,int) ;

__attribute__((used)) static BOOL FUNC_10(unsigned VAR_2, const char *VAR_3, BOOL VAR_4)
{
    int VAR_5;
    BOOL VAR_6;

    VAR_5 = FUNC_8(VAR_3);

    if (VAR_4)
    {
        int VAR_7 = FUNC_5(VAR_0, 0, VAR_3, VAR_5, ((void*)0), 0);
        int VAR_8 = VAR_7 * sizeof(WCHAR);
        WCHAR *VAR_9 = FUNC_3(FUNC_2(), 0, VAR_8);
        if (!VAR_9) return VAR_1;
        FUNC_5(VAR_0, 0, VAR_3, VAR_5, VAR_9, VAR_7);

        VAR_6 = FUNC_9(VAR_9, VAR_8);
        FUNC_4(FUNC_2(), 0, VAR_9);
    }
    else
        VAR_6 = FUNC_9(VAR_3, VAR_5);

    if (!VAR_6) return VAR_1;

    FUNC_7("regedit.exe /s test.reg");

    VAR_6 = FUNC_0("test.reg");
    FUNC_6(VAR_6, "DeleteFile failed: %u\n", FUNC_1());

    return VAR_6;
}
