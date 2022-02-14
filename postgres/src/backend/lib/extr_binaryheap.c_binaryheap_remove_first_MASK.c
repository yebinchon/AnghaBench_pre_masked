
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bh_size; int * bh_nodes; scalar_t__ bh_has_heap_property; } ;
typedef TYPE_1__ binaryheap ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

Datum
FUNC_4(binaryheap *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0) && VAR_0->bh_has_heap_property);

 if (VAR_0->bh_size == 1)
 {
  VAR_0->bh_size--;
  return VAR_0->bh_nodes[0];
 }






 FUNC_3(VAR_0, 0, VAR_0->bh_size - 1);
 VAR_0->bh_size--;
 FUNC_2(VAR_0, 0);

 return VAR_0->bh_nodes[VAR_0->bh_size];
}
