
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* package; struct TYPE_6__* target; struct TYPE_6__* source; struct TYPE_6__* action; scalar_t__ handle; int entry; int refs; } ;
typedef TYPE_2__ msi_custom_action_info ;
struct TYPE_5__ {int hdr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( msi_custom_action_info *VAR_1 )
{
    FUNC_1( &VAR_0 );

    if (!--VAR_1->refs)
    {
        FUNC_3( &VAR_1->entry );
        if (VAR_1->handle)
            FUNC_0( VAR_1->handle );
        FUNC_4( VAR_1->action );
        FUNC_4( VAR_1->source );
        FUNC_4( VAR_1->target );
        FUNC_5( &VAR_1->package->hdr );
        FUNC_4( VAR_1 );
    }

    FUNC_2( &VAR_0 );
}
