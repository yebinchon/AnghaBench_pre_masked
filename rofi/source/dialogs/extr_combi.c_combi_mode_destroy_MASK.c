
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num_switchers; struct TYPE_3__* switchers; int mode; struct TYPE_3__* lengths; struct TYPE_3__* starts; } ;
typedef int Mode ;
typedef TYPE_1__ CombiModePrivateData ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4 ( Mode *VAR_0 )
{
    CombiModePrivateData *VAR_1 = (CombiModePrivateData *) FUNC_2 ( VAR_0 );
    if ( VAR_1 != ((void*)0) ) {
        FUNC_0 ( VAR_1->starts );
        FUNC_0 ( VAR_1->lengths );

        for ( unsigned int VAR_2 = 0; VAR_2 < VAR_1->num_switchers; VAR_2++ ) {
            FUNC_1 ( VAR_1->switchers[VAR_2].mode );
        }
        FUNC_0 ( VAR_1->switchers );
        FUNC_0 ( VAR_1 );
        FUNC_3 ( VAR_0, ((void*)0) );
    }
}
