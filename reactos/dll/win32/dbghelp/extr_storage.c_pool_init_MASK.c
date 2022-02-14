
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {size_t arena_size; int arena_full; int arena_list; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct pool* VAR_0, size_t VAR_1)
{
    FUNC_0( &VAR_0->arena_list );
    FUNC_0( &VAR_0->arena_full );
    VAR_0->arena_size = VAR_1;
}
