
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int widget ;
struct TYPE_5__ {int h; } ;
struct TYPE_6__ {int flags; scalar_t__ changed; TYPE_1__ widget; } ;
typedef TYPE_2__ textbox ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2 ( widget *VAR_1 )
{
    textbox *VAR_2 = (textbox *) VAR_1;
    if ( ( VAR_2->flags & VAR_0 ) == 0 ) {
        return VAR_2->widget.h;
    }
    if ( VAR_2->changed ) {
        FUNC_0 ( VAR_2 );
    }
    int VAR_3 = FUNC_1 ( VAR_2 );
    return VAR_3;
}
