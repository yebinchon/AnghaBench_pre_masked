
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int w; int y; int h; } ;
typedef TYPE_1__ widget ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0 ( const widget *VAR_2, int VAR_3, int VAR_4 )
{
    if ( VAR_2 == ((void*)0) ) {
        return VAR_0;
    }

    if ( VAR_3 >= ( VAR_2->x ) && VAR_3 < ( VAR_2->x + VAR_2->w ) ) {
        if ( VAR_4 >= ( VAR_2->y ) && VAR_4 < ( VAR_2->y + VAR_2->h ) ) {
            return VAR_1;
        }
    }
    return VAR_0;
}
