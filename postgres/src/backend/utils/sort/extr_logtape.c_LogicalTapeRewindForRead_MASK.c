
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int frozen; size_t max_size; int writing; int nbytes; size_t buffer_size; long firstBlockNumber; long nextBlockNumber; scalar_t__ pos; int * buffer; int curBlockNumber; scalar_t__ dirty; } ;
struct TYPE_7__ {int nTapes; TYPE_2__* tapes; } ;
typedef TYPE_1__ LogicalTapeSet ;
typedef TYPE_2__ LogicalTape ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int ,void*) ;
 int * FUNC_5 (size_t) ;
 int FUNC_6 (int *) ;

void
FUNC_7(LogicalTapeSet *VAR_1, int VAR_2, size_t VAR_3)
{
 LogicalTape *VAR_4;

 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1->nTapes);
 VAR_4 = &VAR_1->tapes[VAR_2];




 if (VAR_4->frozen)
  VAR_3 = VAR_0;
 else
 {

  if (VAR_3 < VAR_0)
   VAR_3 = VAR_0;


  if (VAR_3 > VAR_4->max_size)
   VAR_3 = VAR_4->max_size;


  VAR_3 -= VAR_3 % VAR_0;
 }

 if (VAR_4->writing)
 {




  if (VAR_4->dirty)
  {
   FUNC_2(VAR_4->buffer + VAR_4->nbytes,
           VAR_4->buffer_size - VAR_4->nbytes);

   FUNC_1(VAR_4->buffer, VAR_4->nbytes);
   FUNC_4(VAR_1, VAR_4->curBlockNumber, (void *) VAR_4->buffer);
  }
  VAR_4->writing = 0;
 }
 else
 {




  FUNC_0(VAR_4->frozen);
 }


 if (VAR_4->buffer)
  FUNC_6(VAR_4->buffer);
 VAR_4->buffer = ((void*)0);
 VAR_4->buffer_size = 0;
 if (VAR_4->firstBlockNumber != -1L)
 {
  VAR_4->buffer = FUNC_5(VAR_3);
  VAR_4->buffer_size = VAR_3;
 }


 VAR_4->nextBlockNumber = VAR_4->firstBlockNumber;
 VAR_4->pos = 0;
 VAR_4->nbytes = 0;
 FUNC_3(VAR_1, VAR_4);
}
