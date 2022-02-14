
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int widget ;
typedef int cairo_t ;
struct TYPE_6__ {int children; } ;
typedef TYPE_1__ box ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_2__ GList ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3 ( widget *VAR_0, cairo_t *VAR_1 )
{
    box *VAR_2 = (box *) VAR_0;
    for ( GList *VAR_3 = FUNC_0 ( VAR_2->children ); VAR_3 != ((void*)0); VAR_3 = FUNC_1 ( VAR_3 ) ) {
        widget * VAR_4 = (widget *) VAR_3->data;
        FUNC_2 ( VAR_4, VAR_1 );
    }
}
