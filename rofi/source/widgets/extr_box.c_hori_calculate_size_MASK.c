
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ enabled; scalar_t__ expand; scalar_t__ h; scalar_t__ w; } ;
typedef TYPE_2__ widget ;
struct TYPE_14__ {int w; } ;
struct TYPE_16__ {int max_size; int children; TYPE_1__ widget; int spacing; } ;
typedef TYPE_3__ box ;
struct TYPE_17__ {scalar_t__ data; } ;
typedef TYPE_4__ GList ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_15 ( box *VAR_3 )
{
    int VAR_4 = FUNC_2 ( VAR_3->spacing, VAR_1 );
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = FUNC_12 ( FUNC_1 ( VAR_3 ) );
    int VAR_8 = FUNC_11 ( FUNC_1 ( VAR_3 ) );
    for ( GList *VAR_9 = FUNC_4 ( VAR_3->children ); VAR_9 != ((void*)0); VAR_9 = FUNC_5 ( VAR_9 ) ) {
        widget * VAR_10 = (widget *) VAR_9->data;
        if ( VAR_10->enabled && VAR_10->expand == VAR_0 ) {
            FUNC_14 ( VAR_10,
                            FUNC_6 ( VAR_10 ),
                            VAR_8 );
        }
    }
    VAR_3->max_size = 0;
    for ( GList *VAR_11 = FUNC_4 ( VAR_3->children ); VAR_11 != ((void*)0); VAR_11 = FUNC_5 ( VAR_11 ) ) {
        widget * VAR_12 = (widget *) VAR_11->data;
        if ( !VAR_12->enabled ) {
            continue;
        }
        VAR_6++;
        if ( VAR_12->expand == VAR_2 ) {
            VAR_5++;
            continue;
        }

        if ( VAR_12->h > 0 ) {
            VAR_3->max_size += VAR_12->w;
        }
    }
    VAR_3->max_size += FUNC_0 ( 0, ( ( VAR_6 - 1 ) * VAR_4 ) );
    if ( VAR_3->max_size > ( VAR_7 ) ) {
        VAR_3->max_size = VAR_7;
        FUNC_3 ( "Widgets to large (width) for box: %d %d", VAR_3->max_size, VAR_3->widget.w );
        return;
    }
    if ( VAR_6 > 0 ) {
        int VAR_13 = FUNC_9 ( FUNC_1 ( VAR_3 ) );
        double VAR_14 = VAR_7 - VAR_3->max_size;
        int VAR_15 = 0;
        for ( GList *VAR_16 = FUNC_4 ( VAR_3->children ); VAR_16 != ((void*)0); VAR_16 = FUNC_5 ( VAR_16 ) ) {
            widget * VAR_17 = (widget *) VAR_16->data;
            if ( VAR_17->enabled == VAR_0 ) {
                continue;
            }
            if ( VAR_17->expand == VAR_2 ) {

                int VAR_18 = ( VAR_14 ) / ( VAR_5 - VAR_15 );
                FUNC_8 ( VAR_17, VAR_13, FUNC_13 ( FUNC_1 ( VAR_3 ) ) );
                VAR_13 += VAR_18;
                FUNC_14 ( VAR_17, VAR_18, VAR_8 );
                VAR_13 += VAR_4;
                VAR_14 -= VAR_18;
                VAR_15++;
            }
            else {
                FUNC_8 ( VAR_17, VAR_13, FUNC_13 ( FUNC_1 ( VAR_3 ) ) );
                VAR_13 += FUNC_7 ( VAR_17 );
                VAR_13 += VAR_4;
            }
        }
    }
    VAR_3->max_size += FUNC_10 ( FUNC_1 ( VAR_3 ) );
}
