
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_32__ {int bRedraw; TYPE_1__* root; TYPE_1__* dropItem; TYPE_1__* insertMarkItem; TYPE_1__* selectedItem; TYPE_1__* firstVisible; } ;
struct TYPE_31__ {struct TYPE_31__* firstChild; struct TYPE_31__* parent; struct TYPE_31__* prevSibling; struct TYPE_31__* nextSibling; } ;
typedef TYPE_1__ TREEVIEW_ITEM ;
typedef TYPE_2__ TREEVIEW_INFO ;
typedef scalar_t__ LRESULT ;
typedef TYPE_1__* HTREEITEM ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static LRESULT
FUNC_15(TREEVIEW_INFO *VAR_5, HTREEITEM VAR_6)
{
    TREEVIEW_ITEM *VAR_7 = ((void*)0);
    TREEVIEW_ITEM *VAR_8 = ((void*)0);
    TREEVIEW_ITEM *VAR_9, *VAR_10 = ((void*)0);
    BOOL VAR_11 = VAR_0;

    if (VAR_6 == VAR_4 || !VAR_6)
    {
 FUNC_1("TVI_ROOT\n");
 VAR_9 = VAR_5->root;
 VAR_7 = ((void*)0);
 VAR_11 = VAR_1;
 FUNC_10(VAR_5);
    }
    else
    {
 if (!FUNC_13(VAR_5, VAR_6))
     return VAR_0;

 FUNC_1("%p (%s)\n", VAR_6, FUNC_7(VAR_6));
 VAR_9 = VAR_6->parent;

        if (FUNC_0(VAR_6))
        {
            VAR_10 = FUNC_3(VAR_5, VAR_6);
            VAR_11 = VAR_1;
        }

 if (VAR_5->selectedItem != ((void*)0)
     && (VAR_6 == VAR_5->selectedItem
  || FUNC_6(VAR_6, VAR_5->selectedItem)))
 {
     if (VAR_6->nextSibling)
  VAR_7 = VAR_6->nextSibling;
     else if (VAR_6->parent != VAR_5->root)
  VAR_7 = VAR_6->parent;
            else
                VAR_7 = VAR_6->prevSibling;
            FUNC_1("newSelection = %p\n", VAR_7);
 }

 if (VAR_5->firstVisible == VAR_6)
 {
     VAR_11 = VAR_1;
     if (VAR_6->nextSibling)
        VAR_8 = VAR_6->nextSibling;
     else if (VAR_6->prevSibling)
        VAR_8 = VAR_6->prevSibling;
     else if (VAR_6->parent != VAR_5->root)
        VAR_8 = VAR_6->parent;
     FUNC_11(VAR_5, ((void*)0), VAR_1);
 }
 else
     VAR_8 = VAR_5->firstVisible;

 FUNC_9(VAR_5, VAR_6);
    }


    if (!VAR_5->selectedItem && VAR_7)
    {
 if (FUNC_13(VAR_5, VAR_7))
     FUNC_2(VAR_5, VAR_3, VAR_7, VAR_2);
    }




    if (!FUNC_13(VAR_5, VAR_5->insertMarkItem))
 VAR_5->insertMarkItem = 0;

    if (!FUNC_13(VAR_5, VAR_5->dropItem))
 VAR_5->dropItem = 0;

    if (!FUNC_13(VAR_5, VAR_8))
        VAR_8 = VAR_5->root->firstChild;

    FUNC_14(VAR_5);

    if (VAR_11)
        FUNC_11(VAR_5, VAR_8, VAR_1);

    if (!VAR_5->bRedraw) return VAR_1;

    if (VAR_11)
    {
       FUNC_8(VAR_5, VAR_10);
       FUNC_12(VAR_5);
       FUNC_5(VAR_5, ((void*)0));
    }
    else if (FUNC_0(VAR_9) && !FUNC_4(VAR_5, VAR_9))
    {

       FUNC_5(VAR_5, VAR_9);
    }

    return VAR_1;
}
