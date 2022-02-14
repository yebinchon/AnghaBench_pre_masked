
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ parent; int expand; scalar_t__ h; scalar_t__ w; } ;
typedef TYPE_2__ widget ;
typedef int gboolean ;
struct TYPE_8__ {int w; int h; } ;
struct TYPE_10__ {scalar_t__ type; int children; TYPE_1__ widget; } ;
typedef TYPE_3__ box ;


 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

void FUNC_8 ( box *VAR_1, widget *VAR_2, gboolean VAR_3 )
{
    if ( VAR_1 == ((void*)0) ) {
        return;
    }

    if ( VAR_1->type == VAR_0 ) {
        int VAR_4 = VAR_1->widget.w;
        VAR_4 = FUNC_0 ( VAR_4, VAR_2->w + FUNC_6 ( FUNC_1 ( VAR_1 ) ) );
        VAR_1->widget.w = VAR_4;
    }
    else {
        int VAR_5 = VAR_1->widget.h;
        VAR_5 = FUNC_0 ( VAR_5, VAR_2->h + FUNC_5 ( FUNC_1 ( VAR_1 ) ) );
        VAR_1->widget.h = VAR_5;
    }
    VAR_2->expand = FUNC_4 ( VAR_2, "expand", VAR_3 );
    FUNC_2 ( VAR_2->parent == FUNC_1 ( VAR_1 ) );
    VAR_1->children = FUNC_3 ( VAR_1->children, (void *) VAR_2 );
    FUNC_7 ( FUNC_1 ( VAR_1 ) );
}
