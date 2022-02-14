
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cairo_surface_t ;
struct TYPE_5__ {unsigned int num_switchers; unsigned int* starts; unsigned int* lengths; TYPE_1__* switchers; } ;
struct TYPE_4__ {int mode; } ;
typedef int Mode ;
typedef TYPE_2__ CombiModePrivateData ;


 int * FUNC_0 (int ,unsigned int,int) ;
 TYPE_2__* FUNC_1 (int const*) ;

__attribute__((used)) static cairo_surface_t * FUNC_2 ( const Mode *VAR_0, unsigned int VAR_1, int VAR_2 )
{
    CombiModePrivateData *VAR_3 = FUNC_1 ( VAR_0 );
    for ( unsigned VAR_4 = 0; VAR_4 < VAR_3->num_switchers; VAR_4++ ) {
        if ( VAR_1 >= VAR_3->starts[VAR_4] && VAR_1 < ( VAR_3->starts[VAR_4] + VAR_3->lengths[VAR_4] ) ) {
            cairo_surface_t *VAR_5 = FUNC_0 ( VAR_3->switchers[VAR_4].mode, VAR_1 - VAR_3->starts[VAR_4], VAR_2 );
            return VAR_5;
        }
    }
    return ((void*)0);
}
