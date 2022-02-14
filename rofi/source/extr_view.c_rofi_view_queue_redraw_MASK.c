
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ repaint_source; int count; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 int VAR_3 ;

void FUNC_2 ( void )
{
    if ( VAR_2 && VAR_0.repaint_source == 0 ) {
        VAR_0.count++;
        FUNC_0 ( "redraw %llu", VAR_0.count );
        VAR_0.repaint_source = FUNC_1 ( VAR_1, VAR_3, ((void*)0), ((void*)0) );
    }
}
