
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pDriverName; int * pPrinterName; } ;
typedef TYPE_1__ PRINTER_INFO_2A ;
typedef int INT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int,int *,int,int*) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int,scalar_t__*,int *) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int FUNC_8 (int,char*,...) ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__,int,int *,int ,int*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int *) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static void FUNC_13(void)
{
    HANDLE VAR_6;
    BOOL VAR_7;
    BYTE *VAR_8;
    INT VAR_9;
    DWORD VAR_10, VAR_11;

    if (!VAR_4)
    {
        FUNC_10("There is no default printer installed\n");
        return;
    }

    VAR_6 = 0;
    VAR_7 = FUNC_6(VAR_4, &VAR_6, ((void*)0));
    if (!VAR_7)
    {
        FUNC_10("Unable to open the default printer (%s)\n", VAR_4);
        return;
    }
    FUNC_8(VAR_6 != 0, "wrong hprn %p\n", VAR_6);

    for (VAR_9 = 1; VAR_9 <= 9; VAR_9++)
    {
        FUNC_7(0xdeadbeef);
        VAR_10 = (DWORD)-1;
        VAR_7 = FUNC_2(VAR_6, VAR_9, ((void*)0), 0, &VAR_10);
        if (VAR_7)
        {
            FUNC_12("Level %d is not supported on Win9x/WinMe\n", VAR_9);
            FUNC_8(FUNC_1() == VAR_3, "wrong error %d\n", FUNC_1());
            FUNC_8(VAR_10 == 0,"Expected 0, got %d\n", VAR_10);
            continue;
        }
        FUNC_8(!VAR_7, "level %d: GetPrinter should fail\n", VAR_9);

        if (FUNC_1() == VAR_1 ||
            FUNC_1() == VAR_2 )
        {
            FUNC_10("Level %d not supported\n", VAR_9);
            continue;
        }
        FUNC_8(FUNC_1() == VAR_0, "wrong error %d\n", FUNC_1());
        FUNC_8(VAR_10 > 0,"not expected needed buffer size %d\n", VAR_10);


        if (!VAR_5 && !VAR_7 && &FUNC_9 && VAR_9 != 6 && VAR_9 != 7)
        {
            DWORD VAR_12;
            VAR_7 = FUNC_9(VAR_6, VAR_9, ((void*)0), 0, &VAR_12);
            FUNC_8(!VAR_7, "level %d: GetPrinter error %d\n", VAR_9, FUNC_1());
            FUNC_8(VAR_12 == VAR_10, "level %d: GetPrinterA returned different size %d than GetPrinterW (%d)\n", VAR_9, VAR_10, VAR_12);
        }

        VAR_8 = FUNC_4(FUNC_3(), 0, VAR_10);

        FUNC_7(0xdeadbeef);
        VAR_11 = -1;
        VAR_7 = FUNC_2(VAR_6, VAR_9, VAR_8, VAR_10, &VAR_11);
        FUNC_8(VAR_7, "level %d: GetPrinter error %d\n", VAR_9, FUNC_1());
        FUNC_8(VAR_10 == VAR_11, "needed %d != filled %d\n", VAR_10, VAR_11);

        if (VAR_9 == 2)
        {
            PRINTER_INFO_2A *VAR_13 = (PRINTER_INFO_2A *)VAR_8;

            FUNC_8(VAR_13->pPrinterName!= ((void*)0), "not expected NULL ptr\n");
            FUNC_8(VAR_13->pDriverName!= ((void*)0), "not expected NULL ptr\n");

            FUNC_11("pPrinterName %s\n", VAR_13->pPrinterName);
            FUNC_11("pDriverName %s\n", VAR_13->pDriverName);
        }

        FUNC_5(FUNC_3(), 0, VAR_8);
    }

    FUNC_7(0xdeadbeef);
    VAR_7 = FUNC_0(VAR_6);
    FUNC_8(VAR_7, "ClosePrinter error %d\n", FUNC_1());
}
