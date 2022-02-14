
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* result; } ;
struct TYPE_7__ {int nEvents; struct TYPE_7__* events; int * errFields; int * paramDescs; struct TYPE_7__* tuples; int * attDescs; struct TYPE_7__* next; struct TYPE_7__* curBlock; struct TYPE_7__* name; int passThrough; int (* proc ) (int ,TYPE_3__*,int ) ;scalar_t__ resultInitialized; } ;
typedef TYPE_1__ PGresult_data ;
typedef TYPE_1__ PGresult ;
typedef TYPE_3__ PGEventResultDestroy ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;

void
FUNC_2(PGresult *VAR_1)
{
 PGresult_data *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->nEvents; VAR_3++)
 {

  if (VAR_1->events[VAR_3].resultInitialized)
  {
   PGEventResultDestroy VAR_4;

   VAR_4.result = VAR_1;
   (void) VAR_1->events[VAR_3].proc(VAR_0, &VAR_4,
            VAR_1->events[VAR_3].passThrough);
  }
  FUNC_0(VAR_1->events[VAR_3].name);
 }

 if (VAR_1->events)
  FUNC_0(VAR_1->events);


 while ((VAR_2 = VAR_1->curBlock) != ((void*)0))
 {
  VAR_1->curBlock = VAR_2->next;
  FUNC_0(VAR_2);
 }


 if (VAR_1->tuples)
  FUNC_0(VAR_1->tuples);


 VAR_1->attDescs = ((void*)0);
 VAR_1->tuples = ((void*)0);
 VAR_1->paramDescs = ((void*)0);
 VAR_1->errFields = ((void*)0);
 VAR_1->events = ((void*)0);
 VAR_1->nEvents = 0;



 FUNC_0(VAR_1);
}
