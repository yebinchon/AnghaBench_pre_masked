
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ bufferEmptyingQueue; } ;
struct TYPE_12__ {TYPE_1__* giststate; TYPE_4__* gfbb; } ;
struct TYPE_11__ {int queuedForEmptying; int level; int nodeBlocknum; } ;
struct TYPE_10__ {int tempCxt; } ;
typedef int IndexTuple ;
typedef TYPE_2__ GISTNodeBuffer ;
typedef TYPE_3__ GISTBuildState ;
typedef TYPE_4__ GISTBuildBuffers ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(GISTBuildState *VAR_1)
{
 GISTBuildBuffers *VAR_2 = VAR_1->gfbb;


 while (VAR_2->bufferEmptyingQueue != VAR_0)
 {
  GISTNodeBuffer *VAR_3;


  VAR_3 = (GISTNodeBuffer *) FUNC_4(VAR_2->bufferEmptyingQueue);
  VAR_2->bufferEmptyingQueue = FUNC_5(VAR_2->bufferEmptyingQueue);
  VAR_3->queuedForEmptying = 0;





  FUNC_3(VAR_2);
  while (1)
  {
   IndexTuple VAR_4;


   if (!FUNC_1(VAR_2, VAR_3, &VAR_4))
    break;
   if (FUNC_2(VAR_1, VAR_4, VAR_3->nodeBlocknum, VAR_3->level))
   {




    break;
   }


   FUNC_0(VAR_1->giststate->tempCxt);
  }
 }
}
