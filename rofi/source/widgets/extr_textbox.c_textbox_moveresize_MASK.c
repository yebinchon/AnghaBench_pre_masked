
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x; int y; int w; int h; } ;
struct TYPE_8__ {int flags; TYPE_1__ widget; int layout; int emode; } ;
typedef TYPE_2__ textbox ;


 unsigned int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 unsigned int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8 ( textbox *VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13 )
{
    unsigned int VAR_14 = ( ( VAR_9->flags & VAR_7 ) ? VAR_0 : 0 );
    if ( VAR_9->flags & VAR_5 ) {
        FUNC_3 ( VAR_9->layout, -1 );
        VAR_12 = FUNC_4 ( VAR_9 ) + FUNC_6 ( FUNC_1 ( VAR_9 ) ) + VAR_14;
    }
    else {

        if ( ( VAR_9->flags & VAR_6 ) == VAR_6 ) {
            FUNC_2 ( VAR_9->layout, VAR_1 );
        }
        else if ( ( VAR_9->flags & VAR_8 ) != VAR_8 ) {
            FUNC_2 ( VAR_9->layout, VAR_9->emode );
        } else {
            FUNC_2 ( VAR_9->layout, VAR_2 );
        }
    }

    if ( VAR_9->flags & VAR_4 ) {

        int VAR_15 = FUNC_0 ( 1, VAR_12 );
        FUNC_3 ( VAR_9->layout, VAR_3 * ( VAR_15 - FUNC_6 ( FUNC_1 ( VAR_9 ) ) - VAR_14 ) );
        int VAR_16 = FUNC_5 ( VAR_9 );
        VAR_13 = FUNC_0 ( VAR_16, VAR_13 );
    }

    if ( VAR_10 != VAR_9->widget.x || VAR_11 != VAR_9->widget.y || VAR_12 != VAR_9->widget.w || VAR_13 != VAR_9->widget.h ) {
        VAR_9->widget.x = VAR_10;
        VAR_9->widget.y = VAR_11;
        VAR_9->widget.h = FUNC_0 ( 1, VAR_13 );
        VAR_9->widget.w = FUNC_0 ( 1, VAR_12 );
    }


    FUNC_3 ( VAR_9->layout, VAR_3 * ( VAR_9->widget.w - FUNC_6 ( FUNC_1 ( VAR_9 ) ) - VAR_14 ) );
    FUNC_7 ( FUNC_1 ( VAR_9 ) );
}
