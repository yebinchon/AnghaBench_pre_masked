
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef void* ULONG_PTR ;
typedef int UINT ;
struct TYPE_20__ {int focus_item; int nb_items; int style; int item_height; int selected_item; int self; int owner; TYPE_2__* items; } ;
struct TYPE_19__ {int height; int selected; void* data; scalar_t__ str; } ;
struct TYPE_18__ {int itemID; int itemHeight; void* itemData; int CtlID; int CtlType; } ;
typedef TYPE_1__ MEASUREITEMSTRUCT ;
typedef int LRESULT ;
typedef scalar_t__ LPWSTR ;
typedef int LPARAM ;
typedef TYPE_2__ LB_ITEMDATA ;
typedef TYPE_3__ LB_DESCR ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int ,int ,int) ;
 TYPE_2__* FUNC_4 (int ,int ,TYPE_2__*,int) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int,int ,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (char*,int ,int,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_15 (scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_16( LB_DESCR *VAR_12, INT VAR_13,
                                   LPWSTR VAR_14, ULONG_PTR VAR_15 )
{
    LB_ITEMDATA *VAR_16;
    INT VAR_17;
    INT VAR_18 = VAR_12->focus_item;

    if (VAR_13 == -1) VAR_13 = VAR_12->nb_items;
    else if ((VAR_13 < 0) || (VAR_13 > VAR_12->nb_items)) return VAR_6;
    if (!VAR_12->items) VAR_17 = 0;
    else VAR_17 = FUNC_5( FUNC_0(), 0, VAR_12->items ) / sizeof(*VAR_16);
    if (VAR_12->nb_items == VAR_17)
    {

        VAR_17 += VAR_5;
 if (VAR_12->items)
     VAR_16 = FUNC_4( FUNC_0(), 0, VAR_12->items,
                                  VAR_17 * sizeof(LB_ITEMDATA) );
 else
     VAR_16 = FUNC_3( FUNC_0(), 0,
                                  VAR_17 * sizeof(LB_ITEMDATA) );
        if (!VAR_16)
        {
            FUNC_12( VAR_12, VAR_3 );
            return VAR_7;
        }
        VAR_12->items = VAR_16;
    }



    VAR_16 = &VAR_12->items[VAR_13];
    if (VAR_13 < VAR_12->nb_items)
        FUNC_11( VAR_16 + 1, VAR_16,
                       (VAR_12->nb_items - VAR_13) * sizeof(LB_ITEMDATA) );
    VAR_16->str = VAR_14;
    VAR_16->data = FUNC_2(VAR_12) ? 0 : VAR_15;
    VAR_16->height = 0;
    VAR_16->selected = VAR_0;
    VAR_12->nb_items++;



    if (VAR_12->style & VAR_4)
    {
        MEASUREITEMSTRUCT VAR_19;
        UINT VAR_20 = (UINT)FUNC_1( VAR_12->self, VAR_1 );

        VAR_19.CtlType = VAR_9;
        VAR_19.CtlID = VAR_20;
        VAR_19.itemID = VAR_13;
        VAR_19.itemData = VAR_15;
        VAR_19.itemHeight = VAR_12->item_height;
        FUNC_13( VAR_12->owner, VAR_11, VAR_20, (LPARAM)&VAR_19 );
        VAR_16->height = VAR_19.itemHeight ? VAR_19.itemHeight : 1;
        FUNC_14("[%p]: measure item %d (%s) = %d\n",
              VAR_12->self, VAR_13, VAR_14 ? FUNC_15(VAR_14) : "", VAR_16->height );
    }



    FUNC_10( VAR_12 );
    FUNC_7( VAR_12, VAR_13 );



    if (VAR_12->nb_items == 1)
         FUNC_8( VAR_12, 0, VAR_0 );

    else if ((VAR_2) && !(FUNC_6(VAR_12)))
    {
        VAR_12->selected_item++;
        FUNC_9( VAR_12, VAR_12->selected_item-1, VAR_10, VAR_0 );
    }
    else
    {
        if (VAR_13 <= VAR_12->selected_item)
        {
            VAR_12->selected_item++;
            VAR_12->focus_item = VAR_18;
        }
    }
    return VAR_8;
}
