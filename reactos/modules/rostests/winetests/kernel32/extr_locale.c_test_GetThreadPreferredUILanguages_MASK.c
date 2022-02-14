
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,int*,int *,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    BOOL VAR_3;
    ULONG VAR_4, VAR_5;
    WCHAR *VAR_6;

    if (!&FUNC_5)
    {
        FUNC_6("GetThreadPreferredUILanguages is not available.\n");
        return;
    }

    VAR_5 = VAR_4 = 0;
    VAR_3 = FUNC_5(VAR_1|VAR_2, &VAR_4, ((void*)0), &VAR_5);
    FUNC_4(VAR_3, "got %u\n", FUNC_0());
    FUNC_4(VAR_4, "expected count > 0\n");
    FUNC_4(VAR_5, "expected size > 0\n");

    VAR_4 = 0;
    VAR_6 = FUNC_2(FUNC_1(), VAR_0, VAR_5 * sizeof(WCHAR));
    VAR_3 = FUNC_5(VAR_1|VAR_2, &VAR_4, VAR_6, &VAR_5);
    FUNC_4(VAR_3, "got %u\n", FUNC_0());
    FUNC_4(VAR_4, "expected count > 0\n");
    FUNC_3(FUNC_1(), 0, VAR_6);
}
