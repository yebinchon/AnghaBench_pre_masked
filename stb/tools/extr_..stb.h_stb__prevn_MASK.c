
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** prevn; } ;
typedef TYPE_1__ stb__nochildren ;
struct TYPE_4__ {void** prevn; } ;
typedef TYPE_2__ stb__alloc ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;

__attribute__((used)) static void *** FUNC_1(void *VAR_1)
{
   if (FUNC_0(VAR_1) == VAR_0) {
      stb__alloc *VAR_2 = (stb__alloc *) VAR_1 - 1;
      return &VAR_2->prevn;
   } else {
      stb__nochildren *VAR_3 = (stb__nochildren *) VAR_1 - 1;
      return &VAR_3->prevn;
   }
}
