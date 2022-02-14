
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nItemHeight; scalar_t__ nMeasureItemHeight; int hwndNotify; int hwndSelf; } ;
struct TYPE_4__ {int itemID; scalar_t__ itemHeight; int CtlID; scalar_t__ itemData; scalar_t__ itemWidth; int CtlType; } ;
typedef TYPE_1__ MEASUREITEMSTRUCT ;
typedef int LPARAM ;
typedef TYPE_2__ LISTVIEW_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static BOOL FUNC_3(LISTVIEW_INFO *VAR_5)
{
    MEASUREITEMSTRUCT VAR_6;
    VAR_6.CtlType = VAR_2;
    VAR_6.CtlID = FUNC_0(VAR_5->hwndSelf, VAR_1);
    VAR_6.itemID = -1;
    VAR_6.itemWidth = 0;
    VAR_6.itemData = 0;
    VAR_6.itemHeight= VAR_5->nItemHeight;
    FUNC_1(VAR_5->hwndNotify, VAR_4, VAR_6.CtlID, (LPARAM)&VAR_6);
    if (VAR_5->nItemHeight != FUNC_2(VAR_6.itemHeight, 1))
    {
        VAR_5->nMeasureItemHeight = VAR_5->nItemHeight = FUNC_2(VAR_6.itemHeight, 1);
        return VAR_3;
    }
    return VAR_0;
}
