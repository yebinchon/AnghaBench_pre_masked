
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
typedef int **** WCHAR ;
typedef size_t UINT ;
struct TYPE_5__ {scalar_t__ lParam; } ;
struct TYPE_4__ {int nFlowControlIndex; int nStopBitsIndex; int nParityIndex; int nDataBitsIndex; int nBaudRateIndex; } ;
typedef TYPE_1__* PPORT_DATA ;
typedef TYPE_2__* LPPROPSHEETPAGEW ;
typedef scalar_t__ LPARAM ;
typedef int LONG_PTR ;
typedef scalar_t__ HWND ;
typedef int BOOL ;


 size_t FUNC_0 (int *****) ;
 int ***** VAR_0 ;
 int FUNC_1 (scalar_t__,int ****) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int ***** VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,int *****) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ,int *****,size_t) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (char*) ;
 int VAR_13 ;
 int FUNC_11 (int ****,int *****,int) ;
 int VAR_14 ;

__attribute__((used)) static
BOOL
FUNC_12(
    HWND VAR_15,
    WPARAM VAR_16,
    LPARAM VAR_17)
{
    PPORT_DATA VAR_18;
    WCHAR VAR_19[256];
    UINT VAR_20;
    HWND VAR_21;

    FUNC_10("OnInitDialog()\n");

    VAR_18 = (PPORT_DATA)((LPPROPSHEETPAGEW)VAR_17)->lParam;
    if (VAR_18 == ((void*)0))
    {
        FUNC_3("pPortData is NULL\n");
        return VAR_3;
    }

    FUNC_9(VAR_15, VAR_1, (LONG_PTR)VAR_18);


    FUNC_8(VAR_18);


    VAR_21 = FUNC_6(VAR_15, VAR_5);
    if (VAR_21)
    {
        for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_0); VAR_20++)
        {
            FUNC_11(VAR_0[VAR_20], VAR_19, 10);
            FUNC_1(VAR_21, VAR_19);
        }

        FUNC_2(VAR_21, VAR_18->nBaudRateIndex);
    }


    VAR_21 = FUNC_6(VAR_15, VAR_6);
    if (VAR_21)
    {
        for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_2); VAR_20++)
        {
            FUNC_1(VAR_21, VAR_2[VAR_20]);
        }

        FUNC_2(VAR_21, VAR_18->nDataBitsIndex);
    }


    FUNC_7(VAR_14, VAR_11, VAR_19, FUNC_0(VAR_19));

    VAR_21 = FUNC_6(VAR_15, VAR_8);
    if (VAR_21)
    {
        FUNC_5(VAR_21, VAR_19);
        FUNC_2(VAR_21, VAR_18->nParityIndex);
    }


    FUNC_7(VAR_14, VAR_12, VAR_19, FUNC_0(VAR_19));

    VAR_21 = FUNC_6(VAR_15, VAR_9);
    if (VAR_21)
    {
        FUNC_5(VAR_21, VAR_19);
        FUNC_2(VAR_21, VAR_18->nStopBitsIndex);
    }


    FUNC_7(VAR_14, VAR_10, VAR_19, FUNC_0(VAR_19));

    VAR_21 = FUNC_6(VAR_15, VAR_7);
    if (VAR_21)
    {
        FUNC_5(VAR_21, VAR_19);
        FUNC_2(VAR_21, VAR_18->nFlowControlIndex);
    }


    VAR_21 = FUNC_6(VAR_15, VAR_4);
    if (VAR_21)
        FUNC_4(VAR_21, VAR_3);

    return VAR_13;
}
