
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const WCHAR ;
typedef int DWORD ;
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
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,int) ;

__attribute__((used)) static BOOL FUNC_10(unsigned VAR_2, const char *VAR_3, BOOL VAR_4, DWORD *VAR_5)
{
    int VAR_6;
    BOOL VAR_7;

    VAR_6 = FUNC_8(VAR_3);

    if (VAR_4)
    {
        int VAR_8 = FUNC_5(VAR_0, 0, VAR_3, VAR_6, ((void*)0), 0);
        int VAR_9 = VAR_8 * sizeof(WCHAR);
        WCHAR *VAR_10 = FUNC_3(FUNC_2(), 0, VAR_9);
        if (!VAR_10) return VAR_1;
        FUNC_5(VAR_0, 0, VAR_3, VAR_6, VAR_10, VAR_8);

        VAR_7 = FUNC_9(VAR_10, VAR_9);
        FUNC_4(FUNC_2(), 0, VAR_10);
    }
    else
        VAR_7 = FUNC_9(VAR_3, VAR_6);

    if (!VAR_7) return VAR_1;

    FUNC_7("reg import test.reg", VAR_5);

    VAR_7 = FUNC_0("test.reg");
    FUNC_6(VAR_7, "DeleteFile failed: %u\n", FUNC_1());

    return VAR_7;
}
