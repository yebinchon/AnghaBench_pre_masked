
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int ULONG ;
typedef size_t UINT ;
typedef int BOOLEAN ;


 size_t FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 () ;

 int FUNC_2 (int) ;
 int* VAR_5 ;
 int FUNC_3 (int,char*,int,...) ;
 int FUNC_4 (int,char*,int*) ;
 int FUNC_5 (char*,int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    char VAR_6[256];
    ULONG VAR_7;
    BOOLEAN VAR_8;
    UINT VAR_9;

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
        VAR_7 = 0;
        FUNC_2(0xdeadbeef);
        VAR_8 = FUNC_4(VAR_5[VAR_9], ((void*)0), &VAR_7);
        FUNC_3(!VAR_8, "GetComputerObjectName(%u) should fail\n", VAR_5[VAR_9]);
        switch (VAR_5[VAR_9])
        {
        case 128:
            FUNC_3(FUNC_1() == VAR_2, "%u: got %u\n", VAR_5[VAR_9], FUNC_1());
            break;
        default:
            FUNC_3(FUNC_1() == VAR_3 ||
               FUNC_1() == VAR_4 ||
               FUNC_1() == VAR_0 ||
               FUNC_1() == VAR_1,
               "%u: got %u\n", VAR_5[VAR_9], FUNC_1());
            break;
        }

        if (FUNC_1() != VAR_1) continue;

        VAR_7 = sizeof(VAR_6);
        FUNC_2(0xdeadbeef);
        VAR_8 = FUNC_4(VAR_5[VAR_9], VAR_6, &VAR_7);
        switch (VAR_5[VAR_9])
        {
        case 128:
            FUNC_3(!VAR_8, "GetComputerObjectName(%u) should fail\n", VAR_5[VAR_9]);
            FUNC_3(FUNC_1() == VAR_2, "%u: got %u\n", VAR_5[VAR_9], FUNC_1());
            break;
        default:
            FUNC_3(VAR_8, "GetComputerObjectName(%u) error %u\n", VAR_5[VAR_9], FUNC_1());
            FUNC_5("GetComputerObjectName(%u) returned %s\n", VAR_5[VAR_9], VAR_6);
            break;
        }
    }
}
