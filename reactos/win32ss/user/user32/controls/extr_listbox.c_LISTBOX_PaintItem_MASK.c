
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
struct TYPE_15__ {size_t nb_items; int UIState; size_t focus_item; int style; scalar_t__ in_focus; scalar_t__ caret_on; int tabs; int nb_tabs; int self; int owner; TYPE_2__* items; } ;
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
 int VAR_12 ;
 char* FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_19( LB_DESCR *VAR_13, HDC VAR_14, const RECT *VAR_15,
          INT VAR_16, UINT VAR_17, BOOL VAR_18 )
{
    LB_ITEMDATA *VAR_19 = ((void*)0);
    if (VAR_16 < VAR_13->nb_items) VAR_19 = &VAR_13->items[VAR_16];

    if (FUNC_7(VAR_13))
    {
        DRAWITEMSTRUCT VAR_20;
        RECT VAR_21;
        HRGN VAR_22;

 if (!VAR_19)
 {
     if (VAR_17 == VAR_6)
            {
               if (!(VAR_13->UIState & VAR_11))
                   FUNC_1( VAR_14, VAR_15 );
            }
     else
         FUNC_2("called with an out of bounds index %d(%d) in owner draw, Not good.\n",VAR_16,VAR_13->nb_items);
     return;
 }





        FUNC_4(VAR_13->self, &VAR_21);
        VAR_22 = FUNC_16( VAR_14, &VAR_21 );

        VAR_20.CtlType = VAR_10;
        VAR_20.CtlID = FUNC_6( VAR_13->self, VAR_4 );
        VAR_20.hwndItem = VAR_13->self;
        VAR_20.itemAction = VAR_17;
        VAR_20.hDC = VAR_14;
        VAR_20.itemID = VAR_16;
        VAR_20.itemState = 0;
        if (VAR_19->selected) VAR_20.itemState |= VAR_9;
        if (!VAR_18 && (VAR_13->focus_item == VAR_16) &&
            (VAR_13->caret_on) &&
            (VAR_13->in_focus)) VAR_20.itemState |= VAR_8;
        if (!FUNC_8(VAR_13->self)) VAR_20.itemState |= VAR_7;
        VAR_20.itemData = VAR_19->data;
        VAR_20.rcItem = *VAR_15;
        FUNC_13("[%p]: drawitem %d (%s) action=%02x state=%02x rect=%s\n",
              VAR_13->self, VAR_16, FUNC_15(VAR_19->str), VAR_17,
              VAR_20.itemState, FUNC_18(VAR_15) );
        FUNC_10(VAR_13->owner, VAR_12, VAR_20.CtlID, (LPARAM)&VAR_20);
        FUNC_9( VAR_14, VAR_22 );
        if (VAR_22) FUNC_0( VAR_22 );
    }
    else
    {
        COLORREF VAR_23 = 0, VAR_24 = 0;

        if (VAR_17 == VAR_6)
        {
            if (!(VAR_13->UIState & VAR_11))
                FUNC_1( VAR_14, VAR_15 );
            return;
        }
        if (VAR_19 && VAR_19->selected)
        {
            VAR_24 = FUNC_11( VAR_14, FUNC_5( VAR_0 ) );
            VAR_23 = FUNC_12( VAR_14, FUNC_5(VAR_1));
        }

        FUNC_13("[%p]: painting %d (%s) action=%02x rect=%s\n",
              VAR_13->self, VAR_16, VAR_19 ? FUNC_15(VAR_19->str) : "", VAR_17,
              FUNC_18(VAR_15) );
        if (!VAR_19)
            FUNC_3( VAR_14, VAR_15->left + 1, VAR_15->top,
                           VAR_3 | VAR_2, VAR_15, ((void*)0), 0, ((void*)0) );
        else if (!(VAR_13->style & VAR_5))
            FUNC_3( VAR_14, VAR_15->left + 1, VAR_15->top,
                         VAR_3 | VAR_2, VAR_15, VAR_19->str,
                         FUNC_17(VAR_19->str), ((void*)0) );
        else
 {

            FUNC_3( VAR_14, VAR_15->left + 1, VAR_15->top,
                         VAR_3 | VAR_2, VAR_15, ((void*)0), 0, ((void*)0) );
            FUNC_14( VAR_14, VAR_15->left + 1 , VAR_15->top,
                            VAR_19->str, FUNC_17(VAR_19->str),
                            VAR_13->nb_tabs, VAR_13->tabs, 0);
 }
        if (VAR_19 && VAR_19->selected)
        {
            FUNC_11( VAR_14, VAR_24 );
            FUNC_12( VAR_14, VAR_23 );
        }
        if (!VAR_18 && (VAR_13->focus_item == VAR_16) &&
            (VAR_13->caret_on) &&
            (VAR_13->in_focus) &&
            !(VAR_13->UIState & VAR_11)) FUNC_1( VAR_14, VAR_15 );
    }
}
