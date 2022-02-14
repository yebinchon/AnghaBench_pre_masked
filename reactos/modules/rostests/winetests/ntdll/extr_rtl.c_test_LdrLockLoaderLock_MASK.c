
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,int*,int*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    ULONG_PTR VAR_4;
    ULONG VAR_5;
    NTSTATUS VAR_6;

    if (!&FUNC_1)
    {
        FUNC_3("LdrLockLoaderLock() is not available\n");
        return;
    }


    VAR_5 = 10;
    VAR_4 = 0xdeadbeef;
    VAR_6 = FUNC_1(0x10, &VAR_5, &VAR_4);
    FUNC_0(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);
    FUNC_0(VAR_5 == 0, "got %d\n", VAR_5);
    FUNC_0(VAR_4 == 0, "got %lx\n", VAR_4);

    VAR_4 = 0xdeadbeef;
    VAR_6 = FUNC_1(0x10, ((void*)0), &VAR_4);
    FUNC_0(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);
    FUNC_0(VAR_4 == 0, "got %lx\n", VAR_4);

    VAR_5 = 10;
    VAR_6 = FUNC_1(0x10, &VAR_5, ((void*)0));
    FUNC_0(VAR_6 == VAR_0, "got 0x%08x\n", VAR_6);
    FUNC_0(VAR_5 == 0, "got %d\n", VAR_5);


    VAR_4 = 0xdeadbeef;
    VAR_6 = FUNC_1(0x2, ((void*)0), &VAR_4);
    FUNC_0(VAR_6 == VAR_1, "got 0x%08x\n", VAR_6);
    FUNC_0(VAR_4 == 0, "got %lx\n", VAR_4);


    VAR_5 = 10;
    VAR_6 = FUNC_1(0, &VAR_5, ((void*)0));
    FUNC_0(VAR_6 == VAR_2, "got 0x%08x\n", VAR_6);
    FUNC_0(VAR_5 == 0, "got %d\n", VAR_5);


    VAR_5 = 0;
    VAR_4 = 0;
    VAR_6 = FUNC_1(0x2, &VAR_5, &VAR_4);
    FUNC_0(VAR_6 == VAR_3, "got 0x%08x\n", VAR_6);
    FUNC_0(VAR_5 == 1, "got %d\n", VAR_5);
    FUNC_0(VAR_4 != 0, "got %lx\n", VAR_4);
    FUNC_2(0, VAR_4);
}
