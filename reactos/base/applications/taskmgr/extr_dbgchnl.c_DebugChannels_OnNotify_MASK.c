
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
struct cce_user {int* name; unsigned int value; unsigned int mask; int notdone; int done; } ;
typedef int name ;
typedef int WCHAR ;
struct TYPE_6__ {int iSubItem; int iItem; int pt; } ;
struct TYPE_5__ {int code; int idFrom; } ;
struct TYPE_4__ {int iSubItem; int ptAction; } ;
typedef TYPE_1__ NMITEMACTIVATE ;
typedef TYPE_2__ NMHDR ;
typedef TYPE_3__ LVHITTESTINFO ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,int ,int*) ;

 int FUNC_5 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,struct cce_user*,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(HWND VAR_7, LPARAM VAR_8)
{
    NMHDR* VAR_9 = (NMHDR*)VAR_8;

    switch (VAR_9->code)
    {
    case 128:
        if (VAR_9->idFrom == VAR_1)
        {
            LVHITTESTINFO VAR_10;
            HWND VAR_11;
            HANDLE VAR_12;
            NMITEMACTIVATE* VAR_13 = (NMITEMACTIVATE*)VAR_8;

            VAR_12 = FUNC_5(VAR_3 | VAR_4 | VAR_5, VAR_0, FUNC_2());
            if (!VAR_12) return;
            VAR_10.pt = VAR_13->ptAction;
            VAR_11 = FUNC_1(VAR_7, VAR_1);
            FUNC_6(VAR_11, VAR_2, 0, (LPARAM)&VAR_10);
            if (VAR_13->iSubItem >= 1 && VAR_13->iSubItem <= 4)
            {
                WCHAR VAR_14[2];
                WCHAR VAR_15[32];
                unsigned VAR_16 = 1 << (VAR_10.iSubItem - 1);
                struct cce_user VAR_17;

                FUNC_3(VAR_11, VAR_10.iItem, 0, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
                FUNC_3(VAR_11, VAR_10.iItem, VAR_10.iSubItem, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
                VAR_17.name = VAR_15;
                VAR_17.value = (VAR_14[0] == L'x') ? 0 : VAR_16;
                VAR_17.mask = VAR_16;
                VAR_17.done = VAR_17.notdone = 0;
                FUNC_7(VAR_12, VAR_6, &VAR_17, VAR_0);
                if (VAR_17.done)
                {
                    VAR_14[0] ^= (L'x' ^ L' ');
                    FUNC_4(VAR_11, VAR_10.iItem, VAR_10.iSubItem, VAR_14);
                }
                if (VAR_17.notdone)
                    FUNC_8("Some channel instance weren't correctly set\n");
            }
            FUNC_0(VAR_12);
        }
        break;
    }
}
