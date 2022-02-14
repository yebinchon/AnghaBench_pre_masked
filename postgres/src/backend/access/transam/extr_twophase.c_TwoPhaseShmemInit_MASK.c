
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pgprocno; } ;
struct TYPE_6__ {TYPE_1__* freeGXacts; scalar_t__ numPrepXacts; } ;
struct TYPE_5__ {scalar_t__ dummyBackendId; int pgprocno; struct TYPE_5__* next; } ;
typedef TYPE_1__* GlobalTransaction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_2__* FUNC_2 (char*,int ,int*) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_6 ;

void
FUNC_5(void)
{
 bool VAR_7;

 VAR_3 = FUNC_2("Prepared Transaction Table",
         FUNC_3(),
         &VAR_7);
 if (!VAR_0)
 {
  GlobalTransaction VAR_8;
  int VAR_9;

  FUNC_0(!VAR_7);
  VAR_3->freeGXacts = ((void*)0);
  VAR_3->numPrepXacts = 0;




  VAR_8 = (GlobalTransaction)
   ((char *) VAR_3 +
    FUNC_1(FUNC_4(VAR_4, VAR_6) +
       sizeof(GlobalTransaction) * VAR_5));
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  {

   VAR_8[VAR_9].next = VAR_3->freeGXacts;
   VAR_3->freeGXacts = &VAR_8[VAR_9];


   VAR_8[VAR_9].pgprocno = VAR_2[VAR_9].pgprocno;
   VAR_8[VAR_9].dummyBackendId = VAR_1 + 1 + VAR_9;
  }
 }
 else
  FUNC_0(VAR_7);
}
