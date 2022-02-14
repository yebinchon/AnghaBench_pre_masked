
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int widget ;
struct TYPE_4__ {int h; } ;
struct TYPE_5__ {int flags; TYPE_1__ widget; } ;
typedef TYPE_2__ textbox ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

int FUNC_1 ( widget *VAR_1 )
{
    textbox *VAR_2 = (textbox *) VAR_1;
    if ( VAR_2->flags & VAR_0 ) {
        return FUNC_0 ( VAR_2 );
    }
    return VAR_2->widget.h;
}
