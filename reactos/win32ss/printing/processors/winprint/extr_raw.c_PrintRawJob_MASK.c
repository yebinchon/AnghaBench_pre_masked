
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pOutputFile; int pDocName; int pDatatype; } ;
struct TYPE_4__ {int pwszOutputFile; int pwszDocumentName; int pwszDatatype; int pwszPrinterPort; } ;
typedef int PWSTR ;
typedef TYPE_1__* PWINPRINT_HANDLE ;
typedef int * PBYTE ;
typedef int * HANDLE ;
typedef int DWORD ;
typedef TYPE_2__ DOC_INFO_1W ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int **,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int const,int*) ;
 int FUNC_8 (int *,int,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int *,int *,int,int*) ;

DWORD
FUNC_10(PWINPRINT_HANDLE VAR_4, PWSTR VAR_5)
{

    const DWORD VAR_6 = 262144;

    BOOL VAR_7 = VAR_2;
    DOC_INFO_1W VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;
    HANDLE VAR_12;
    HANDLE VAR_13 = ((void*)0);
    PBYTE VAR_14 = ((void*)0);


    if (!FUNC_6(VAR_5, &VAR_12, ((void*)0)))
    {
        VAR_11 = FUNC_5();
        FUNC_3("OpenPrinterW failed for \"%S\" with error %lu!\n", VAR_5, FUNC_5());
        goto Cleanup;
    }


    if (!FUNC_6(VAR_4->pwszPrinterPort, &VAR_13, ((void*)0)))
    {
        VAR_11 = FUNC_5();
        FUNC_3("OpenPrinterW failed for \"%S\" with error %lu!\n", VAR_4->pwszPrinterPort, FUNC_5());
        goto Cleanup;
    }


    VAR_8 = VAR_4->pwszDatatype;
    VAR_8 = VAR_4->pwszDocumentName;
    VAR_8 = VAR_4->pwszOutputFile;


    if (!FUNC_8(VAR_13, 1, (PBYTE)&VAR_8))
    {
        VAR_11 = FUNC_5();
        FUNC_3("StartDocPrinterW failed with error %lu!\n", FUNC_5());
        goto Cleanup;
    }

    VAR_7 = VAR_3;


    VAR_14 = FUNC_1(VAR_6);
    if (!VAR_14)
    {
        VAR_11 = VAR_0;
        FUNC_3("DllAllocSplMem failed with error %lu!\n", FUNC_5());
        goto Cleanup;
    }


    while (FUNC_7(VAR_12, VAR_14, VAR_6, &VAR_9) && VAR_9)
    {

        FUNC_9(VAR_13, VAR_14, VAR_9, &VAR_10);
    }

    VAR_11 = VAR_1;

Cleanup:
    if (VAR_14)
        FUNC_2(VAR_14);

    if (VAR_7)
        FUNC_4(VAR_13);

    if (VAR_13)
        FUNC_0(VAR_13);

    if (VAR_12)
        FUNC_0(VAR_12);

    return VAR_11;
}
