
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocedNodeCount; size_t nodeSize; int nodes; scalar_t__ nodeCount; int * uttable; } ;
typedef TYPE_1__ UTHashTable ;
typedef int UTHashNode ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,size_t) ;

void FUNC_2(UTHashTable *VAR_0, size_t VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_2 >= sizeof(UTHashNode));

 VAR_0->uttable = ((void*)0);
 VAR_0->allocedNodeCount = (VAR_1 == 0) ? 1 : VAR_1;
 VAR_0->nodeCount = 0;
 VAR_0->nodeSize = VAR_2;
 VAR_0->nodes = FUNC_1(VAR_0->nodeSize, VAR_2 * VAR_0->allocedNodeCount);
}
