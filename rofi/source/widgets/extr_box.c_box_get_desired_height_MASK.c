
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int enabled; } ;
typedef TYPE_1__ widget ;
struct TYPE_11__ {scalar_t__ type; int children; int spacing; } ;
typedef TYPE_2__ box ;
struct TYPE_12__ {scalar_t__ data; } ;
typedef TYPE_3__ GList ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6 ( widget *VAR_1 )
{
    box *VAR_2 = (box *) VAR_1;
    int VAR_3 = FUNC_1 ( VAR_2->spacing, VAR_2->type );
    int VAR_4 = 0;
    if ( VAR_2->type == VAR_0 ) {
        int VAR_5 = 0;
        for ( GList *VAR_6 = FUNC_2 ( VAR_2->children ); VAR_6 != ((void*)0); VAR_6 = FUNC_3 ( VAR_6 ) ) {
            widget * VAR_7 = (widget *) VAR_6->data;
            if ( !VAR_7->enabled ) {
                continue;
            }
            VAR_5++;
            VAR_4 += FUNC_4 ( VAR_7 );
        }
        if ( VAR_5 > 0 ) {
            VAR_4 += ( VAR_5 - 1 ) * VAR_3;
        }
    }
    else {
        for ( GList *VAR_8 = FUNC_2 ( VAR_2->children ); VAR_8 != ((void*)0); VAR_8 = FUNC_3 ( VAR_8 ) ) {
            widget * VAR_9 = (widget *) VAR_8->data;
            if ( !VAR_9->enabled ) {
                continue;
            }
            VAR_4 = FUNC_0 ( FUNC_4 ( VAR_9 ), VAR_4 );
        }
    }
    VAR_4 += FUNC_5 ( VAR_1 );
    return VAR_4;
}
