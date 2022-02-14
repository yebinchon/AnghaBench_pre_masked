
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tConfig ;
typedef int WINDOWPLACEMENT ;
typedef int WCHAR ;
struct TYPE_9__ {int length; } ;
struct TYPE_8__ {int hTreeWnd; int nSplitPos; int hListWnd; } ;
struct TYPE_7__ {int bottom; int right; } ;
struct TYPE_6__ {TYPE_4__ tPlacement; int TreeViewSize; int DataColumnSize; int TypeColumnSize; int NameColumnSize; scalar_t__ StatusBarVisible; } ;
typedef TYPE_1__ RegistryBinaryConfig ;
typedef TYPE_2__ RECT ;
typedef int LPBYTE ;
typedef int * HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,int ,char*,int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ,int **) ;
 scalar_t__ FUNC_8 (int *,char*,int *,int *,int ,int*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,TYPE_4__*) ;
 int FUNC_12 (int ,int ) ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

extern void FUNC_13(void)
{
    HKEY VAR_17 = ((void*)0);
    WCHAR VAR_18[VAR_5];

    if (FUNC_7(VAR_2, VAR_13, &VAR_17) == VAR_0)
    {
        RegistryBinaryConfig VAR_19;
        DWORD VAR_20 = sizeof(VAR_19);
        BOOL VAR_21 = VAR_1;

        if (FUNC_8(VAR_17, L"View", ((void*)0), ((void*)0), (LPBYTE)&VAR_19, &VAR_20) == VAR_0)
        {
            if (VAR_20 == sizeof(VAR_19))
            {
                RECT VAR_22;


                FUNC_1(FUNC_3(VAR_15, VAR_3), VAR_4, VAR_6 | (VAR_19.StatusBarVisible ? VAR_7 : VAR_8));
                FUNC_12(VAR_16, (VAR_19.StatusBarVisible ? VAR_10 : VAR_9));


                (void)FUNC_4(VAR_12->hListWnd, 0, VAR_19.NameColumnSize);
                (void)FUNC_4(VAR_12->hListWnd, 1, VAR_19.TypeColumnSize);
                (void)FUNC_4(VAR_12->hListWnd, 2, VAR_19.DataColumnSize);


                FUNC_2(VAR_14, &VAR_22);
                VAR_12->nSplitPos = VAR_19.TreeViewSize;
                FUNC_9(VAR_22.right, VAR_22.bottom);


                VAR_19.tPlacement.length = sizeof(WINDOWPLACEMENT);
                VAR_21 = FUNC_11(VAR_14, &VAR_19.tPlacement);
            }
        }


        if (!VAR_21)
            FUNC_12(VAR_14, VAR_11);


        if (FUNC_5(VAR_2, VAR_13, L"LastKey", VAR_18, FUNC_0(VAR_18)) == VAR_0)
        {
            FUNC_10(VAR_12->hTreeWnd, VAR_18);
        }

        FUNC_6(VAR_17);
    }
    else
    {

        FUNC_12(VAR_14, VAR_11);
    }
}
