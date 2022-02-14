
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* get_width ) (TYPE_1__*) ;int w; } ;
typedef TYPE_1__ widget ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1 ( widget *VAR_0 )
{
    if ( VAR_0 ) {
        if ( VAR_0->get_width ) {
            return VAR_0->get_width ( VAR_0 );
        }
        return VAR_0->w;
    }
    return 0;
}
