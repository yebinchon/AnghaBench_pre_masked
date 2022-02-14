
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* conn; } ;
struct TYPE_10__ {int nEvents; TYPE_1__* events; int errorMessage; int status; } ;
struct TYPE_9__ {int name; int passThrough; int (* proc ) (int ,TYPE_3__*,int ) ;} ;
typedef TYPE_2__ PGconn ;
typedef TYPE_3__ PGEventConnReset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,TYPE_3__*,int ) ;

void
FUNC_6(PGconn *VAR_2)
{
 if (VAR_2)
 {
  FUNC_0(VAR_2);

  if (FUNC_2(VAR_2) && FUNC_1(VAR_2))
  {




   int VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_2->nEvents; VAR_3++)
   {
    PGEventConnReset VAR_4;

    VAR_4.conn = VAR_2;
    if (!VAR_2->events[VAR_3].proc(VAR_1, &VAR_4,
            VAR_2->events[VAR_3].passThrough))
    {
     VAR_2->status = VAR_0;
     FUNC_4(&VAR_2->errorMessage,
           FUNC_3("PGEventProc \"%s\" failed during PGEVT_CONNRESET event\n"),
           VAR_2->events[VAR_3].name);
     break;
    }
   }
  }
 }
}
