
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {int top; scalar_t__ left; } ;
struct TYPE_16__ {size_t itemID; int CtlID; int itemState; TYPE_1__ rcItem; int itemData; int hDC; int itemAction; int hwndItem; int CtlType; } ;
struct TYPE_15__ {size_t nb_items; size_t focus_item; int style; scalar_t__ in_focus; scalar_t__ caret_on; int tabs; int nb_tabs; int self; int owner; TYPE_2__* items; } ;
struct TYPE_14__ {scalar_t__ selected; int * str; int data; } ;
typedef TYPE_1__ RECT ;
typedef int LPARAM ;
typedef TYPE_2__ LB_ITEMDATA ;
typedef TYPE_3__ LB_DESCR ;
typedef size_t INT ;
typedef scalar_t__ HRGN ;
typedef int HDC ;
typedef TYPE_4__ DRAWITEMSTRUCT ;
typedef int COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_1__ const*) ;
 int FUNC_2 (char*,size_t,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,scalar_t__,int ,int,TYPE_1__ const*,int *,int ,int *) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,int ,size_t,char*,int ,int ,...) ;
 int FUNC_14 (int ,scalar_t__,int ,int *,int ,int ,int ,int ) ;
 int VAR_11 ;
 char* FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_19( LB_DESCR *VAR_12, HDC VAR_13, const RECT *VAR_14,
          INT VAR_15, UINT VAR_16, BOOL VAR_17 )
{
    LB_ITEMDATA *VAR_18 = ((void*)0);
    if (VAR_15 < VAR_12->nb_items) VAR_18 = &VAR_12->items[VAR_15];

    if (FUNC_7(VAR_12))
    {
        DRAWITEMSTRUCT VAR_19;
        RECT VAR_20;
        HRGN VAR_21;

 if (!VAR_18)
 {
     if (VAR_16 == VAR_6)
  FUNC_1( VAR_13, VAR_14 );
     else
         FUNC_2("called with an out of bounds index %d(%d) in owner draw, Not good.\n",VAR_15,VAR_12->nb_items);
     return;
 }





        FUNC_4(VAR_12->self, &VAR_20);
        VAR_21 = FUNC_16( VAR_13, &VAR_20 );

        VAR_19.CtlType = VAR_10;
        VAR_19.CtlID = FUNC_6( VAR_12->self, VAR_4 );
        VAR_19.hwndItem = VAR_12->self;
        VAR_19.itemAction = VAR_16;
        VAR_19.hDC = VAR_13;
        VAR_19.itemID = VAR_15;
        VAR_19.itemState = 0;
        if (VAR_18->selected) VAR_19.itemState |= VAR_9;
        if (!VAR_17 && (VAR_12->focus_item == VAR_15) &&
            (VAR_12->caret_on) &&
            (VAR_12->in_focus)) VAR_19.itemState |= VAR_8;
        if (!FUNC_8(VAR_12->self)) VAR_19.itemState |= VAR_7;
        VAR_19.itemData = VAR_18->data;
        VAR_19.rcItem = *VAR_14;
        FUNC_13("[%p]: drawitem %d (%s) action=%02x state=%02x rect=%s\n",
              VAR_12->self, VAR_15, FUNC_15(VAR_18->str), VAR_16,
              VAR_19.itemState, FUNC_18(VAR_14) );
        FUNC_10(VAR_12->owner, VAR_11, VAR_19.CtlID, (LPARAM)&VAR_19);
        FUNC_9( VAR_13, VAR_21 );
        if (VAR_21) FUNC_0( VAR_21 );
    }
    else
    {
        COLORREF VAR_22 = 0, VAR_23 = 0;

        if (VAR_16 == VAR_6)
        {
            FUNC_1( VAR_13, VAR_14 );
            return;
        }
        if (VAR_18 && VAR_18->selected)
        {
            VAR_23 = FUNC_11( VAR_13, FUNC_5( VAR_0 ) );
            VAR_22 = FUNC_12( VAR_13, FUNC_5(VAR_1));
        }

        FUNC_13("[%p]: painting %d (%s) action=%02x rect=%s\n",
              VAR_12->self, VAR_15, VAR_18 ? FUNC_15(VAR_18->str) : "", VAR_16,
              FUNC_18(VAR_14) );
        if (!VAR_18)
            FUNC_3( VAR_13, VAR_14->left + 1, VAR_14->top,
                           VAR_3 | VAR_2, VAR_14, ((void*)0), 0, ((void*)0) );
        else if (!(VAR_12->style & VAR_5))
            FUNC_3( VAR_13, VAR_14->left + 1, VAR_14->top,
                         VAR_3 | VAR_2, VAR_14, VAR_18->str,
                         FUNC_17(VAR_18->str), ((void*)0) );
        else
 {

            FUNC_3( VAR_13, VAR_14->left + 1, VAR_14->top,
                         VAR_3 | VAR_2, VAR_14, ((void*)0), 0, ((void*)0) );
            FUNC_14( VAR_13, VAR_14->left + 1 , VAR_14->top,
                            VAR_18->str, FUNC_17(VAR_18->str),
                            VAR_12->nb_tabs, VAR_12->tabs, 0);
 }
        if (VAR_18 && VAR_18->selected)
        {
            FUNC_11( VAR_13, VAR_23 );
            FUNC_12( VAR_13, VAR_22 );
        }
        if (!VAR_17 && (VAR_12->focus_item == VAR_15) &&
            (VAR_12->caret_on) &&
            (VAR_12->in_focus)) FUNC_1( VAR_13, VAR_14 );
    }
}
