
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_xrm_database_t ;
struct TYPE_3__ {int connection; } ;
typedef TYPE_1__ xcb_stuff ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

void FUNC_4 ( xcb_stuff *VAR_1 )
{
    xcb_xrm_database_t *VAR_2 = FUNC_3 ( VAR_1->connection );
    if ( VAR_2 ) {
        FUNC_0 ( VAR_2, VAR_0 );
        FUNC_1 ( VAR_2, VAR_0 );
        FUNC_2 ( VAR_2 );
    }
}
