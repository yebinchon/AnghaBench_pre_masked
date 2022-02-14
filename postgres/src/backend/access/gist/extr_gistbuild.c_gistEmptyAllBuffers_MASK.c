
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int buffersOnLevelsLen; scalar_t__* buffersOnLevels; int bufferEmptyingQueue; int context; } ;
struct TYPE_10__ {TYPE_1__* giststate; TYPE_4__* gfbb; } ;
struct TYPE_9__ {scalar_t__ blocksCount; int queuedForEmptying; } ;
struct TYPE_8__ {int tempCxt; } ;
typedef int MemoryContext ;
typedef TYPE_2__ GISTNodeBuffer ;
typedef TYPE_3__ GISTBuildState ;
typedef TYPE_4__ GISTBuildBuffers ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(GISTBuildState *VAR_2)
{
 GISTBuildBuffers *VAR_3 = VAR_2->gfbb;
 MemoryContext VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2->giststate->tempCxt);




 for (VAR_5 = VAR_3->buffersOnLevelsLen - 1; VAR_5 >= 0; VAR_5--)
 {







  while (VAR_3->buffersOnLevels[VAR_5] != VAR_1)
  {
   GISTNodeBuffer *VAR_6;

   VAR_6 = (GISTNodeBuffer *) FUNC_4(VAR_3->buffersOnLevels[VAR_5]);

   if (VAR_6->blocksCount != 0)
   {




    if (!VAR_6->queuedForEmptying)
    {
     FUNC_0(VAR_3->context);
     VAR_6->queuedForEmptying = 1;
     VAR_3->bufferEmptyingQueue =
      FUNC_3(VAR_6, VAR_3->bufferEmptyingQueue);
     FUNC_0(VAR_2->giststate->tempCxt);
    }
    FUNC_2(VAR_2);
   }
   else
    VAR_3->buffersOnLevels[VAR_5] =
     FUNC_5(VAR_3->buffersOnLevels[VAR_5]);
  }
  FUNC_1(VAR_0, "emptied all buffers at level %d", VAR_5);
 }
 FUNC_0(VAR_4);
}
