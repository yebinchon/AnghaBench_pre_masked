
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int indtuples; int havedead; TYPE_1__* btleader; } ;
struct TYPE_6__ {int nparticipantsdone; int brokenhotchain; double reltuples; int workersdonecv; int mutex; int indtuples; int havedead; } ;
struct TYPE_5__ {int nparticipanttuplesorts; TYPE_2__* btshared; } ;
typedef TYPE_2__ BTShared ;
typedef TYPE_3__ BTBuildState ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static double
FUNC_4(BTBuildState *VAR_1, bool *VAR_2)
{
 BTShared *VAR_3 = VAR_1->btleader->btshared;
 int VAR_4;
 double VAR_5;

 VAR_4 = VAR_1->btleader->nparticipanttuplesorts;
 for (;;)
 {
  FUNC_2(&VAR_3->mutex);
  if (VAR_3->nparticipantsdone == VAR_4)
  {
   VAR_1->havedead = VAR_3->havedead;
   VAR_1->indtuples = VAR_3->indtuples;
   *VAR_2 = VAR_3->brokenhotchain;
   VAR_5 = VAR_3->reltuples;
   FUNC_3(&VAR_3->mutex);
   break;
  }
  FUNC_3(&VAR_3->mutex);

  FUNC_1(&VAR_3->workersdonecv,
          VAR_0);
 }

 FUNC_0();

 return VAR_5;
}
