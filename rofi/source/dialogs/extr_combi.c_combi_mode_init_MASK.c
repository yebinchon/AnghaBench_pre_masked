
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* starts; int num_switchers; unsigned int* lengths; scalar_t__ cmd_list_length; TYPE_1__* switchers; } ;
struct TYPE_3__ {int mode; } ;
typedef int Mode ;
typedef TYPE_2__ CombiModePrivateData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,void*) ;

__attribute__((used)) static int FUNC_6 ( Mode *VAR_2 )
{
    if ( FUNC_3 ( VAR_2 ) == ((void*)0) ) {
        CombiModePrivateData *VAR_3 = FUNC_1 ( sizeof ( *VAR_3 ) );
        FUNC_5 ( VAR_2, (void *) VAR_3 );
        FUNC_0 ( VAR_2 );
        VAR_3->starts = FUNC_1 ( sizeof ( int ) * VAR_3->num_switchers );
        VAR_3->lengths = FUNC_1 ( sizeof ( int ) * VAR_3->num_switchers );
        for ( unsigned int VAR_4 = 0; VAR_4 < VAR_3->num_switchers; VAR_4++ ) {
            if ( !FUNC_4 ( VAR_3->switchers[VAR_4].mode ) ) {
                return VAR_0;
            }
        }
        if ( VAR_3->cmd_list_length == 0 ) {
            VAR_3->cmd_list_length = 0;
            for ( unsigned int VAR_5 = 0; VAR_5 < VAR_3->num_switchers; VAR_5++ ) {
                unsigned int VAR_6 = FUNC_2 ( VAR_3->switchers[VAR_5].mode );
                VAR_3->starts[VAR_5] = VAR_3->cmd_list_length;
                VAR_3->lengths[VAR_5] = VAR_6;
                VAR_3->cmd_list_length += VAR_6;
            }
        }
    }
    return VAR_1;
}
