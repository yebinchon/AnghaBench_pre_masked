
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * bh_nodes; scalar_t__ bh_has_heap_property; } ;
typedef TYPE_1__ binaryheap ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

Datum
FUNC_2(binaryheap *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0) && VAR_0->bh_has_heap_property);
 return VAR_0->bh_nodes[0];
}
