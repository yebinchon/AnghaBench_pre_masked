
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {unsigned int h; } ;
typedef TYPE_3__ widget ;
struct TYPE_13__ {int w; } ;
struct TYPE_16__ {scalar_t__ scroll_type; int cur_columns; int max_rows; unsigned int last_offset; scalar_t__ cur_elements; int element_height; int scrollbar; TYPE_2__* boxes; scalar_t__ rchanged; scalar_t__ reverse; TYPE_1__ widget; scalar_t__ req_elements; int spacing; scalar_t__ selected; } ;
typedef TYPE_4__ listview ;
typedef int cairo_t ;
struct TYPE_14__ {int box; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (TYPE_4__*) ;
 unsigned int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,unsigned int,unsigned int,scalar_t__) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned int,unsigned int) ;
 unsigned int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_18 ( widget *VAR_5, cairo_t *VAR_6 )
{
    unsigned int VAR_7 = 0;
    listview *VAR_8 = (listview *) VAR_5;
    if ( VAR_8->scroll_type == VAR_1 ) {
        VAR_7 = FUNC_3 ( VAR_8 );
    }
    else {
        VAR_7 = FUNC_4 ( VAR_8 );
    }

    FUNC_7 ( VAR_8->scrollbar, VAR_8->req_elements );
    FUNC_6 ( VAR_8->scrollbar, VAR_8->cur_columns * VAR_8->max_rows );
    if ( VAR_8->reverse ) {
        FUNC_5 ( VAR_8->scrollbar, VAR_8->req_elements - VAR_8->selected - 1 );
    }
    else {
        FUNC_5 ( VAR_8->scrollbar, VAR_8->selected );
    }
    VAR_8->last_offset = VAR_7;
    int VAR_9 = FUNC_2 ( VAR_8->spacing, VAR_3 );
    int VAR_10 = FUNC_2 ( VAR_8->spacing, VAR_2 );

    int VAR_11 = FUNC_14 ( VAR_5 );
    int VAR_12 = FUNC_16 ( VAR_5 );





    if ( VAR_8->cur_elements > 0 && VAR_8->max_rows > 0 ) {

        unsigned int VAR_13 = FUNC_0 ( VAR_8->cur_elements, VAR_8->req_elements - VAR_7 );
        if ( VAR_8->rchanged ) {
            unsigned int VAR_14 = VAR_8->widget.w - VAR_10 * ( VAR_8->cur_columns - 1 );
            VAR_14 -= FUNC_15 ( VAR_5 );
            if ( FUNC_10 ( FUNC_1 ( VAR_8->scrollbar ) ) ) {
                VAR_14 -= VAR_10;
                VAR_14 -= FUNC_11 ( FUNC_1 ( VAR_8->scrollbar ) );
            }
            unsigned int VAR_15 = ( VAR_14 ) / VAR_8->cur_columns;
            for ( unsigned int VAR_16 = 0; VAR_16 < VAR_13; VAR_16++ ) {
                unsigned int VAR_17 = VAR_11 + ( ( VAR_16 ) / VAR_8->max_rows ) * ( VAR_15 + VAR_10 );
                if ( VAR_8->reverse ) {
                    unsigned int VAR_18 = VAR_5->h - ( FUNC_13 ( VAR_5 ) + ( ( VAR_16 ) % VAR_8->max_rows ) * ( VAR_8->element_height + VAR_9 ) ) - VAR_8->element_height;
                    FUNC_12 ( FUNC_1(VAR_8->boxes[VAR_16].box), VAR_17, VAR_18);
                    FUNC_17 ( FUNC_1 (VAR_8->boxes[VAR_16].box), VAR_15, VAR_8->element_height);
                }
                else {
                    unsigned int VAR_19 = VAR_12 + ( ( VAR_16 ) % VAR_8->max_rows ) * ( VAR_8->element_height + VAR_9 );
                    FUNC_12 ( FUNC_1(VAR_8->boxes[VAR_16].box), VAR_17, VAR_19);
                    FUNC_17 ( FUNC_1 (VAR_8->boxes[VAR_16].box), VAR_15, VAR_8->element_height);
                }

                FUNC_8 ( VAR_8, VAR_16, VAR_16 + VAR_7, VAR_4 );
                FUNC_9 ( FUNC_1 ( VAR_8->boxes[VAR_16].box ), VAR_6 );
            }
            VAR_8->rchanged = VAR_0;
        }
        else {
            for ( unsigned int VAR_20 = 0; VAR_20 < VAR_13; VAR_20++ ) {
                FUNC_8 ( VAR_8, VAR_20, VAR_20 + VAR_7, VAR_0 );
                FUNC_9 ( FUNC_1 ( VAR_8->boxes[VAR_20].box ), VAR_6 );
            }
        }
    }
    FUNC_9 ( FUNC_1 ( VAR_8->scrollbar ), VAR_6 );
}
