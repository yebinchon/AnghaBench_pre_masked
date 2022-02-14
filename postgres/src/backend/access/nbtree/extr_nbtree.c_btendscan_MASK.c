
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ numKilled; int markItemIndex; struct TYPE_7__* currTuples; struct TYPE_7__* killedItems; int * arrayContext; struct TYPE_7__* keyData; int markPos; int currPos; } ;
struct TYPE_6__ {int opaque; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* BTScanOpaque ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(IndexScanDesc VAR_0)
{
 BTScanOpaque VAR_1 = (BTScanOpaque) VAR_0->opaque;


 if (FUNC_0(VAR_1->currPos))
 {

  if (VAR_1->numKilled > 0)
   FUNC_3(VAR_0);
  FUNC_1(VAR_1->currPos);
 }

 VAR_1->markItemIndex = -1;
 FUNC_1(VAR_1->markPos);




 if (VAR_1->keyData != ((void*)0))
  FUNC_4(VAR_1->keyData);

 if (VAR_1->arrayContext != ((void*)0))
  FUNC_2(VAR_1->arrayContext);
 if (VAR_1->killedItems != ((void*)0))
  FUNC_4(VAR_1->killedItems);
 if (VAR_1->currTuples != ((void*)0))
  FUNC_4(VAR_1->currTuples);

 FUNC_4(VAR_1);
}
