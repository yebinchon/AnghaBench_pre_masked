
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int docInfo ;
typedef int WCHAR ;
struct TYPE_3__ {char* pDocName; } ;
typedef int LPBYTE ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DOC_INFO_1W ;
typedef int Buffer ;
typedef int BYTE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,scalar_t__*,int *) ;
 int FUNC_8 (scalar_t__,int *,scalar_t__,scalar_t__*,int *) ;
 int FUNC_9 (scalar_t__,int,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int *,scalar_t__,scalar_t__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 scalar_t__ FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (char*,int ) ;

int FUNC_16(int VAR_4, WCHAR* VAR_5[])
{
    int VAR_6 = 1;
    DWORD VAR_7;
    DWORD VAR_8, VAR_9;
    HANDLE VAR_10 = VAR_2;
    HANDLE VAR_11 = ((void*)0);
    DOC_INFO_1W VAR_12;
    BYTE VAR_13[4096];

    if (VAR_4 <= 1)
    {
        FUNC_11(VAR_5[0]);
        return 0;
    }

    VAR_10 = FUNC_2(VAR_5[1], VAR_0, 0, ((void*)0), VAR_3, 0, ((void*)0));
    if (VAR_10 == VAR_2)
    {
        FUNC_15("CreateFileW failed, last error is %lu!\n", FUNC_6());
        goto Cleanup;
    }

    VAR_7 = FUNC_5(VAR_10, ((void*)0));
    if (VAR_7 == VAR_1)
    {
        FUNC_15("File is too big, or GetFileSize failed; last error is %lu!\n", FUNC_6());
        goto Cleanup;
    }

    if (!FUNC_7(L"Dummy Printer On LPT1", &VAR_11, ((void*)0)))
    {
        FUNC_15("OpenPrinterW failed, last error is %lu!\n", FUNC_6());
        goto Cleanup;
    }


    FUNC_13(&VAR_12, sizeof(VAR_12));
    VAR_12.pDocName = L"winspool_print";

    if (!FUNC_9(VAR_11, 1, (LPBYTE)&VAR_12))
    {
        FUNC_15("StartDocPrinterW failed, last error is %lu!\n", FUNC_6());
        goto Cleanup;
    }

    if (!FUNC_10(VAR_11))
    {
        FUNC_15("StartPagePrinter failed, last error is %lu!\n", FUNC_6());
        goto Cleanup;
    }

    while (VAR_7 > 0)
    {
        VAR_8 = FUNC_14(sizeof(VAR_13), VAR_7);
        if (!FUNC_8(VAR_10, VAR_13, VAR_8, &VAR_8, ((void*)0)))
        {
            FUNC_15("ReadFile failed, last error is %lu!\n", FUNC_6());
            goto Cleanup;
        }
        VAR_7 -= VAR_8;

        if (!FUNC_12(VAR_11, VAR_13, VAR_8, &VAR_9))
        {
            FUNC_15("WritePrinter failed, last error is %lu!\n", FUNC_6());
            goto Cleanup;
        }
    }

    if (!FUNC_4(VAR_11))
    {
        FUNC_15("EndPagePrinter failed, last error is %lu!\n", FUNC_6());
        goto Cleanup;
    }

    if (!FUNC_3(VAR_11))
    {
        FUNC_15("EndDocPrinter failed, last error is %lu!\n", FUNC_6());
        goto Cleanup;
    }

    VAR_6 = 0;

Cleanup:
    if (VAR_11)
        FUNC_1(VAR_11);

    if (VAR_10 != VAR_2)
        FUNC_0(VAR_10);

    return VAR_6;
}
