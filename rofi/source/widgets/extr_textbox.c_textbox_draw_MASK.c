
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int widget ;
struct TYPE_7__ {int h; scalar_t__ w; } ;
struct TYPE_8__ {int flags; double yalign; double xalign; int tbft; TYPE_1__ widget; int layout; int cursor; scalar_t__ blink; int metrics; scalar_t__ changed; } ;
typedef TYPE_2__ textbox ;
typedef int cairo_t ;
struct TYPE_9__ {int x; int y; int height; } ;
typedef TYPE_3__ PangoRectangle ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,double,double,double,int ,double) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int,int,int,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,double,double,double) ;
 char* FUNC_10 (char const*,int) ;
 int FUNC_11 (char const*,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,TYPE_3__*,int *) ;
 int FUNC_16 (int ,int*,int*) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static void FUNC_23 ( widget *VAR_7, cairo_t *VAR_8 )
{
    if ( VAR_7 == ((void*)0) ) {
        return;
    }
    textbox *VAR_9 = (textbox *) VAR_7;
    unsigned int VAR_10 = ( ( VAR_9->flags & VAR_6 ) ? VAR_1 : 0 );

    if ( VAR_9->changed ) {
        FUNC_3 ( VAR_9 );
    }


    int VAR_11 = FUNC_20 ( FUNC_2 ( VAR_9 ) );
    int VAR_12 = FUNC_22 ( FUNC_2 ( VAR_9 ) );
    int VAR_13 = ( FUNC_13 ( VAR_9->metrics ) - FUNC_14 ( VAR_9->layout ) ) / VAR_3;
    int VAR_14 = 0, VAR_15 = 0;

    FUNC_16 ( VAR_9->layout, &VAR_14, &VAR_15 );

    if ( VAR_9->yalign > 0.001 ) {
        int VAR_16 = FUNC_19 ( FUNC_2 ( VAR_9 ) );
        VAR_12 = ( VAR_9->widget.h - VAR_16 - VAR_15 - VAR_12 ) * VAR_9->yalign + VAR_12;
    }
    VAR_13 += VAR_12;

    VAR_11 += VAR_10;

    if ( VAR_9->xalign > 0.001 ) {
        int VAR_17 = FUNC_0 ( 0, VAR_9->widget.w - FUNC_21 ( FUNC_2 ( VAR_9 ) ) - VAR_14 );
        VAR_11 = VAR_9->xalign * VAR_17 + FUNC_20 ( FUNC_2 ( VAR_9 ) );
    }

    FUNC_8 ( VAR_8, VAR_0 );
    FUNC_9 ( VAR_8, 0.0, 0.0, 0.0 );
    FUNC_18 ( FUNC_2 ( VAR_9 ), "text-color", VAR_8 );

    if ( VAR_9->flags & VAR_5 && VAR_9->blink ) {

        const char *VAR_18 = FUNC_17 ( VAR_9->layout );

        int VAR_19 = FUNC_1 ( VAR_9->cursor, FUNC_11 ( VAR_18, -1 ) );
        PangoRectangle VAR_20;

        char *VAR_21 = FUNC_10 ( VAR_18, VAR_19 );
        FUNC_15 ( VAR_9->layout, VAR_21 - VAR_18, &VAR_20, ((void*)0) );
        int VAR_22 = VAR_20.x / VAR_3;
        int VAR_23 = VAR_20.y / VAR_3;
        int VAR_24 = VAR_20.height / VAR_3;
        int VAR_25 = 2;
        FUNC_7 ( VAR_8, VAR_11 + VAR_22, VAR_13 + VAR_23, VAR_25, VAR_24 );
        FUNC_5 ( VAR_8 );
    }



    FUNC_6 ( VAR_8, VAR_11, VAR_12 );
    FUNC_12 ( VAR_8, VAR_9->layout );

    if ( ( VAR_9->flags & VAR_6 ) == VAR_6 && ( VAR_9->tbft & ( VAR_4 ) ) ) {
        FUNC_4 ( VAR_8, VAR_1 / 2.0, VAR_9->widget.h / 2.0, 2.0, 0, 2.0 * VAR_2 );
        FUNC_5 ( VAR_8 );
    }
}
