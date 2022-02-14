
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* ptr; scalar_t__ end; } ;
struct TYPE_4__ {void* last; TYPE_2__* arena; } ;
typedef TYPE_1__ MYSQLND_MEMORY_POOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (size_t,size_t) ;
 long FUNC_3 (size_t) ;
 int FUNC_4 (void*,void*,int ) ;
 void* FUNC_5 (TYPE_2__**,size_t) ;

__attribute__((used)) static void *
FUNC_6(MYSQLND_MEMORY_POOL * VAR_0, void * VAR_1, size_t VAR_2, size_t VAR_3)
{
 FUNC_0("mysqlnd_mempool_resize_chunk");



 if (VAR_1 == VAR_0->last
   && (FUNC_3(VAR_3) <= ((char*)VAR_0->arena->end - (char*)VAR_1))) {




  VAR_0->arena->ptr = (char*)VAR_1 + FUNC_3(VAR_3);
  FUNC_1(VAR_1);
 }


 void *VAR_4 = FUNC_5(&VAR_0->arena, VAR_3);
 FUNC_4(VAR_4, VAR_1, FUNC_2(VAR_2, VAR_3));
 VAR_0->last = VAR_1 = VAR_4;
 FUNC_1(VAR_1);
}
