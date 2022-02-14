
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {long firstblocknumber; } ;
typedef TYPE_1__ TapeShare ;
struct TYPE_12__ {long next; } ;
struct TYPE_11__ {int writing; long offsetBlockNumber; scalar_t__ buffer; scalar_t__ nbytes; scalar_t__ buffer_size; long curBlockNumber; int frozen; long firstBlockNumber; long nextBlockNumber; scalar_t__ pos; scalar_t__ dirty; } ;
struct TYPE_10__ {int nTapes; int pfile; TYPE_3__* tapes; } ;
typedef TYPE_2__ LogicalTapeSet ;
typedef TYPE_3__ LogicalTape ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_6__* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,long,void*) ;
 int FUNC_8 (TYPE_2__*,long,void*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

void
FUNC_11(LogicalTapeSet *VAR_1, int VAR_2, TapeShare *VAR_3)
{
 LogicalTape *VAR_4;

 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1->nTapes);
 VAR_4 = &VAR_1->tapes[VAR_2];
 FUNC_0(VAR_4->writing);
 FUNC_0(VAR_4->offsetBlockNumber == 0L);





 if (VAR_4->dirty)
 {
  FUNC_6(VAR_4->buffer + VAR_4->nbytes,
          VAR_4->buffer_size - VAR_4->nbytes);

  FUNC_5(VAR_4->buffer, VAR_4->nbytes);
  FUNC_8(VAR_1, VAR_4->curBlockNumber, (void *) VAR_4->buffer);
  VAR_4->writing = 0;
 }
 VAR_4->writing = 0;
 VAR_4->frozen = 1;
 if (!VAR_4->buffer || VAR_4->buffer_size != VAR_0)
 {
  if (VAR_4->buffer)
   FUNC_10(VAR_4->buffer);
  VAR_4->buffer = FUNC_9(VAR_0);
  VAR_4->buffer_size = VAR_0;
 }


 VAR_4->curBlockNumber = VAR_4->firstBlockNumber;
 VAR_4->pos = 0;
 VAR_4->nbytes = 0;

 if (VAR_4->firstBlockNumber == -1L)
  VAR_4->nextBlockNumber = -1L;
 FUNC_7(VAR_1, VAR_4->curBlockNumber, (void *) VAR_4->buffer);
 if (FUNC_4(VAR_4->buffer))
  VAR_4->nextBlockNumber = -1L;
 else
  VAR_4->nextBlockNumber = FUNC_3(VAR_4->buffer)->next;
 VAR_4->nbytes = FUNC_2(VAR_4->buffer);


 if (VAR_3)
 {
  FUNC_1(VAR_1->pfile);
  VAR_3->firstblocknumber = VAR_4->firstBlockNumber;
 }
}
