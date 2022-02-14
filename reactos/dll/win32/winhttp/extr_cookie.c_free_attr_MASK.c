
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr {struct attr* value; struct attr* name; } ;


 int FUNC_0 (struct attr*) ;

__attribute__((used)) static void FUNC_1( struct attr *VAR_0 )
{
    if (!VAR_0) return;
    FUNC_0( VAR_0->name );
    FUNC_0( VAR_0->value );
    FUNC_0( VAR_0 );
}
