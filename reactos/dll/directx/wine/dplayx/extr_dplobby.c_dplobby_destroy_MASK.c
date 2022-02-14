
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* DebugInfo; } ;
struct TYPE_7__ {TYPE_5__ lock; int msgs; scalar_t__ msgtid; } ;
struct TYPE_6__ {scalar_t__* Spare; } ;
typedef TYPE_2__ IDirectPlayLobbyImpl ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(IDirectPlayLobbyImpl *VAR_3)
{
    if ( VAR_3->msgtid )
        FUNC_2( "Should kill the msg thread\n" );

    FUNC_0( VAR_3->msgs, VAR_2, VAR_0, VAR_1 );
    VAR_3->lock.DebugInfo->Spare[0] = 0;
    FUNC_1( &VAR_3->lock );
    FUNC_4( FUNC_3(), 0, VAR_3 );
}
