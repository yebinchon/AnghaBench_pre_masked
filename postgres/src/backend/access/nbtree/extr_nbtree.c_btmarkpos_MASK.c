
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int itemIndex; } ;
struct TYPE_7__ {int markItemIndex; scalar_t__ numArrayKeys; int markPos; TYPE_5__ currPos; } ;
struct TYPE_6__ {int opaque; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* BTScanOpaque ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_5__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(IndexScanDesc VAR_0)
{
 BTScanOpaque VAR_1 = (BTScanOpaque) VAR_0->opaque;


 FUNC_2(VAR_1->markPos);







 if (FUNC_1(VAR_1->currPos))
  VAR_1->markItemIndex = VAR_1->currPos.itemIndex;
 else
 {
  FUNC_0(VAR_1->markPos);
  VAR_1->markItemIndex = -1;
 }


 if (VAR_1->numArrayKeys)
  FUNC_3(VAR_0);
}
