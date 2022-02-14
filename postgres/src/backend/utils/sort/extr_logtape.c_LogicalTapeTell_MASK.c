
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long offsetBlockNumber; scalar_t__ buffer_size; long curBlockNumber; int pos; } ;
struct TYPE_4__ {int nTapes; TYPE_2__* tapes; } ;
typedef TYPE_1__ LogicalTapeSet ;
typedef TYPE_2__ LogicalTape ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(LogicalTapeSet *VAR_1, int VAR_2,
    long *VAR_3, int *VAR_4)
{
 LogicalTape *VAR_5;

 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1->nTapes);
 VAR_5 = &VAR_1->tapes[VAR_2];
 FUNC_0(VAR_5->offsetBlockNumber == 0L);


 FUNC_0(VAR_5->buffer_size == VAR_0);

 *VAR_3 = VAR_5->curBlockNumber;
 *VAR_4 = VAR_5->pos;
}
