
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* conn; } ;
struct TYPE_8__ {int nEvents; TYPE_1__* events; int errorMessage; int status; } ;
struct TYPE_7__ {int name; int passThrough; int (* proc ) (int ,TYPE_3__*,int ) ;} ;
typedef scalar_t__ PostgresPollingStatusType ;
typedef TYPE_2__ PGconn ;
typedef TYPE_3__ PGEventConnReset ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;

PostgresPollingStatusType
FUNC_4(PGconn *VAR_4)
{
 if (VAR_4)
 {
  PostgresPollingStatusType VAR_5 = FUNC_0(VAR_4);

  if (VAR_5 == VAR_3)
  {




   int VAR_6;

   for (VAR_6 = 0; VAR_6 < VAR_4->nEvents; VAR_6++)
   {
    PGEventConnReset VAR_7;

    VAR_7.conn = VAR_4;
    if (!VAR_4->events[VAR_6].proc(VAR_1, &VAR_7,
            VAR_4->events[VAR_6].passThrough))
    {
     VAR_4->status = VAR_0;
     FUNC_2(&VAR_4->errorMessage,
           FUNC_1("PGEventProc \"%s\" failed during PGEVT_CONNRESET event\n"),
           VAR_4->events[VAR_6].name);
     return VAR_2;
    }
   }
  }

  return VAR_5;
 }

 return VAR_2;
}
