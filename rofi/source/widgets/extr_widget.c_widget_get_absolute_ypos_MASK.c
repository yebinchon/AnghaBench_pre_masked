
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* parent; scalar_t__ y; } ;
typedef TYPE_1__ widget ;



int FUNC_0 ( widget *VAR_0 )
{
    int VAR_1 = 0;
    if ( VAR_0 ) {
        VAR_1 += VAR_0->y;
        if ( VAR_0->parent ) {
            VAR_1 += FUNC_0 ( VAR_0->parent );
        }
    }
    return VAR_1;
}
