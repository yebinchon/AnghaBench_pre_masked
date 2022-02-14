
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursor; } ;
typedef TYPE_1__ queue ;
typedef int q_iter ;


 void* FUNC_0 (TYPE_1__*,int ) ;

void *FUNC_1(queue* VAR_0) {
   if(VAR_0) {
      return FUNC_0(VAR_0, (q_iter)VAR_0->cursor);
   }
   return 0;
}
