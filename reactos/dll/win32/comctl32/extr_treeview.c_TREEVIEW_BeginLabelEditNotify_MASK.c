
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pszText; } ;
struct TYPE_8__ {TYPE_4__ item; int hdr; } ;
struct TYPE_7__ {int bNtfUnicode; } ;
typedef int TREEVIEW_ITEM ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef TYPE_2__ NMTVDISPINFOW ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__ const*,int ,int *) ;
 int FUNC_1 (TYPE_1__ const*,int,TYPE_4__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static BOOL
FUNC_3(const TREEVIEW_INFO *VAR_5, TREEVIEW_ITEM *VAR_6)
{
    NMTVDISPINFOW VAR_7;
    BOOL VAR_8;

    FUNC_1(VAR_5, VAR_0 | VAR_2 | VAR_1 | VAR_3,
                            &VAR_7.item, VAR_6);

    VAR_8 = FUNC_0(VAR_5, VAR_4, &VAR_7.hdr);

    if (!VAR_5->bNtfUnicode)
        FUNC_2(VAR_7.item.pszText);

    return VAR_8;
}
