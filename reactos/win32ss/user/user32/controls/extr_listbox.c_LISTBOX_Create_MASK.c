
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {int style; int selected_item; int anchor_item; int item_height; int page_size; int column_width; int caret_on; scalar_t__ height; scalar_t__ width; int owner; int self; TYPE_3__* lphc; int locale; scalar_t__ font; void* captured; void* in_focus; scalar_t__ wheel_remain; int * tabs; scalar_t__ nb_tabs; scalar_t__ horz_pos; scalar_t__ horz_extent; scalar_t__ focus_item; scalar_t__ top_item; scalar_t__ nb_items; int * items; } ;
struct TYPE_12__ {int dwStyle; int fixedOwnerDrawHeight; int self; } ;
struct TYPE_11__ {int itemID; int itemHeight; scalar_t__ itemData; scalar_t__ itemWidth; int CtlID; int CtlType; } ;
struct TYPE_10__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ MEASUREITEMSTRUCT ;
typedef TYPE_3__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef int LONG_PTR ;
typedef TYPE_4__ LB_DESCR ;
typedef int HWND ;
typedef void* BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 TYPE_4__* FUNC_5 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_14 ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*,int ,int,scalar_t__,...) ;
 void* VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static BOOL FUNC_11( HWND VAR_17, LPHEADCOMBO VAR_18 )
{
    LB_DESCR *VAR_19;
    MEASUREITEMSTRUCT VAR_20;
    RECT VAR_21;

    if (!(VAR_19 = FUNC_5( FUNC_2(), 0, sizeof(*VAR_19) )))
        return VAR_1;

    FUNC_0( VAR_17, &VAR_21 );
    VAR_19->self = VAR_17;
    VAR_19->owner = FUNC_1( VAR_19->self );
    VAR_19->style = FUNC_4( VAR_19->self, VAR_3 );
    VAR_19->width = VAR_21.right - VAR_21.left;
    VAR_19->height = VAR_21.bottom - VAR_21.top;
    VAR_19->items = ((void*)0);
    VAR_19->nb_items = 0;
    VAR_19->top_item = 0;
    VAR_19->selected_item = -1;
    VAR_19->focus_item = 0;
    VAR_19->anchor_item = -1;
    VAR_19->item_height = 1;
    VAR_19->page_size = 1;
    VAR_19->column_width = 150;
    VAR_19->horz_extent = 0;
    VAR_19->horz_pos = 0;
    VAR_19->nb_tabs = 0;
    VAR_19->tabs = ((void*)0);
    VAR_19->wheel_remain = 0;
    VAR_19->caret_on = !VAR_18;
    if (VAR_19->style & VAR_10) VAR_19->caret_on = VAR_1;
    VAR_19->in_focus = VAR_1;
    VAR_19->captured = VAR_1;
    VAR_19->font = 0;
    VAR_19->locale = FUNC_3();
    VAR_19->lphc = VAR_18;

    if( VAR_18 )
    {
        FUNC_10("[%p]: resetting owner %p -> %p\n", VAR_19->self, VAR_19->owner, VAR_18->self );
        VAR_19->owner = VAR_18->self;
    }

    FUNC_9( VAR_19->self, 0, (LONG_PTR)VAR_19 );

    FUNC_7(VAR_19);



    if (VAR_19->style & VAR_4) VAR_19->style |= VAR_7;
    if (VAR_19->style & VAR_6) VAR_19->style &= ~VAR_12;
    if (VAR_19->style & VAR_12) VAR_19->style |= VAR_9;




    if ( VAR_19->style & VAR_8 &&
        (!(VAR_19->style & VAR_11) || VAR_19->style & (VAR_5|VAR_13) ) )
       VAR_19->style &= ~VAR_8;

    VAR_19->item_height = FUNC_6( VAR_19, 0 );

    if (VAR_19->style & VAR_11)
    {
 if( VAR_19->lphc && (VAR_19->lphc->dwStyle & VAR_0))
 {

   VAR_19->item_height = VAR_18->fixedOwnerDrawHeight;
 }
 else
 {
            UINT VAR_22 = (UINT)FUNC_4( VAR_19->self, VAR_2 );
            VAR_20.CtlType = VAR_14;
            VAR_20.CtlID = VAR_22;
            VAR_20.itemID = -1;
            VAR_20.itemWidth = 0;
            VAR_20.itemData = 0;
            VAR_20.itemHeight = VAR_19->item_height;
            FUNC_8( VAR_19->owner, VAR_16, VAR_22, (LPARAM)&VAR_20 );
            VAR_19->item_height = VAR_20.itemHeight ? VAR_20.itemHeight : 1;
 }
    }

    FUNC_10("owner: %p, style: %08x, width: %d, height: %d\n", VAR_19->owner, VAR_19->style, VAR_19->width, VAR_19->height);
    return VAR_15;
}
