
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_12__ {size_t page_size; int style; scalar_t__ height; size_t nb_items; int focus_item; scalar_t__ item_height; size_t top_item; scalar_t__ width; scalar_t__ in_focus; scalar_t__ caret_on; scalar_t__ column_width; TYPE_1__* items; scalar_t__ self; int owner; scalar_t__ font; scalar_t__ horz_pos; } ;
struct TYPE_11__ {int member_0; int member_1; int member_2; int member_3; scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_10__ {scalar_t__ height; } ;
typedef TYPE_2__ RECT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_3__ LB_DESCR ;
typedef size_t INT ;
typedef scalar_t__ HFONT ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBRUSH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ,int,TYPE_2__*,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*,scalar_t__,TYPE_2__*,size_t,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static LRESULT FUNC_10( LB_DESCR *VAR_11, HDC VAR_12 )
{
    INT VAR_13, VAR_14 = VAR_11->page_size - 1;
    RECT VAR_15;
    RECT VAR_16 = {-1, -1, -1, -1};
    HFONT VAR_17 = 0;
    HBRUSH VAR_18, VAR_19 = 0;

    if (VAR_11->style & VAR_5) return 0;

    FUNC_7( &VAR_15, 0, 0, VAR_11->width, VAR_11->height );
    if (VAR_11->style & VAR_4)
        VAR_15.right = VAR_15.left + VAR_11->column_width;
    else if (VAR_11->horz_pos)
    {
        FUNC_9( VAR_12, VAR_11->horz_pos, 0, ((void*)0) );
        VAR_15.right += VAR_11->horz_pos;
    }

    if (VAR_11->font) VAR_17 = FUNC_5( VAR_12, VAR_11->font );
    VAR_18 = (HBRUSH)FUNC_6( VAR_11->owner, VAR_10,
       (WPARAM)VAR_12, (LPARAM)VAR_11->self );
    if (VAR_18) VAR_19 = FUNC_5( VAR_12, VAR_18 );
    if (!FUNC_3(VAR_11->self)) FUNC_8( VAR_12, FUNC_1( VAR_0 ) );

    if (!VAR_11->nb_items && (VAR_11->focus_item != -1) && VAR_11->caret_on &&
        (VAR_11->in_focus))
    {

        VAR_15.bottom = VAR_15.top + VAR_11->item_height;
        FUNC_0( VAR_12, 0, 0, VAR_2 | VAR_1,
                     &VAR_15, ((void*)0), 0, ((void*)0) );
        FUNC_4( VAR_11, VAR_12, &VAR_15, VAR_11->focus_item, VAR_8, VAR_3 );
        VAR_15.top = VAR_15.bottom;
    }




    for (VAR_13 = VAR_11->top_item; VAR_13 < VAR_11->nb_items; VAR_13++)
    {
        if (!(VAR_11->style & VAR_6))
            VAR_15.bottom = VAR_15.top + VAR_11->item_height;
        else
            VAR_15.bottom = VAR_15.top + VAR_11->items[VAR_13].height;


        if (VAR_13 == VAR_11->focus_item)
            VAR_16 = VAR_15;

        FUNC_4( VAR_11, VAR_12, &VAR_15, VAR_13, VAR_7, VAR_9 );
        VAR_15.top = VAR_15.bottom;

        if ((VAR_11->style & VAR_4) && !VAR_14)
        {
            if (!FUNC_2(VAR_11))
            {

                if (VAR_15.top < VAR_11->height)
                {
                    VAR_15.bottom = VAR_11->height;
                    FUNC_0( VAR_12, 0, 0, VAR_2 | VAR_1,
                                   &VAR_15, ((void*)0), 0, ((void*)0) );
                }
            }


            VAR_15.left += VAR_11->column_width;
            VAR_15.right += VAR_11->column_width;
            VAR_15.top = 0;
            VAR_14 = VAR_11->page_size - 1;
        }
        else
        {
            VAR_14--;
            if (VAR_15.top >= VAR_11->height) break;
        }
    }


    if (VAR_16.top != VAR_16.bottom &&
        VAR_11->caret_on && VAR_11->in_focus)
        FUNC_4( VAR_11, VAR_12, &VAR_16, VAR_11->focus_item, VAR_8, VAR_3 );

    if (!FUNC_2(VAR_11))
    {

        if (VAR_15.top < VAR_11->height)
        {
            VAR_15.bottom = VAR_11->height;
            FUNC_0( VAR_12, 0, 0, VAR_2 | VAR_1,
                           &VAR_15, ((void*)0), 0, ((void*)0) );
        }
        if (VAR_15.right < VAR_11->width)
        {
            VAR_15.left = VAR_15.right;
            VAR_15.right = VAR_11->width;
            VAR_15.top = 0;
            VAR_15.bottom = VAR_11->height;
            FUNC_0( VAR_12, 0, 0, VAR_2 | VAR_1,
                           &VAR_15, ((void*)0), 0, ((void*)0) );
        }
    }
    if (VAR_17) FUNC_5( VAR_12, VAR_17 );
    if (VAR_19) FUNC_5( VAR_12, VAR_19 );
    return 0;
}
