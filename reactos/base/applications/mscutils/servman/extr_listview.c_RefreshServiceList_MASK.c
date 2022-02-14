
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int lpDisplayName; } ;
struct TYPE_12__ {int mask; int iItem; scalar_t__ lParam; int pszText; } ;
struct TYPE_11__ {size_t NumServices; int hListView; TYPE_3__* pAllServices; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef TYPE_2__ LVITEMW ;
typedef scalar_t__ LPARAM ;
typedef scalar_t__ INT ;
typedef TYPE_3__ ENUM_SERVICE_STATUS_PROCESS ;
typedef size_t DWORD ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_2__*,int) ;

BOOL
FUNC_8(PMAIN_WND_INFO VAR_7)
{
    ENUM_SERVICE_STATUS_PROCESS *VAR_8;
    LVITEMW VAR_9;
    DWORD VAR_10;

    FUNC_4 (VAR_7->hListView,
                 VAR_6,
                 VAR_0,
                 0);

    (void)FUNC_2(VAR_7->hListView);

    if (FUNC_1(VAR_7))
    {
        for (VAR_10 = 0; VAR_10 < VAR_7->NumServices; VAR_10++)
        {
            INT VAR_11;

            VAR_8 = &VAR_7->pAllServices[VAR_10];


            FUNC_7(&VAR_9, sizeof(LVITEMW));
            VAR_9.mask = VAR_3 | VAR_2;
            VAR_9.pszText = VAR_8->lpDisplayName;


            VAR_9.lParam = (LPARAM)VAR_8;


            VAR_9.iItem = FUNC_3(VAR_7->hListView, &VAR_9);


            for (VAR_11 = VAR_1; VAR_11 <= VAR_4; VAR_11++)
            {
                FUNC_0(VAR_7, VAR_8, VAR_11);
            }
        }

        FUNC_6(VAR_7);
    }


    FUNC_5(VAR_7->hListView,
                 VAR_6,
                 VAR_5,
                 0);

    return VAR_5;
}
