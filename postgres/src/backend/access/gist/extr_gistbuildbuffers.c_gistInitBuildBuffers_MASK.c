
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hashCtl ;
struct TYPE_8__ {int pagesPerBuffer; int levelStep; int freeBlocksLen; long* freeBlocks; int buffersOnLevelsLen; int loadedBuffersLen; int rootlevel; scalar_t__ loadedBuffersCount; int ** loadedBuffers; int ** buffersOnLevels; void* bufferEmptyingQueue; int nodeBuffersTab; void* context; scalar_t__ nFreeBlocks; scalar_t__ nFileBlocks; int pfile; } ;
struct TYPE_7__ {int keysize; int entrysize; void* hcxt; } ;
typedef int List ;
typedef TYPE_1__ HASHCTL ;
typedef int GISTNodeBuffer ;
typedef TYPE_2__ GISTBuildBuffers ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (char*,int,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_2__* FUNC_3 (int) ;

GISTBuildBuffers *
FUNC_4(int VAR_5, int VAR_6, int VAR_7)
{
 GISTBuildBuffers *VAR_8;
 HASHCTL VAR_9;

 VAR_8 = FUNC_3(sizeof(GISTBuildBuffers));
 VAR_8->pagesPerBuffer = VAR_5;
 VAR_8->levelStep = VAR_6;





 VAR_8->pfile = FUNC_0(0);
 VAR_8->nFileBlocks = 0;


 VAR_8->nFreeBlocks = 0;
 VAR_8->freeBlocksLen = 32;
 VAR_8->freeBlocks = (long *) FUNC_3(VAR_8->freeBlocksLen * sizeof(long));





 VAR_8->context = VAR_0;





 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.keysize = sizeof(BlockNumber);
 VAR_9.entrysize = sizeof(GISTNodeBuffer);
 VAR_9.hcxt = VAR_0;
 VAR_8->nodeBuffersTab = FUNC_1("gistbuildbuffers",
            1024,
            &VAR_9,
            VAR_3 | VAR_1 | VAR_2);

 VAR_8->bufferEmptyingQueue = VAR_4;





 VAR_8->buffersOnLevelsLen = 1;
 VAR_8->buffersOnLevels = (List **) FUNC_3(sizeof(List *) *
            VAR_8->buffersOnLevelsLen);
 VAR_8->buffersOnLevels[0] = VAR_4;





 VAR_8->loadedBuffersLen = 32;
 VAR_8->loadedBuffers = (GISTNodeBuffer **) FUNC_3(VAR_8->loadedBuffersLen *
              sizeof(GISTNodeBuffer *));
 VAR_8->loadedBuffersCount = 0;

 VAR_8->rootlevel = VAR_7;

 return VAR_8;
}
