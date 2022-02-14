
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t bh_size; size_t bh_space; int * bh_nodes; } ;
typedef TYPE_1__ binaryheap ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(binaryheap *VAR_1, Datum VAR_2)
{
 if (VAR_1->bh_size >= VAR_1->bh_space)
  FUNC_0(VAR_0, "out of binary heap slots");
 VAR_1->bh_nodes[VAR_1->bh_size] = VAR_2;
 VAR_1->bh_size++;
 FUNC_1(VAR_1, VAR_1->bh_size - 1);
}
