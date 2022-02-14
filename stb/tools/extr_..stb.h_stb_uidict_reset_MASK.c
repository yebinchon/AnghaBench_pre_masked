
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int limit; scalar_t__ deleted; scalar_t__ count; scalar_t__ has_del; scalar_t__ has_empty; TYPE_1__* table; } ;
typedef TYPE_2__ stb_uidict ;
struct TYPE_4__ {int k; } ;



void FUNC_0(stb_uidict *VAR_0)
{
   int VAR_1;
   for (VAR_1=0; VAR_1 < VAR_0->limit; ++VAR_1)
      VAR_0->table[VAR_1].k = 0xffffffff;
   VAR_0->has_empty = VAR_0->has_del = 0;
   VAR_0->count = 0;
   VAR_0->deleted = 0;
}
