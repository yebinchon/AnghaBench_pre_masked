
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int widget ;
struct TYPE_8__ {int cur_visible; scalar_t__ direction; } ;
struct TYPE_7__ {int w; } ;
struct TYPE_9__ {unsigned int last_offset; scalar_t__ cur_elements; int rchanged; TYPE_4__* boxes; TYPE_2__ barview; int element_height; TYPE_1__ widget; scalar_t__ req_elements; int spacing; } ;
typedef TYPE_3__ listview ;
typedef int cairo_t ;
struct TYPE_10__ {int box; int textbox; } ;
typedef TYPE_4__ _listview_row ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,unsigned int,unsigned int,void*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int,int ) ;

__attribute__((used)) static void FUNC_13 ( widget *VAR_4, cairo_t *VAR_5 )
{
    unsigned int VAR_6 = 0;
    listview *VAR_7 = (listview *) VAR_4;
    VAR_6 = FUNC_3 ( VAR_7 );
    VAR_7->last_offset = VAR_6;
    int VAR_8 = FUNC_2 ( VAR_7->spacing, VAR_2 );

    int VAR_9 = FUNC_8 ( VAR_4 );
    int VAR_10 = VAR_7->widget.w - FUNC_10 ( VAR_4 );
    int VAR_11 = FUNC_11 ( VAR_4 );
    if ( VAR_7->cur_elements > 0 ) {

        unsigned int VAR_12 = FUNC_0 ( VAR_7->cur_elements, VAR_7->req_elements - VAR_6 );
        if ( VAR_7->rchanged ) {
            int VAR_13 = VAR_3;
            int VAR_14 = VAR_7->widget.w;
            VAR_7->barview.cur_visible = 0;
            VAR_14 -= FUNC_9 ( VAR_4 );
            if ( VAR_7->barview.direction == VAR_1 ) {
                for ( unsigned int VAR_15 = 0; VAR_15 < VAR_12 && VAR_14 > 0; VAR_15++ ) {
                    FUNC_5 ( VAR_7, VAR_15, VAR_15 + VAR_6, VAR_3 );
                    int VAR_16 = FUNC_4 ( FUNC_1 ( VAR_7->boxes[VAR_15].textbox ) );
                    if ( VAR_16 >= VAR_14 ) {
                        if ( !VAR_13 ) {
                            break;
                        }
                        VAR_16 = VAR_14;
                    }
                    FUNC_7 ( FUNC_1(VAR_7->boxes[VAR_15].box), VAR_9, VAR_11);
                    FUNC_12 ( FUNC_1 (VAR_7->boxes[VAR_15].box), VAR_16, VAR_7->element_height);

                    FUNC_6 ( FUNC_1 ( VAR_7->boxes[VAR_15].box ), VAR_5 );
                    VAR_14 -= VAR_16 + VAR_8;
                    VAR_9 += VAR_16 + VAR_8;
                    VAR_13 = VAR_0;
                    VAR_7->barview.cur_visible++;
                }
            }
            else {
                for ( unsigned int VAR_17 = 0; VAR_17 < VAR_7->cur_elements && VAR_14 > 0 && VAR_17 <= VAR_6; VAR_17++ ) {
                    FUNC_5 ( VAR_7, VAR_17, VAR_6 - VAR_17, VAR_3 );
                    int VAR_18 = FUNC_4 ( FUNC_1 ( VAR_7->boxes[VAR_17].textbox ) );
                    if ( VAR_18 >= VAR_14 ) {
                        if ( !VAR_13 ) {
                            break;
                        }
                        VAR_18 = VAR_14;
                    }
                    VAR_10 -= VAR_18;
                    FUNC_7 ( FUNC_1(VAR_7->boxes[VAR_17].box), VAR_10, VAR_11);
                    FUNC_12 ( FUNC_1 (VAR_7->boxes[VAR_17].box), VAR_18, VAR_7->element_height);

                    FUNC_6 ( FUNC_1 ( VAR_7->boxes[VAR_17].box ), VAR_5 );
                    VAR_14 -= VAR_18 + VAR_8;
                    VAR_10 -= VAR_8;
                    VAR_13 = VAR_0;
                    VAR_7->barview.cur_visible++;
                }
                VAR_6 -= VAR_7->barview.cur_visible - 1;
                VAR_7->last_offset = VAR_6;
                for ( unsigned int VAR_19 = 0; VAR_19 < ( VAR_7->barview.cur_visible / 2 ); VAR_19++ ) {
                    _listview_row VAR_20 = VAR_7->boxes[VAR_19];
                    int VAR_21 = VAR_7->barview.cur_visible - VAR_19 - 1;
                    VAR_7->boxes[VAR_19] = VAR_7->boxes[VAR_21];
                    VAR_7->boxes[VAR_21] = VAR_20;
                }
            }
            VAR_7->rchanged = VAR_0;
        }
        else {
            for ( unsigned int VAR_22 = 0; VAR_22 < VAR_7->barview.cur_visible; VAR_22++ ) {
                FUNC_5 ( VAR_7, VAR_22, VAR_22 + VAR_6, VAR_0 );
                FUNC_6 ( FUNC_1 ( VAR_7->boxes[VAR_22].box ), VAR_5 );
            }
        }
    }
}
