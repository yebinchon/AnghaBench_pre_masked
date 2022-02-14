
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int limit; TYPE_1__* table; } ;
typedef TYPE_2__ stb_ptrmap ;
struct TYPE_5__ {scalar_t__ k; void* v; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void FUNC_0 (void*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(stb_ptrmap *VAR_2, void (*VAR_3)(void *))
{
   int VAR_4;
   if (VAR_3)
      for (VAR_4=0; VAR_4 < VAR_2->limit; ++VAR_4)
         if (VAR_2->table[VAR_4].k != VAR_1 && VAR_2->table[VAR_4].k != VAR_0) {
            if (VAR_3 == FUNC_0)
               FUNC_0(VAR_2->table[VAR_4].v);
            else
               VAR_3(VAR_2->table[VAR_4].v);
         }
   FUNC_1(VAR_2);
}
