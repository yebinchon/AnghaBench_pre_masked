
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bh_nodes; } ;
typedef TYPE_1__ binaryheap ;
typedef int Datum ;



__attribute__((used)) static inline void
FUNC_0(binaryheap *VAR_0, int VAR_1, int VAR_2)
{
 Datum VAR_3;

 VAR_3 = VAR_0->bh_nodes[VAR_1];
 VAR_0->bh_nodes[VAR_1] = VAR_0->bh_nodes[VAR_2];
 VAR_0->bh_nodes[VAR_2] = VAR_3;
}
