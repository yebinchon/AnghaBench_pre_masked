
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ prev; } ;
struct TYPE_13__ {int pfile; } ;
struct TYPE_12__ {scalar_t__ blocksCount; TYPE_3__* pageBuffer; } ;
typedef int IndexTuple ;
typedef TYPE_1__ GISTNodeBuffer ;
typedef TYPE_2__ GISTBuildBuffers ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,scalar_t__,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*) ;

bool
FUNC_7(GISTBuildBuffers *VAR_1, GISTNodeBuffer *VAR_2,
        IndexTuple *VAR_3)
{



 if (VAR_2->blocksCount <= 0)
  return 0;


 if (!VAR_2->pageBuffer)
  FUNC_5(VAR_1, VAR_2);




 FUNC_4(VAR_2->pageBuffer, VAR_3);





 if (FUNC_1(VAR_2->pageBuffer))
 {
  BlockNumber VAR_4;




  VAR_2->blocksCount--;




  VAR_4 = VAR_2->pageBuffer->prev;
  if (VAR_4 != VAR_0)
  {

   FUNC_0(VAR_2->blocksCount > 0);
   FUNC_2(VAR_1->pfile, VAR_4, VAR_2->pageBuffer);





   FUNC_3(VAR_1, VAR_4);
  }
  else
  {

   FUNC_0(VAR_2->blocksCount == 0);
   FUNC_6(VAR_2->pageBuffer);
   VAR_2->pageBuffer = ((void*)0);
  }
 }
 return 1;
}
