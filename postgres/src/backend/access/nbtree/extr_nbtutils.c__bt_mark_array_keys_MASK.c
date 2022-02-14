
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cur_elem; int mark_elem; } ;
struct TYPE_6__ {int numArrayKeys; TYPE_3__* arrayKeys; } ;
struct TYPE_5__ {int opaque; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* BTScanOpaque ;
typedef TYPE_3__ BTArrayKeyInfo ;



void
FUNC_0(IndexScanDesc VAR_0)
{
 BTScanOpaque VAR_1 = (BTScanOpaque) VAR_0->opaque;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->numArrayKeys; VAR_2++)
 {
  BTArrayKeyInfo *VAR_3 = &VAR_1->arrayKeys[VAR_2];

  VAR_3->mark_elem = VAR_3->cur_elem;
 }
}
