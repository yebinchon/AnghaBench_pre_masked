
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned int h; } ;
typedef TYPE_1__ widget ;
struct TYPE_10__ {unsigned int length; double pos; scalar_t__ pos_length; } ;
typedef TYPE_2__ scrollbar ;
typedef int cairo_t ;


 unsigned int FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,scalar_t__,int ,unsigned int) ;
 int FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 unsigned int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10 ( widget *VAR_0, cairo_t *VAR_1 )
{
    scrollbar *VAR_2 = (scrollbar *) VAR_0;
    unsigned int VAR_3 = FUNC_7 ( VAR_0 );

    unsigned int VAR_4 = ( VAR_2->length * VAR_3 ) / ( (double) ( VAR_2->length + VAR_2->pos_length ) );
    unsigned int VAR_5 = VAR_0->h - VAR_4;
    double VAR_6 = ( ( VAR_4 ) / (double) ( VAR_2->length - 1 ) );
    unsigned int VAR_7 = VAR_5;
    unsigned int VAR_8 = VAR_2->pos * VAR_6;

    VAR_8 = FUNC_1 ( VAR_8, VAR_3 - VAR_5 );

    VAR_7 = FUNC_0 ( 2, VAR_7 );

    FUNC_5 ( FUNC_2 ( VAR_2 ), "handle-color", VAR_1 );

    FUNC_4 ( VAR_1,
                      FUNC_6 ( VAR_0 ),
                      FUNC_9 ( VAR_0 ) + VAR_8,
                      FUNC_8 ( VAR_0 ),
                      VAR_7 );
    FUNC_3 ( VAR_1 );
}
