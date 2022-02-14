
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t ULONG ;
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
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int* VAR_6 ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (int,int*,size_t*) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static void FUNC_8(void)
{
    WCHAR VAR_7[256];
    ULONG VAR_8;
    BOOLEAN VAR_9;
    UINT VAR_10;

    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++) {
        VAR_8 = 0;
        FUNC_2(0xdeadbeef);
        VAR_9 = FUNC_5(VAR_6[VAR_10], ((void*)0), &VAR_8);
        FUNC_4(!VAR_9 || FUNC_3(VAR_9) , "GetComputerObjectName(%u) should fail\n", VAR_6[VAR_10]);
        switch (VAR_6[VAR_10])
        {
        case 128:
            FUNC_4(FUNC_1() == VAR_2, "%u: got %u\n", VAR_6[VAR_10], FUNC_1());
            break;
        default:
            FUNC_4(FUNC_1() == VAR_3 ||
               FUNC_1() == VAR_4 ||
               FUNC_1() == VAR_0 ||
               FUNC_1() == VAR_5 ||
               FUNC_1() == VAR_1,
               "%u: got %u\n", VAR_6[VAR_10], FUNC_1());
            break;
        }

        if (FUNC_1() != VAR_1) continue;

        VAR_8 = FUNC_0(VAR_7);
        FUNC_2(0xdeadbeef);
        VAR_9 = FUNC_5(VAR_6[VAR_10], VAR_7, &VAR_8);
        switch (VAR_6[VAR_10])
        {
        case 128:
            FUNC_4(!VAR_9, "GetComputerObjectName(%u) should fail\n", VAR_6[VAR_10]);
            FUNC_4(FUNC_1() == VAR_2, "%u: got %u\n", VAR_6[VAR_10], FUNC_1());
            break;
        default:
            FUNC_4(VAR_9, "GetComputerObjectName(%u) error %u\n", VAR_6[VAR_10], FUNC_1());
            FUNC_6("GetComputerObjectName(%u) returned %s\n", VAR_6[VAR_10], FUNC_7(VAR_7));
            break;
        }
    }
}
