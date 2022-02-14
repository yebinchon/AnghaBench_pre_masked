
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* hostname; int connections; int entry; scalar_t__ ref; } ;
typedef TYPE_1__ hostdata_t ;
typedef scalar_t__ LONG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6( hostdata_t *VAR_1 )
{
    LONG VAR_2;

    FUNC_0( &VAR_0 );
    if (!(VAR_2 = --VAR_1->ref)) FUNC_5( &VAR_1->entry );
    FUNC_1( &VAR_0 );
    if (VAR_2) return;

    FUNC_2( FUNC_4( &VAR_1->connections ) );
    FUNC_3( VAR_1->hostname );
    FUNC_3( VAR_1 );
}
