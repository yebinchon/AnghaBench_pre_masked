
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int browse_info ;
struct TYPE_9__ {struct TYPE_9__* lpifq; struct TYPE_9__* lpi; scalar_t__ pEnumIL; int lpsfParent; } ;
struct TYPE_7__ {int lParam; } ;
struct TYPE_8__ {TYPE_1__ itemOld; } ;
typedef TYPE_2__ NMTREEVIEWW ;
typedef int LRESULT ;
typedef TYPE_3__* LPTV_ITEMDATA ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,TYPE_3__*) ;

__attribute__((used)) static LRESULT FUNC_4( browse_info *VAR_0, NMTREEVIEWW *VAR_1 )
{
    LPTV_ITEMDATA VAR_2 = (LPTV_ITEMDATA)VAR_1->itemOld.lParam;

    FUNC_3("TVN_DELETEITEMA/W %p\n", VAR_2);

    FUNC_1(VAR_2->lpsfParent);
    if (VAR_2->pEnumIL)
        FUNC_0(VAR_2->pEnumIL);
    FUNC_2(VAR_2->lpi);
    FUNC_2(VAR_2->lpifq);
    FUNC_2(VAR_2);
    return 0;
}
