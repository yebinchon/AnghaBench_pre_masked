
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ s; TYPE_1__* sock; } ;
typedef TYPE_2__ server_memory ;
struct TYPE_5__ {scalar_t__ s; TYPE_2__* buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6 (void)
{
    int VAR_3;
    server_memory *VAR_4 = FUNC_3 ( VAR_2 );

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++ )
    {
        FUNC_2 ( VAR_4->sock[VAR_3].buf );
        if ( VAR_4->sock[VAR_3].s != VAR_0 )
            FUNC_4 ( VAR_4->sock[VAR_3].s );
    }
    FUNC_5 ( FUNC_4 ( VAR_4->s ) == 0, "closesocket failed\n" );
    FUNC_2 ( VAR_4 );
    FUNC_0 ( FUNC_1 () );
}
