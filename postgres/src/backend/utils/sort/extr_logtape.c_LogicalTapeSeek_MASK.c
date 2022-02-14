
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int next; } ;
struct TYPE_7__ {int frozen; scalar_t__ buffer_size; long curBlockNumber; int nbytes; int pos; scalar_t__ buffer; int nextBlockNumber; } ;
struct TYPE_6__ {int nTapes; TYPE_2__* tapes; } ;
typedef TYPE_1__ LogicalTapeSet ;
typedef TYPE_2__ LogicalTape ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,long,void*) ;

void
FUNC_4(LogicalTapeSet *VAR_3, int VAR_4,
    long VAR_5, int VAR_6)
{
 LogicalTape *VAR_7;

 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_3->nTapes);
 VAR_7 = &VAR_3->tapes[VAR_4];
 FUNC_0(VAR_7->frozen);
 FUNC_0(VAR_6 >= 0 && VAR_6 <= VAR_2);
 FUNC_0(VAR_7->buffer_size == VAR_0);

 if (VAR_5 != VAR_7->curBlockNumber)
 {
  FUNC_3(VAR_3, VAR_5, (void *) VAR_7->buffer);
  VAR_7->curBlockNumber = VAR_5;
  VAR_7->nbytes = VAR_2;
  VAR_7->nextBlockNumber = FUNC_1(VAR_7->buffer)->next;
 }

 if (VAR_6 > VAR_7->nbytes)
  FUNC_2(VAR_1, "invalid tape seek position");
 VAR_7->pos = VAR_6;
}
