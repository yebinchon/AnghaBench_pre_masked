
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {long prev; long next; } ;
struct TYPE_8__ {int writing; long offsetBlockNumber; char* buffer; scalar_t__ buffer_size; int curBlockNumber; int firstBlockNumber; scalar_t__ pos; int dirty; scalar_t__ nbytes; } ;
struct TYPE_7__ {int nTapes; TYPE_2__* tapes; } ;
typedef TYPE_1__ LogicalTapeSet ;
typedef TYPE_2__ LogicalTape ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,void*) ;
 int FUNC_5 (char*,void*,size_t) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

void
FUNC_7(LogicalTapeSet *VAR_3, int VAR_4,
     void *VAR_5, size_t VAR_6)
{
 LogicalTape *VAR_7;
 size_t VAR_8;

 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_3->nTapes);
 VAR_7 = &VAR_3->tapes[VAR_4];
 FUNC_0(VAR_7->writing);
 FUNC_0(VAR_7->offsetBlockNumber == 0L);


 if (VAR_7->buffer == ((void*)0))
 {
  VAR_7->buffer = (char *) FUNC_6(VAR_0);
  VAR_7->buffer_size = VAR_0;
 }
 if (VAR_7->curBlockNumber == -1)
 {
  FUNC_0(VAR_7->firstBlockNumber == -1);
  FUNC_0(VAR_7->pos == 0);

  VAR_7->curBlockNumber = FUNC_3(VAR_3);
  VAR_7->firstBlockNumber = VAR_7->curBlockNumber;

  FUNC_1(VAR_7->buffer)->prev = -1L;
 }

 FUNC_0(VAR_7->buffer_size == VAR_0);
 while (VAR_6 > 0)
 {
  if (VAR_7->pos >= VAR_2)
  {

   long VAR_9;

   if (!VAR_7->dirty)
   {

    FUNC_2(VAR_1, "invalid logtape state: should be dirty");
   }





   VAR_9 = FUNC_3(VAR_3);


   FUNC_1(VAR_7->buffer)->next = VAR_9;
   FUNC_4(VAR_3, VAR_7->curBlockNumber, (void *) VAR_7->buffer);


   FUNC_1(VAR_7->buffer)->prev = VAR_7->curBlockNumber;
   VAR_7->curBlockNumber = VAR_9;
   VAR_7->pos = 0;
   VAR_7->nbytes = 0;
  }

  VAR_8 = VAR_2 - VAR_7->pos;
  if (VAR_8 > VAR_6)
   VAR_8 = VAR_6;
  FUNC_0(VAR_8 > 0);

  FUNC_5(VAR_7->buffer + VAR_7->pos, VAR_5, VAR_8);

  VAR_7->dirty = 1;
  VAR_7->pos += VAR_8;
  if (VAR_7->nbytes < VAR_7->pos)
   VAR_7->nbytes = VAR_7->pos;
  VAR_5 = (void *) ((char *) VAR_5 + VAR_8);
  VAR_6 -= VAR_8;
 }
}
