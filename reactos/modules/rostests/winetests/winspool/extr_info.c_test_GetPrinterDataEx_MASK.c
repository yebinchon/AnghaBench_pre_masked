
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int WCHAR ;
typedef int * LPBYTE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ CHAR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*,char,int) ;
 int FUNC_7 (int,char*,int,...) ;
 int FUNC_8 (int ,char*,int ,int*,int *,int,int*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    HANDLE VAR_5 = 0;
    DWORD VAR_6;
    DWORD VAR_7;
    CHAR VAR_8[VAR_1 + 1];
    DWORD VAR_9;
    DWORD VAR_10;


    if (!&FUNC_8) {
        FUNC_9("GetPrinterDataEx not found\n");
        return;
    }



    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_2(((void*)0), &VAR_5, ((void*)0));
    if (!VAR_6)
    {
        FUNC_9("Unable to open the printserver: %d\n", FUNC_1());
        return;
    }


    FUNC_6(VAR_8, '#', sizeof(VAR_8));
    VAR_8[VAR_1] = 0;
    VAR_7 = 0xdeadbeef;
    VAR_9 = 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_5, ((void*)0), VAR_3, &VAR_7,
                             (LPBYTE) VAR_8, sizeof(VAR_8), &VAR_9);

    VAR_10 = FUNC_5(VAR_8) + sizeof(CHAR);

    FUNC_7( !VAR_6 && (VAR_7 == VAR_2) && ((VAR_9 == VAR_10) || (VAR_9 == (VAR_10 * sizeof(WCHAR)))),
        "got %d, type %d, needed: %d and '%s' (expected ERROR_SUCCESS, REG_SZ and %d)\n",
        VAR_6, VAR_7, VAR_9, VAR_8, VAR_10);

    FUNC_6(VAR_8, '#', sizeof(VAR_8));
    VAR_8[VAR_1] = 0;
    VAR_7 = 0xdeadbeef;
    VAR_9 = 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_5, "", VAR_3, &VAR_7,
                             (LPBYTE) VAR_8, sizeof(VAR_8), &VAR_9);
    VAR_10 = FUNC_5(VAR_8) + sizeof(CHAR);
    FUNC_7( !VAR_6 && (VAR_7 == VAR_2) && ((VAR_9 == VAR_10) || (VAR_9 == (VAR_10 * sizeof(WCHAR)))),
        "got %d, type %d, needed: %d and '%s' (expected ERROR_SUCCESS, REG_SZ and %d)\n",
        VAR_6, VAR_7, VAR_9, VAR_8, VAR_10);

    FUNC_6(VAR_8, '#', sizeof(VAR_8));
    VAR_8[VAR_1] = 0;
    VAR_7 = 0xdeadbeef;
    VAR_9 = 0xdeadbeef;
    FUNC_3(0xdeadbeef);

    VAR_6 = FUNC_8(VAR_5, "PrinterDriverData", VAR_3,
                             &VAR_7, (LPBYTE) VAR_8, sizeof(VAR_8), &VAR_9);
    VAR_10 = FUNC_5(VAR_8) + sizeof(CHAR);
    FUNC_7( !VAR_6 && (VAR_7 == VAR_2) && ((VAR_9 == VAR_10) || (VAR_9 == (VAR_10 * sizeof(WCHAR)))),
        "got %d, type %d, needed: %d and '%s' (expected ERROR_SUCCESS, REG_SZ and %d)\n",
        VAR_6, VAR_7, VAR_9, VAR_8, VAR_10);


    FUNC_6(VAR_8, '#', sizeof(VAR_8));
    VAR_8[VAR_1] = 0;
    VAR_7 = 0xdeadbeef;
    VAR_9 = 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_8(VAR_5, VAR_4, VAR_3, &VAR_7,
                             (LPBYTE) VAR_8, sizeof(VAR_8), &VAR_9);
    VAR_10 = FUNC_5(VAR_8) + sizeof(CHAR);
    FUNC_7( !VAR_6 && (VAR_7 == VAR_2) && ((VAR_9 == VAR_10) || (VAR_9 == (VAR_10 * sizeof(WCHAR)))),
        "got %d, type %d, needed: %d and '%s' (expected ERROR_SUCCESS, REG_SZ and %d)\n",
        VAR_6, VAR_7, VAR_9, VAR_8, VAR_10);

    VAR_9 = 0xdeadbeef;
    FUNC_3(0xdeadbeef);


    VAR_6 = FUNC_8(VAR_5, ((void*)0), VAR_3, ((void*)0), ((void*)0), 0, &VAR_9);
    FUNC_7( ((VAR_6 == VAR_0) || FUNC_4(VAR_6 == 0xdeadbeef)) &&
        ((VAR_9 == VAR_10) || (VAR_9 == (VAR_10 * sizeof(WCHAR)))),
        "got %d, needed: %d (expected ERROR_MORE_DATA and %d)\n", VAR_6, VAR_9, VAR_10);

    VAR_9 = 0xdeadbeef;
    FUNC_3(0xdeaddead);
    VAR_6 = FUNC_8(VAR_5, ((void*)0), VAR_3, ((void*)0), ((void*)0), 0, &VAR_9);
    FUNC_7( ((VAR_6 == VAR_0) || FUNC_4(VAR_6 == 0xdeaddead)) &&
        ((VAR_9 == VAR_10) || (VAR_9 == (VAR_10 * sizeof(WCHAR)))),
        "got %d, needed: %d (expected ERROR_MORE_DATA and %d)\n", VAR_6, VAR_9, VAR_10);

    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_0(VAR_5);
    FUNC_7(VAR_6, "ClosePrinter error %d\n", FUNC_1());
}
