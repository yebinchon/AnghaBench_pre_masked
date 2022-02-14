
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ expand; int enabled; } ;
typedef TYPE_1__ widget ;
struct TYPE_12__ {scalar_t__ type; int children; int spacing; } ;
typedef TYPE_2__ box ;
struct TYPE_13__ {scalar_t__ data; } ;
typedef int RofiDistance ;
typedef TYPE_3__ GList ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7 ( widget *VAR_2 )
{
    box *VAR_3 = (box *) VAR_2;
    int VAR_4 = FUNC_1 ( VAR_3->spacing, VAR_3->type );
    int VAR_5 = 0;


    RofiDistance VAR_6 = FUNC_4 ( VAR_2, "width", 0 );
    VAR_5 = FUNC_1 ( VAR_6, VAR_0 );
    if ( VAR_5 > 0 ) {
        return VAR_5;
    }

    if ( VAR_3->type == VAR_0 ) {
        int VAR_7 = 0;
        for ( GList *VAR_8 = FUNC_2 ( VAR_3->children ); VAR_8 != ((void*)0); VAR_8 = FUNC_3 ( VAR_8 ) ) {
            widget * VAR_9 = (widget *) VAR_8->data;
            if ( !VAR_9->enabled ) {
                continue;
            }
            VAR_7++;
            if ( VAR_9->expand == VAR_1 ) {
                VAR_5 += FUNC_5 ( VAR_9 );
                continue;
            }
            VAR_5 += FUNC_5 ( VAR_9 );
        }
        if ( VAR_7 > 0 ) {
            VAR_5 += ( VAR_7 - 1 ) * VAR_4;
        }
    }
    else {
        for ( GList *VAR_10 = FUNC_2 ( VAR_3->children ); VAR_10 != ((void*)0); VAR_10 = FUNC_3 ( VAR_10 ) ) {
            widget * VAR_11 = (widget *) VAR_10->data;
            if ( !VAR_11->enabled ) {
                continue;
            }
            VAR_5 = FUNC_0 ( FUNC_5 ( VAR_11 ), VAR_5 );
        }
    }
    VAR_5 += FUNC_6 ( VAR_2 );
    return VAR_5;
}
