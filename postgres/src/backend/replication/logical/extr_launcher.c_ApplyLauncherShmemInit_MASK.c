
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int relmutex; struct TYPE_5__* workers; } ;
typedef TYPE_1__ LogicalRepWorker ;
typedef TYPE_1__ LogicalRepCtxStruct ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (char*,int,int*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(void)
{
 bool VAR_2;

 VAR_0 = (LogicalRepCtxStruct *)
  FUNC_1("Logical Replication Launcher Data",
      FUNC_0(),
      &VAR_2);

 if (!VAR_2)
 {
  int VAR_3;

  FUNC_3(VAR_0, 0, FUNC_0());


  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  {
   LogicalRepWorker *VAR_4 = &VAR_0->workers[VAR_3];

   FUNC_3(VAR_4, 0, sizeof(LogicalRepWorker));
   FUNC_2(&VAR_4->relmutex);
  }
 }
}
