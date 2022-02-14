
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ distance; } ;
struct TYPE_7__ {TYPE_1__ top; } ;
struct TYPE_8__ {int h; TYPE_2__ border; } ;
struct TYPE_9__ {int length; TYPE_3__ widget; scalar_t__ pos_length; } ;
typedef TYPE_4__ scrollbar ;
typedef int guint ;


 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned int,int) ;

guint FUNC_2 ( const scrollbar *VAR_0, int VAR_1 )
{
    VAR_1 -= VAR_0->widget.border.top.distance;
    if ( VAR_1 < 0 ) {
        return 0;
    }

    if ( VAR_1 > VAR_0->widget.h ) {
        return VAR_0->length - 1;
    }

    short VAR_2 = ( VAR_0->length * VAR_0->widget.h ) / ( (double) ( VAR_0->length + VAR_0->pos_length ) );
    short VAR_3 = VAR_0->widget.h - VAR_2;
    double VAR_4 = ( ( VAR_2 ) / (double) ( VAR_0->length - 1 ) );
    short VAR_5 = VAR_3 / 2;
    VAR_1 -= VAR_5;
    VAR_1 = FUNC_1 ( FUNC_0 ( 0, VAR_1 ), VAR_0->widget.h - 2 * VAR_5 );

    unsigned int VAR_6 = ( ( VAR_1 ) / VAR_4 );
    return FUNC_1 ( VAR_6, VAR_0->length - 1 );
}
