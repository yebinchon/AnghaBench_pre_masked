
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {long prev; long next; } ;
struct TYPE_7__ {int frozen; scalar_t__ buffer_size; int pos; long curBlockNumber; long firstBlockNumber; long nextBlockNumber; scalar_t__ buffer; scalar_t__ nbytes; } ;
struct TYPE_6__ {int nTapes; TYPE_2__* tapes; } ;
typedef TYPE_1__ LogicalTapeSet ;
typedef TYPE_2__ LogicalTape ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_1__*,long,void*) ;

size_t
FUNC_4(LogicalTapeSet *VAR_3, int VAR_4, size_t VAR_5)
{
 LogicalTape *VAR_6;
 size_t VAR_7 = 0;

 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_3->nTapes);
 VAR_6 = &VAR_3->tapes[VAR_4];
 FUNC_0(VAR_6->frozen);
 FUNC_0(VAR_6->buffer_size == VAR_0);




 if (VAR_5 <= (size_t) VAR_6->pos)
 {
  VAR_6->pos -= (int) VAR_5;
  return VAR_5;
 }






 VAR_7 = (size_t) VAR_6->pos;
 while (VAR_5 > VAR_7)
 {
  long VAR_8 = FUNC_1(VAR_6->buffer)->prev;

  if (VAR_8 == -1L)
  {

   if (VAR_6->curBlockNumber != VAR_6->firstBlockNumber)
    FUNC_2(VAR_1, "unexpected end of tape");
   VAR_6->pos = 0;
   return VAR_7;
  }

  FUNC_3(VAR_3, VAR_8, (void *) VAR_6->buffer);

  if (FUNC_1(VAR_6->buffer)->next != VAR_6->curBlockNumber)
   FUNC_2(VAR_1, "broken tape, next of block %ld is %ld, expected %ld",
     VAR_8,
     FUNC_1(VAR_6->buffer)->next,
     VAR_6->curBlockNumber);

  VAR_6->nbytes = VAR_2;
  VAR_6->curBlockNumber = VAR_8;
  VAR_6->nextBlockNumber = FUNC_1(VAR_6->buffer)->next;

  VAR_7 += VAR_2;
 }






 VAR_6->pos = VAR_7 - VAR_5;
 return VAR_5;
}
