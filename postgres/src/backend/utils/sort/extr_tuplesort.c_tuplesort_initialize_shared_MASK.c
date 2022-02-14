
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_5__ {int nTapes; TYPE_1__* tapes; int fileset; scalar_t__ workersFinished; scalar_t__ currentWorker; int mutex; } ;
struct TYPE_4__ {long firstblocknumber; } ;
typedef TYPE_2__ Sharedsort ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(Sharedsort *VAR_0, int VAR_1, dsm_segment *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1 > 0);

 FUNC_2(&VAR_0->mutex);
 VAR_0->currentWorker = 0;
 VAR_0->workersFinished = 0;
 FUNC_1(&VAR_0->fileset, VAR_2);
 VAR_0->nTapes = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  VAR_0->tapes[VAR_3].firstblocknumber = 0L;
 }
}
