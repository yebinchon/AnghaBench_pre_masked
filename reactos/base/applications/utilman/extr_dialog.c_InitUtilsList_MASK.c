
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* szResource; scalar_t__ bState; int lpProgram; int uNameId; } ;
typedef TYPE_1__ WCHAR ;
typedef int VOID ;
typedef size_t UINT ;
struct TYPE_9__ {int hListDlg; int szNotRunning; int szRunning; int hInstance; } ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,TYPE_1__*,size_t) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,size_t,int ,TYPE_1__*) ;
 size_t FUNC_4 (TYPE_1__*) ;

VOID FUNC_5(BOOL VAR_8)
{
    UINT VAR_9;

    if (!VAR_8)
    {




        for (VAR_9 = 0; VAR_9 < FUNC_4(VAR_0); ++VAR_9)
        {
            FUNC_1(VAR_2.hInstance, VAR_0[VAR_9].uNameId,
                        VAR_0[VAR_9].szResource, FUNC_4(VAR_0[VAR_9].szResource));

            VAR_0[VAR_9].bState = VAR_1;
        }
    }
    else
    {
        INT VAR_10;
        BOOL VAR_11;
        WCHAR VAR_12[VAR_7];


        FUNC_2(VAR_2.hListDlg, VAR_5, 0, 0);


        for (VAR_9 = 0; VAR_9 < FUNC_4(VAR_0); ++VAR_9)
        {
            VAR_11 = FUNC_0(VAR_0[VAR_9].lpProgram);
            VAR_0[VAR_9].bState = VAR_11;


            FUNC_3(VAR_12, FUNC_4(VAR_12),
                             (VAR_11 ? VAR_2.szRunning : VAR_2.szNotRunning),
                             VAR_0[VAR_9].szResource);


            VAR_10 = (INT)FUNC_2(VAR_2.hListDlg, VAR_3, 0, (LPARAM)VAR_12);
            if (VAR_10 != VAR_4)
                FUNC_2(VAR_2.hListDlg, VAR_6, VAR_10, (LPARAM)&VAR_0[VAR_9]);
        }
    }
}
