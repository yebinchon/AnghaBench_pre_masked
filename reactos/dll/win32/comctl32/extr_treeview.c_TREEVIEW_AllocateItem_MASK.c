
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_9__ {int items; } ;
struct TYPE_8__ {TYPE_2__ const* infoPtr; scalar_t__ iExpandedImage; scalar_t__ iSelectedImage; scalar_t__ iImage; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static TREEVIEW_ITEM *
FUNC_3(const TREEVIEW_INFO *VAR_2)
{
    TREEVIEW_ITEM *VAR_3 = FUNC_1(sizeof(*VAR_3));

    if (!VAR_3)
 return ((void*)0);





    VAR_3->iImage = 0;
    VAR_3->iSelectedImage = 0;
    VAR_3->iExpandedImage = (WORD)VAR_1;
    VAR_3->infoPtr = VAR_2;

    if (FUNC_0(VAR_2->items, VAR_0, VAR_3) == -1)
    {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
