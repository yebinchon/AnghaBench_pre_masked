
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int ULONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_2 (int,char*,int ,int ,int ,...) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    ULONGLONG VAR_4;
    BOOL VAR_5;
    int VAR_6;

    if (!&FUNC_3)
    {
        FUNC_5("ApphelpCheckShellObject not available\n");
        return;
    }

    for (VAR_6 = 0; VAR_3[VAR_6]; VAR_6++)
    {
        VAR_4 = 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_5 = FUNC_3(VAR_3[VAR_6], VAR_0, &VAR_4);
        FUNC_2(VAR_5 && (VAR_4 == 0), "%s 0: got %d and 0x%x%08x with 0x%x (expected TRUE and 0)\n",
            FUNC_6(VAR_3[VAR_6]), VAR_5, (ULONG)(VAR_4 >> 32), (ULONG)VAR_4, FUNC_0());

        VAR_4 = 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_5 = FUNC_3(VAR_3[VAR_6], VAR_2, &VAR_4);
        FUNC_2(VAR_5 && (VAR_4 == 0), "%s 1: got %d and 0x%x%08x with 0x%x (expected TRUE and 0)\n",
            FUNC_6(VAR_3[VAR_6]), VAR_5, (ULONG)(VAR_4 >> 32), (ULONG)VAR_4, FUNC_0());

    }


    FUNC_1(0xdeadbeef);
    VAR_5 = FUNC_3(&VAR_1, VAR_0, ((void*)0));
    FUNC_2(VAR_5, "%s 0: got %d with 0x%x (expected != FALSE)\n", FUNC_6(&VAR_1), VAR_5, FUNC_0());


    if (0)
    {
        VAR_4 = 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_5 = FUNC_3(((void*)0), VAR_0, &VAR_4);
        FUNC_4("NULL as CLSID*: got %d and 0x%x%08x with 0x%x\n", VAR_5, (ULONG)(VAR_4 >> 32), (ULONG)VAR_4, FUNC_0());
    }
}
