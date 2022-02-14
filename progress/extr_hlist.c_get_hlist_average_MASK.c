
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; scalar_t__ value; } ;
typedef TYPE_1__ hlist ;



int FUNC_0(hlist *VAR_0, int VAR_1) {
   unsigned long long VAR_2 = 0;

   while (VAR_0) {
      VAR_2 += VAR_0->value;
      VAR_0 = VAR_0->next;
   }
   return VAR_2 / VAR_1;
}
