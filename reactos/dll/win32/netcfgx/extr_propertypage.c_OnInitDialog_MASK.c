
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {scalar_t__ lParam; } ;
struct TYPE_5__ {size_t dwCount; scalar_t__ pCurrentParam; TYPE_1__* Array; } ;
struct TYPE_4__ {int * pszName; int * pszDescription; } ;
typedef int * PWSTR ;
typedef TYPE_2__* PPARAMETER_ARRAY ;
typedef scalar_t__ PPARAMETER ;
typedef TYPE_3__* LPPROPSHEETPAGEW ;
typedef scalar_t__ LPARAM ;
typedef int LONG_PTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;

__attribute__((used)) static
BOOL
FUNC_9(
    HWND VAR_5,
    WPARAM VAR_6,
    LPARAM VAR_7)
{
    PPARAMETER_ARRAY VAR_8;
    HWND VAR_9;
    PWSTR VAR_10;
    DWORD VAR_11;
    INT VAR_12;

    FUNC_8("OnInitDialog()\n");

    VAR_8 = (PPARAMETER_ARRAY)((LPPROPSHEETPAGEW)VAR_7)->lParam;
    if (VAR_8 == ((void*)0))
    {
        FUNC_1("pParamArray is NULL\n");
        return VAR_1;
    }

    FUNC_7(VAR_5, VAR_0, (LONG_PTR)VAR_8);

    VAR_9 = FUNC_2(VAR_5, VAR_2);
    if (VAR_9)
    {
        for (VAR_11 = 0; VAR_11 < VAR_8->dwCount; VAR_11++)
        {
            if (VAR_8->Array[VAR_11].pszDescription != ((void*)0))
                VAR_10 = VAR_8->Array[VAR_11].pszDescription;
            else
                VAR_10 = VAR_8->Array[VAR_11].pszName;

            VAR_12 = FUNC_3(VAR_9, VAR_10);
            if (VAR_12 != VAR_3)
                FUNC_6(VAR_9, VAR_12, (LPARAM)&VAR_8->Array[VAR_11]);
        }

        if (VAR_8->dwCount > 0)
        {
            FUNC_5(VAR_9, 0);
            VAR_8->pCurrentParam = (PPARAMETER)FUNC_4(VAR_9, 0);
            FUNC_0(VAR_5, VAR_8->pCurrentParam);
        }
    }

    return VAR_4;
}
