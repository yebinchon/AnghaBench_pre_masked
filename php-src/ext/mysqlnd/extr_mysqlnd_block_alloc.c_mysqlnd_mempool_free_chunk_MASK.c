
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* last; TYPE_1__* arena; } ;
struct TYPE_4__ {char* ptr; } ;
typedef TYPE_2__ MYSQLND_MEMORY_POOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(MYSQLND_MEMORY_POOL * VAR_1, void * VAR_2)
{
 FUNC_0("mysqlnd_mempool_free_chunk");


 if (VAR_2 == VAR_1->last) {




  VAR_1->arena->ptr = (char*)VAR_2;
  VAR_1->last = ((void*)0);
 }

 VAR_0;
}
