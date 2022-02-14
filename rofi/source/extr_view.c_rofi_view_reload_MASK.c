
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idle_timeout; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int *) ;
 int VAR_1 ;

void FUNC_1 ( void )
{

    if ( VAR_0.idle_timeout == 0 ) {
        VAR_0.idle_timeout = FUNC_0 ( 1000 / 10, VAR_1, ((void*)0) );
    }
}
