
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int writing; int dirty; long firstBlockNumber; long curBlockNumber; scalar_t__ buffer_size; int * buffer; scalar_t__ nbytes; scalar_t__ pos; int frozen; } ;
struct TYPE_4__ {int nTapes; TYPE_2__* tapes; } ;
typedef TYPE_1__ LogicalTapeSet ;
typedef TYPE_2__ LogicalTape ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(LogicalTapeSet *VAR_0, int VAR_1)
{
 LogicalTape *VAR_2;

 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->nTapes);
 VAR_2 = &VAR_0->tapes[VAR_1];

 FUNC_0(!VAR_2->writing && !VAR_2->frozen);
 VAR_2->writing = 1;
 VAR_2->dirty = 0;
 VAR_2->firstBlockNumber = -1L;
 VAR_2->curBlockNumber = -1L;
 VAR_2->pos = 0;
 VAR_2->nbytes = 0;
 if (VAR_2->buffer)
  FUNC_1(VAR_2->buffer);
 VAR_2->buffer = ((void*)0);
 VAR_2->buffer_size = 0;
}
