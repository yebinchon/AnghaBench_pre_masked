
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int num_switchers; unsigned int* starts; unsigned int* lengths; TYPE_1__* switchers; } ;
struct TYPE_4__ {int mode; } ;
typedef int Mode ;
typedef TYPE_2__ CombiModePrivateData ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,char*) ;
 char* FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int const*) ;

__attribute__((used)) static char * FUNC_6 ( const Mode *VAR_0, unsigned int VAR_1 )
{
    CombiModePrivateData *VAR_2 = FUNC_5 ( VAR_0 );
    for ( unsigned VAR_3 = 0; VAR_3 < VAR_2->num_switchers; VAR_3++ ) {
        if ( VAR_1 >= VAR_2->starts[VAR_3] && VAR_1 < ( VAR_2->starts[VAR_3] + VAR_2->lengths[VAR_3] ) ) {
            char *VAR_4 = FUNC_3 ( VAR_2->switchers[VAR_3].mode, VAR_1 - VAR_2->starts[VAR_3] );
            char *VAR_5 = FUNC_2 ( "!%s %s", FUNC_4 ( VAR_2->switchers[VAR_3].mode ), VAR_4 );
            FUNC_1 ( VAR_4 );
            return VAR_5;
        }
    }

    FUNC_0 ();
    return ((void*)0);
}
