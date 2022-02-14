
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcount; struct TYPE_4__* pointer_to_free; } ;
typedef TYPE_1__ fast_chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(fast_chunk *VAR_0)
{
   if (VAR_0) {
      FUNC_0(VAR_0->refcount > 0);
      --VAR_0->refcount;
      if (VAR_0->refcount == 0) {
         FUNC_1(VAR_0->pointer_to_free);
         FUNC_1(VAR_0);
      }
   }
}
