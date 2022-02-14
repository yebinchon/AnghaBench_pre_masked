
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int widget ;
struct TYPE_4__ {int w; } ;
struct TYPE_5__ {int flags; TYPE_1__ widget; } ;
typedef TYPE_2__ textbox ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

int FUNC_2 ( widget *VAR_3 )
{
    textbox *VAR_4 = (textbox *) VAR_3;
    if ( VAR_4->flags & VAR_1 ) {
        unsigned int VAR_5 = ( VAR_4->flags & VAR_2 ) ? VAR_0 : 0;
        return FUNC_0 ( VAR_4 ) + FUNC_1 ( VAR_3 ) + VAR_5;
    }
    return VAR_4->widget.w;
}
