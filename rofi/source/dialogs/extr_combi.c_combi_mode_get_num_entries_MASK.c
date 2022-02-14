
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num_switchers; unsigned int* starts; unsigned int* lengths; TYPE_1__* switchers; } ;
struct TYPE_3__ {int mode; } ;
typedef int Mode ;
typedef TYPE_2__ CombiModePrivateData ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static unsigned int FUNC_2 ( const Mode *VAR_0 )
{
    const CombiModePrivateData *VAR_1 = (const CombiModePrivateData *) FUNC_1 ( VAR_0 );
    unsigned int VAR_2 = 0;
    for ( unsigned int VAR_3 = 0; VAR_3 < VAR_1->num_switchers; VAR_3++ ) {
        unsigned int VAR_4 = FUNC_0 ( VAR_1->switchers[VAR_3].mode );
        VAR_1->starts[VAR_3] = VAR_2;
        VAR_1->lengths[VAR_3] = VAR_4;
        VAR_2 += VAR_4;
    }
    return VAR_2;
}
