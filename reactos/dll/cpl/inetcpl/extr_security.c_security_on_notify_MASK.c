
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int secdlg_data ;
typedef int WPARAM ;
struct TYPE_3__ {int code; int hwndFrom; } ;
struct TYPE_4__ {int uNewState; TYPE_1__ hdr; int iItem; } ;
typedef TYPE_2__ NMLISTVIEW ;
typedef scalar_t__ LPARAM ;
typedef int INT_PTR ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,int ,scalar_t__,int ,int,...) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static INT_PTR FUNC_2(secdlg_data *VAR_2, WPARAM VAR_3, LPARAM VAR_4)
{
    NMLISTVIEW *VAR_5;

    VAR_5 = (NMLISTVIEW *) VAR_4;
    switch (VAR_5->hdr.code)
    {
        case 129:
            FUNC_0("LVN_ITEMCHANGED (0x%lx, 0x%lx) from %p with code: %d (item: %d, uNewState: %u)\n",
                    VAR_3, VAR_4, VAR_5->hdr.hwndFrom, VAR_5->hdr.code, VAR_5->iItem, VAR_5->uNewState);
            if ((VAR_5->uNewState & VAR_1) == VAR_1) {
                FUNC_1(VAR_2, VAR_5->iItem);
            }
            break;

        case 128:
            FUNC_0("PSN_APPLY (0x%lx, 0x%lx) from %p with code: %d\n", VAR_3, VAR_4,
                    VAR_5->hdr.hwndFrom, VAR_5->hdr.code);
            break;

        default:
            FUNC_0("WM_NOTIFY (0x%lx, 0x%lx) from %p with code: %d\n", VAR_3, VAR_4,
                    VAR_5->hdr.hwndFrom, VAR_5->hdr.code);

    }
    return VAR_0;
}
