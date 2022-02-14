
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int buffersOnLevelsLen; int ** buffersOnLevels; int context; int nodeBuffersTab; } ;
struct TYPE_6__ {int queuedForEmptying; int isTemp; int level; int * pageBuffer; int pageBlocknum; scalar_t__ blocksCount; } ;
typedef int MemoryContext ;
typedef int List ;
typedef int GISTSTATE ;
typedef TYPE_1__ GISTNodeBuffer ;
typedef TYPE_2__ GISTBuildBuffers ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int ,void const*,int ,int*) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int **,int) ;

GISTNodeBuffer *
FUNC_4(GISTBuildBuffers *VAR_3, GISTSTATE *VAR_4,
      BlockNumber VAR_5, int VAR_6)
{
 GISTNodeBuffer *VAR_7;
 bool VAR_8;


 VAR_7 = (GISTNodeBuffer *) FUNC_1(VAR_3->nodeBuffersTab,
            (const void *) &VAR_5,
            VAR_0,
            &VAR_8);
 if (!VAR_8)
 {



  MemoryContext VAR_9 = FUNC_0(VAR_3->context);


  VAR_7->blocksCount = 0;
  VAR_7->pageBlocknum = VAR_1;
  VAR_7->pageBuffer = ((void*)0);
  VAR_7->queuedForEmptying = 0;
  VAR_7->isTemp = 0;
  VAR_7->level = VAR_6;





  if (VAR_6 >= VAR_3->buffersOnLevelsLen)
  {
   int VAR_10;

   VAR_3->buffersOnLevels =
    (List **) FUNC_3(VAR_3->buffersOnLevels,
           (VAR_6 + 1) * sizeof(List *));


   for (VAR_10 = VAR_3->buffersOnLevelsLen; VAR_10 <= VAR_6; VAR_10++)
    VAR_3->buffersOnLevels[VAR_10] = VAR_2;
   VAR_3->buffersOnLevelsLen = VAR_6 + 1;
  }
  VAR_3->buffersOnLevels[VAR_6] = FUNC_2(VAR_7,
            VAR_3->buffersOnLevels[VAR_6]);

  FUNC_0(VAR_9);
 }

 return VAR_7;
}
