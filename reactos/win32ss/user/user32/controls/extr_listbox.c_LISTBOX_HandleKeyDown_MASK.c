
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int selected_item; int focus_item; int style; int page_size; int nb_items; int width; int column_width; int anchor_item; TYPE_2__* lphc; scalar_t__ self; TYPE_1__* items; int owner; } ;
struct TYPE_11__ {int wState; } ;
struct TYPE_10__ {int selected; } ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_3__ LB_DESCR ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int VAR_8 ;







 int VAR_9 ;


 int VAR_10 ;

__attribute__((used)) static LRESULT FUNC_10( LB_DESCR *VAR_11, DWORD VAR_12 )
{
    INT VAR_13 = -1;
    BOOL VAR_14 = VAR_8;
    if ((FUNC_1(VAR_11)) || (VAR_11->selected_item == VAR_11->focus_item))
        VAR_14 = VAR_1;

    if (VAR_11->style & VAR_7)
    {
        VAR_13 = FUNC_9( VAR_11->owner, VAR_10,
                                FUNC_7(FUNC_6(VAR_12), VAR_11->focus_item),
                                (LPARAM)VAR_11->self );
        if (VAR_13 == -2) return 0;
    }
    if (VAR_13 == -1) switch(VAR_12)
    {
    case 133:
        if (VAR_11->style & VAR_4)
        {
            VAR_14 = VAR_1;
            if (VAR_11->focus_item >= VAR_11->page_size)
                VAR_13 = VAR_11->focus_item - VAR_11->page_size;
            break;
        }

    case 128:
        VAR_13 = VAR_11->focus_item - 1;
        if (VAR_13 < 0) VAR_13 = 0;
        break;
    case 130:
        if (VAR_11->style & VAR_4)
        {
            VAR_14 = VAR_1;
            if (VAR_11->focus_item + VAR_11->page_size < VAR_11->nb_items)
                VAR_13 = VAR_11->focus_item + VAR_11->page_size;
            break;
        }

    case 136:
        VAR_13 = VAR_11->focus_item + 1;
        if (VAR_13 >= VAR_11->nb_items) VAR_13 = VAR_11->nb_items - 1;
        break;

    case 131:
        if (VAR_11->style & VAR_4)
        {
            INT VAR_15 = VAR_11->width / VAR_11->column_width;
            if (VAR_15 < 1) VAR_15 = 1;
            VAR_13 = VAR_11->focus_item - (VAR_15 * VAR_11->page_size) + 1;
        }
        else VAR_13 = VAR_11->focus_item-FUNC_3(VAR_11) + 1;
        if (VAR_13 < 0) VAR_13 = 0;
        break;
    case 132:
        if (VAR_11->style & VAR_4)
        {
            INT VAR_16 = VAR_11->width / VAR_11->column_width;
            if (VAR_16 < 1) VAR_16 = 1;
            VAR_13 = VAR_11->focus_item + (VAR_16 * VAR_11->page_size) - 1;
        }
        else VAR_13 = VAR_11->focus_item + FUNC_3(VAR_11) - 1;
        if (VAR_13 >= VAR_11->nb_items) VAR_13 = VAR_11->nb_items - 1;
        break;
    case 134:
        VAR_13 = 0;
        break;
    case 135:
        VAR_13 = VAR_11->nb_items - 1;
        break;
    case 129:
        if (VAR_11->style & VAR_3) VAR_13 = VAR_11->focus_item;
        else if (VAR_11->style & VAR_5)
        {
            FUNC_5( VAR_11, VAR_11->focus_item,
                                  !VAR_11->items[VAR_11->focus_item].selected,
                                  (VAR_11->style & VAR_6) != 0 );
        }
        break;
    default:
        VAR_14 = VAR_1;
    }
    if (VAR_14)
        VAR_13 = VAR_11->focus_item;
    if (VAR_13 >= 0)
    {
        if (((VAR_11->style & VAR_3) &&
            !(FUNC_0( VAR_9 ) & 0x8000)) ||
            !FUNC_1(VAR_11))
            VAR_11->anchor_item = VAR_13;
        FUNC_4( VAR_11, VAR_13, VAR_8 );

        if (VAR_11->style & VAR_5)
            VAR_11->selected_item = VAR_13;
        else
            FUNC_5( VAR_11, VAR_13, VAR_8, VAR_1);
        if (VAR_11->style & VAR_6)
        {
            if (VAR_11->lphc && FUNC_2( VAR_11->self ))
            {

                VAR_11->lphc->wState |= VAR_0;
            }
            if (VAR_11->nb_items) FUNC_8( VAR_11, VAR_2 );
        }
    }
    return 0;
}
