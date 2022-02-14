
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_26__ {int data; } ;
struct TYPE_25__ {TYPE_2__* result; TYPE_3__* conn; } ;
struct TYPE_24__ {scalar_t__ asyncStatus; TYPE_6__ errorMessage; scalar_t__ write_failed; } ;
struct TYPE_23__ {int nEvents; TYPE_1__* events; int resultStatus; } ;
struct TYPE_22__ {int name; int resultInitialized; int passThrough; int (* proc ) (int ,TYPE_4__*,int ) ;} ;
typedef TYPE_2__ PGresult ;
typedef TYPE_3__ PGconn ;
typedef TYPE_4__ PGEventResultCreate ;


 scalar_t__ VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_10 (int,int,TYPE_3__*) ;
 int FUNC_11 (TYPE_6__*,int ,int) ;
 int FUNC_12 (int ,TYPE_4__*,int ) ;

PGresult *
FUNC_13(PGconn *VAR_6)
{
 PGresult *VAR_7;

 if (!VAR_6)
  return ((void*)0);


 FUNC_3(VAR_6);


 while (VAR_6->asyncStatus == VAR_0)
 {
  int VAR_8;





  while ((VAR_8 = FUNC_4(VAR_6)) > 0)
  {
   if (FUNC_10(0, 1, VAR_6))
   {
    VAR_8 = -1;
    break;
   }
  }
  if (VAR_8 ||
   FUNC_10(1, 0, VAR_6) ||
   FUNC_6(VAR_6) < 0)
  {




   FUNC_7(VAR_6);
   VAR_6->asyncStatus = 129;
   return FUNC_5(VAR_6);
  }


  FUNC_3(VAR_6);





  if (VAR_6->write_failed && VAR_6->asyncStatus == VAR_0)
  {
   FUNC_8(VAR_6);
   VAR_6->asyncStatus = 129;
   return FUNC_5(VAR_6);
  }
 }


 switch (VAR_6->asyncStatus)
 {
  case 129:
   VAR_7 = ((void*)0);
   break;
  case 128:
   VAR_7 = FUNC_5(VAR_6);

   VAR_6->asyncStatus = VAR_0;
   break;
  case 131:
   VAR_7 = FUNC_1(VAR_6, VAR_3);
   break;
  case 130:
   VAR_7 = FUNC_1(VAR_6, VAR_4);
   break;
  case 132:
   VAR_7 = FUNC_1(VAR_6, VAR_2);
   break;
  default:
   FUNC_11(&VAR_6->errorMessage,
         FUNC_2("unexpected asyncStatus: %d\n"),
         (int) VAR_6->asyncStatus);
   VAR_7 = FUNC_0(VAR_6, VAR_5);
   break;
 }

 if (VAR_7)
 {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_7->nEvents; VAR_9++)
  {
   PGEventResultCreate VAR_10;

   VAR_10.conn = VAR_6;
   VAR_10.result = VAR_7;
   if (!VAR_7->events[VAR_9].proc(VAR_1, &VAR_10,
          VAR_7->events[VAR_9].passThrough))
   {
    FUNC_11(&VAR_6->errorMessage,
          FUNC_2("PGEventProc \"%s\" failed during PGEVT_RESULTCREATE event\n"),
          VAR_7->events[VAR_9].name);
    FUNC_9(VAR_7, VAR_6->errorMessage.data);
    VAR_7->resultStatus = VAR_5;
    break;
   }
   VAR_7->events[VAR_9].resultInitialized = 1;
  }
 }

 return VAR_7;
}
