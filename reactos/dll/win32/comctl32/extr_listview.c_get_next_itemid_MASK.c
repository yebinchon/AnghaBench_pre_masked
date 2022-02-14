
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_5__ {int hdpaItemIds; } ;
typedef TYPE_1__ LISTVIEW_INFO ;
typedef TYPE_2__ ITEM_ID ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static DWORD FUNC_2(const LISTVIEW_INFO *VAR_0)
{
    INT VAR_1 = FUNC_1(VAR_0->hdpaItemIds);

    if (VAR_1 > 0)
    {
        ITEM_ID *VAR_2 = FUNC_0(VAR_0->hdpaItemIds, VAR_1 - 1);
        return VAR_2->id + 1;
    }
    return 0;
}
