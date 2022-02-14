
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pairingheap_node ;
struct TYPE_2__ {int orderbynulls; int orderbyvals; } ;
typedef TYPE_1__ ReorderTuple ;
typedef int IndexScanState ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(const pairingheap_node *VAR_0, const pairingheap_node *VAR_1,
     void *VAR_2)
{
 ReorderTuple *VAR_3 = (ReorderTuple *) VAR_0;
 ReorderTuple *VAR_4 = (ReorderTuple *) VAR_1;
 IndexScanState *VAR_5 = (IndexScanState *) VAR_2;


 return FUNC_0(VAR_4->orderbyvals, VAR_4->orderbynulls,
         VAR_3->orderbyvals, VAR_3->orderbynulls,
         VAR_5);
}
