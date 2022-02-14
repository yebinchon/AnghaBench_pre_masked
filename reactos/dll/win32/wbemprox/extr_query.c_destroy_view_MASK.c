
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct view* result; scalar_t__ table; } ;


 int FUNC_0 (struct view*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2( struct view *VAR_0 )
{
    if (!VAR_0) return;
    if (VAR_0->table) FUNC_1( VAR_0->table );
    FUNC_0( VAR_0->result );
    FUNC_0( VAR_0 );
}
