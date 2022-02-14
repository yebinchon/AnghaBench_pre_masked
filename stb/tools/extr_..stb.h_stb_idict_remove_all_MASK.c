
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int limit; scalar_t__ deleted; scalar_t__ count; scalar_t__ has_del; scalar_t__ has_empty; TYPE_1__* table; } ;
typedef TYPE_2__ stb_idict ;
struct TYPE_4__ {int k; } ;


 int VAR_0 ;

void FUNC_0(stb_idict *VAR_1)
{
   int VAR_2;
   for (VAR_2=0; VAR_2 < VAR_1->limit; ++VAR_2)
      VAR_1->table[VAR_2].k = VAR_0;
   VAR_1->has_empty = VAR_1->has_del = 0;
   VAR_1->count = 0;
   VAR_1->deleted = 0;
}
