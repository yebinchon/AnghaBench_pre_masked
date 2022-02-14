
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rofi_int_matcher ;
struct TYPE_5__ {unsigned int num_switchers; unsigned int* starts; unsigned int* lengths; TYPE_1__* switchers; } ;
struct TYPE_4__ {int mode; scalar_t__ disable; } ;
typedef int Mode ;
typedef TYPE_2__ CombiModePrivateData ;


 TYPE_2__* FUNC_0 (int const*) ;
 int FUNC_1 (int ,int **,unsigned int) ;

__attribute__((used)) static int FUNC_2 ( const Mode *VAR_0, rofi_int_matcher **VAR_1, unsigned int VAR_2 )
{
    CombiModePrivateData *VAR_3 = FUNC_0 ( VAR_0 );
    for ( unsigned VAR_4 = 0; VAR_4 < VAR_3->num_switchers; VAR_4++ ) {
        if ( VAR_3->switchers[VAR_4].disable ) {
            continue;
        }
        if ( VAR_2 >= VAR_3->starts[VAR_4] && VAR_2 < ( VAR_3->starts[VAR_4] + VAR_3->lengths[VAR_4] ) ) {
            return FUNC_1 ( VAR_3->switchers[VAR_4].mode, VAR_1, VAR_2 - VAR_3->starts[VAR_4] );
        }
    }
    return 0;
}
