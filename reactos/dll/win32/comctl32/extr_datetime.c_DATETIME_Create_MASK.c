
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int hwndParent; int style; } ;
struct TYPE_9__ {int nrFieldsAllocated; int select; int hFont; void* dateValid; int date; int hwndSelf; int hMonthCal; void* bDropdownEnabled; int hwndNotify; void* buflen; void* fieldRect; void* fieldspec; int dwStyle; } ;
struct TYPE_8__ {int member_1; int member_0; } ;
typedef TYPE_1__ STYLESTRUCT ;
typedef int RECT ;
typedef int LRESULT ;
typedef int HWND ;
typedef int DWORD_PTR ;
typedef TYPE_2__ DATETIME_INFO ;
typedef TYPE_3__ CREATESTRUCTW ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static LRESULT
FUNC_7 (HWND VAR_7, const CREATESTRUCTW *VAR_8)
{
    DATETIME_INFO *VAR_9 = FUNC_0 (sizeof(DATETIME_INFO));
    STYLESTRUCT VAR_10 = { 0, VAR_8->style };

    if (!VAR_9) return -1;

    VAR_9->hwndSelf = VAR_7;
    VAR_9->dwStyle = VAR_8->style;

    VAR_9->nrFieldsAllocated = 32;
    VAR_9->fieldspec = FUNC_0 (VAR_9->nrFieldsAllocated * sizeof(int));
    VAR_9->fieldRect = FUNC_0 (VAR_9->nrFieldsAllocated * sizeof(RECT));
    VAR_9->buflen = FUNC_0 (VAR_9->nrFieldsAllocated * sizeof(int));
    VAR_9->hwndNotify = VAR_8->hwndParent;
    VAR_9->select = -1;
    VAR_9->bDropdownEnabled = VAR_3;

    FUNC_3(VAR_9, VAR_1, &VAR_10);
    FUNC_2 (VAR_9, 0);


    VAR_9->hMonthCal = FUNC_1 (0, VAR_2, 0, VAR_4 | VAR_6 | VAR_5,
       0, 0, 0, 0, VAR_9->hwndSelf, 0, 0, 0);


    FUNC_4 (&VAR_9->date);
    VAR_9->dateValid = VAR_3;
    VAR_9->hFont = FUNC_5(VAR_0);

    FUNC_6 (VAR_7, 0, (DWORD_PTR)VAR_9);

    return 0;
}
