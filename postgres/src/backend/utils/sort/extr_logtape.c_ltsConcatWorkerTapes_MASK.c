
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef long int64 ;
struct TYPE_6__ {int firstblocknumber; } ;
typedef TYPE_1__ TapeShare ;
struct TYPE_8__ {long offsetBlockNumber; int max_size; int firstBlockNumber; } ;
struct TYPE_7__ {int nTapes; long nBlocksAllocated; long nBlocksWritten; long nHoleBlocks; int * pfile; TYPE_3__* tapes; } ;
typedef int SharedFileSet ;
typedef TYPE_2__ LogicalTapeSet ;
typedef TYPE_3__ LogicalTape ;
typedef int BufFile ;


 int FUNC_0 (int) ;
 long VAR_0 ;
 long FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,char*) ;
 long FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,long) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void
FUNC_6(LogicalTapeSet *VAR_3, TapeShare *VAR_4,
      SharedFileSet *VAR_5)
{
 LogicalTape *VAR_6 = ((void*)0);
 long VAR_7 = 0L;
 long VAR_8 = 0L;
 int VAR_9;


 FUNC_0(VAR_3->nTapes >= 2);






 for (VAR_9 = 0; VAR_9 < VAR_3->nTapes - 1; VAR_9++)
 {
  char VAR_10[VAR_1];
  BufFile *VAR_11;
  int64 VAR_12;

  VAR_6 = &VAR_3->tapes[VAR_9];

  FUNC_5(VAR_9, VAR_10);
  VAR_11 = FUNC_2(VAR_5, VAR_10);
  VAR_12 = FUNC_3(VAR_11);





  VAR_6->firstBlockNumber = VAR_4[VAR_9].firstblocknumber;
  if (VAR_9 == 0)
  {
   VAR_3->pfile = VAR_11;
   VAR_6->offsetBlockNumber = 0L;
  }
  else
  {
   VAR_6->offsetBlockNumber = FUNC_1(VAR_3->pfile, VAR_11);
  }

  VAR_6->max_size = FUNC_4(VAR_2, VAR_12);
  VAR_7 = VAR_12 / VAR_0;
  VAR_8 += VAR_7;
 }







 VAR_3->nBlocksAllocated = VAR_6->offsetBlockNumber + VAR_7;
 VAR_3->nBlocksWritten = VAR_3->nBlocksAllocated;
 VAR_3->nHoleBlocks = VAR_3->nBlocksAllocated - VAR_8;
}
