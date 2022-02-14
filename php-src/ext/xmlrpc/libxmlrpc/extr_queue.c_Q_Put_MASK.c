
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cursor; } ;
typedef TYPE_2__ queue ;
struct TYPE_4__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(queue *VAR_2, void *VAR_3)
{
   if(VAR_2 && VAR_3) {
      if(VAR_2->cursor == ((void*)0))
         return VAR_0;

      VAR_2->cursor->data = VAR_3;
      return VAR_1;
   }
   return VAR_0;
}
