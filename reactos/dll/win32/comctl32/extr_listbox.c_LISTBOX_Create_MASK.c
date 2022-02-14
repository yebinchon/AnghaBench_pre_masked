
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {int style; int selected_item; int anchor_item; int item_height; int page_size; int column_width; int caret_on; scalar_t__ height; scalar_t__ width; int owner; int self; TYPE_3__* lphc; int locale; scalar_t__ font; void* captured; void* in_focus; scalar_t__ wheel_remain; int * tabs; scalar_t__ nb_tabs; scalar_t__ horz_pos; scalar_t__ horz_extent; scalar_t__ focus_item; scalar_t__ top_item; scalar_t__ nb_items; int * items; } ;
struct TYPE_11__ {int dwStyle; int fixedOwnerDrawHeight; int self; } ;
struct TYPE_10__ {int itemID; int itemHeight; scalar_t__ itemData; scalar_t__ itemWidth; int CtlID; int CtlType; } ;
struct TYPE_9__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
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
 int FUNC_5 (int ,int ) ;
 TYPE_4__* FUNC_6 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int VAR_11 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (char*,int ,int,scalar_t__,...) ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static BOOL FUNC_12( HWND VAR_15, LPHEADCOMBO VAR_16 )
{
    LB_DESCR *VAR_17;
    MEASUREITEMSTRUCT VAR_18;
    RECT VAR_19;

    if (!(VAR_17 = FUNC_6( FUNC_2(), 0, sizeof(*VAR_17) )))
        return VAR_1;

    FUNC_0( VAR_15, &VAR_19 );
    VAR_17->self = VAR_15;
    VAR_17->owner = FUNC_1( VAR_17->self );
    VAR_17->style = FUNC_5( VAR_17->self, VAR_3 );
    VAR_17->width = VAR_19.right - VAR_19.left;
    VAR_17->height = VAR_19.bottom - VAR_19.top;
    VAR_17->items = ((void*)0);
    VAR_17->nb_items = 0;
    VAR_17->top_item = 0;
    VAR_17->selected_item = -1;
    VAR_17->focus_item = 0;
    VAR_17->anchor_item = -1;
    VAR_17->item_height = 1;
    VAR_17->page_size = 1;
    VAR_17->column_width = 150;
    VAR_17->horz_extent = 0;
    VAR_17->horz_pos = 0;
    VAR_17->nb_tabs = 0;
    VAR_17->tabs = ((void*)0);
    VAR_17->wheel_remain = 0;
    VAR_17->caret_on = !VAR_16;
    if (VAR_17->style & VAR_8) VAR_17->caret_on = VAR_1;
    VAR_17->in_focus = VAR_1;
    VAR_17->captured = VAR_1;
    VAR_17->font = 0;
    VAR_17->locale = FUNC_3();
    VAR_17->lphc = VAR_16;

    if( VAR_16 )
    {
        FUNC_11("[%p]: resetting owner %p -> %p\n", VAR_17->self, VAR_17->owner, VAR_16->self );
        VAR_17->owner = VAR_16->self;
    }

    FUNC_10( VAR_17->self, 0, (LONG_PTR)VAR_17 );



    if (VAR_17->style & VAR_4) VAR_17->style |= VAR_6;
    if (VAR_17->style & VAR_5) VAR_17->style &= ~VAR_10;
    if (VAR_17->style & VAR_10) VAR_17->style |= VAR_7;
    VAR_17->item_height = FUNC_7( VAR_17, 0 );

    if (VAR_17->style & VAR_9)
    {
 if( VAR_17->lphc && (VAR_17->lphc->dwStyle & VAR_0))
 {

   VAR_17->item_height = VAR_16->fixedOwnerDrawHeight;
 }
 else
 {
            UINT VAR_20 = (UINT)FUNC_4( VAR_17->self, VAR_2 );
            VAR_18.CtlType = VAR_11;
            VAR_18.CtlID = VAR_20;
            VAR_18.itemID = -1;
            VAR_18.itemWidth = 0;
            VAR_18.itemData = 0;
            VAR_18.itemHeight = VAR_17->item_height;
            FUNC_9( VAR_17->owner, VAR_14, VAR_20, (LPARAM)&VAR_18 );
            VAR_17->item_height = VAR_18.itemHeight ? VAR_18.itemHeight : 1;
 }
    }

    FUNC_8( VAR_17->self, VAR_13 );

    FUNC_11("owner: %p, style: %08x, width: %d, height: %d\n", VAR_17->owner, VAR_17->style, VAR_17->width, VAR_17->height);
    return VAR_12;
}
