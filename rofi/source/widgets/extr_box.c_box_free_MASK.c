
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int widget ;
struct TYPE_7__ {int children; } ;
typedef TYPE_1__ box ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ GList ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 ( widget *VAR_0 )
{
    box *VAR_1 = (box *) VAR_0;

    for ( GList *VAR_2 = FUNC_1 ( VAR_1->children ); VAR_2 != ((void*)0); VAR_2 = FUNC_3 ( VAR_2 ) ) {
        widget * VAR_3 = (widget *) VAR_2->data;
        FUNC_4 ( VAR_3 );
    }
    FUNC_2 ( VAR_1->children );
    FUNC_0 ( VAR_1 );
}
