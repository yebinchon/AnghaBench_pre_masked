
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* last; int arena; } ;
typedef TYPE_1__ MYSQLND_MEMORY_POOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,size_t) ;

__attribute__((used)) static void *
FUNC_3(MYSQLND_MEMORY_POOL * VAR_0, size_t VAR_1)
{
 void *VAR_2 = ((void*)0);
 FUNC_0("mysqlnd_mempool_get_chunk");

 VAR_2 = FUNC_2(&VAR_0->arena, VAR_1);
 VAR_0->last = VAR_2;

 FUNC_1(VAR_2);
}
