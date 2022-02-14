
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* buffer; } ;
struct TYPE_5__ {int nTapes; struct TYPE_5__* freeBlocks; TYPE_2__* tapes; int pfile; } ;
typedef TYPE_1__ LogicalTapeSet ;
typedef TYPE_2__ LogicalTape ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(LogicalTapeSet *VAR_0)
{
 LogicalTape *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0->pfile);
 for (VAR_2 = 0; VAR_2 < VAR_0->nTapes; VAR_2++)
 {
  VAR_1 = &VAR_0->tapes[VAR_2];
  if (VAR_1->buffer)
   FUNC_1(VAR_1->buffer);
 }
 FUNC_1(VAR_0->freeBlocks);
 FUNC_1(VAR_0);
}
