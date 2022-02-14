
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bh_size; int * bh_nodes; scalar_t__ bh_has_heap_property; } ;
typedef TYPE_1__ binaryheap ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void
FUNC_3(binaryheap *VAR_0, Datum VAR_1)
{
 FUNC_0(!FUNC_1(VAR_0) && VAR_0->bh_has_heap_property);

 VAR_0->bh_nodes[0] = VAR_1;

 if (VAR_0->bh_size > 1)
  FUNC_2(VAR_0, 0);
}
