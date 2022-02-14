
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ y; scalar_t__ x; int enabled; } ;
typedef TYPE_1__ widget ;
typedef scalar_t__ gint ;
struct TYPE_13__ {int children; } ;
typedef TYPE_2__ box ;
typedef int WidgetType ;
struct TYPE_14__ {scalar_t__ data; } ;
typedef TYPE_3__ GList ;


 TYPE_3__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static widget *FUNC_4 ( widget *VAR_0, WidgetType VAR_1, gint VAR_2, gint VAR_3 )
{
    box *VAR_4 = (box *) VAR_0;
    for ( GList *VAR_5 = FUNC_0 ( VAR_4->children ); VAR_5 != ((void*)0); VAR_5 = FUNC_1 ( VAR_5 ) ) {
        widget * VAR_6 = (widget *) VAR_5->data;
        if ( !VAR_6->enabled ) {
            continue;
        }
        if ( FUNC_3 ( VAR_6, VAR_2, VAR_3 ) ) {
            gint VAR_7 = VAR_2 - VAR_6->x;
            gint VAR_8 = VAR_3 - VAR_6->y;
            widget *VAR_9 = FUNC_2 ( VAR_6, VAR_1, VAR_7, VAR_8 );
            if ( VAR_9 != ((void*)0) ) {
                return VAR_9;
            }
        }
    }
    return ((void*)0);
}
