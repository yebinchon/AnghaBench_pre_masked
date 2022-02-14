
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int resultInitialized; int passThrough; int (* proc ) (int ,TYPE_3__*,int ) ;} ;
struct TYPE_15__ {TYPE_2__* dest; TYPE_2__ const* src; } ;
struct TYPE_14__ {int numAttributes; int ntups; scalar_t__ nEvents; TYPE_5__* events; int memorySize; int noticeHooks; TYPE_1__** tuples; int attDescs; int cmdStatus; int client_encoding; } ;
struct TYPE_13__ {int len; int value; } ;
typedef TYPE_2__ PGresult ;
typedef TYPE_3__ PGEventResultCopy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int,int,int ,int ) ;
 TYPE_5__* FUNC_4 (TYPE_5__*,scalar_t__,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;

PGresult *
FUNC_7(const PGresult *VAR_6, int VAR_7)
{
 PGresult *VAR_8;
 int VAR_9;

 if (!VAR_6)
  return ((void*)0);

 VAR_8 = FUNC_1(((void*)0), VAR_1);
 if (!VAR_8)
  return ((void*)0);


 VAR_8->client_encoding = VAR_6->client_encoding;
 FUNC_5(VAR_8->cmdStatus, VAR_6->cmdStatus);


 if (VAR_7 & (VAR_2 | VAR_5))
 {
  if (!FUNC_2(VAR_8, VAR_6->numAttributes, VAR_6->attDescs))
  {
   FUNC_0(VAR_8);
   return ((void*)0);
  }
 }


 if (VAR_7 & VAR_5)
 {
  int VAR_10,
     VAR_11;

  for (VAR_10 = 0; VAR_10 < VAR_6->ntups; VAR_10++)
  {
   for (VAR_11 = 0; VAR_11 < VAR_6->numAttributes; VAR_11++)
   {
    if (!FUNC_3(VAR_8, VAR_10, VAR_11,
        VAR_6->tuples[VAR_10][VAR_11].value,
        VAR_6->tuples[VAR_10][VAR_11].len))
    {
     FUNC_0(VAR_8);
     return ((void*)0);
    }
   }
  }
 }


 if (VAR_7 & VAR_4)
  VAR_8->noticeHooks = VAR_6->noticeHooks;


 if ((VAR_7 & VAR_3) && VAR_6->nEvents > 0)
 {
  VAR_8->events = FUNC_4(VAR_6->events, VAR_6->nEvents,
         &VAR_8->memorySize);
  if (!VAR_8->events)
  {
   FUNC_0(VAR_8);
   return ((void*)0);
  }
  VAR_8->nEvents = VAR_6->nEvents;
 }


 for (VAR_9 = 0; VAR_9 < VAR_8->nEvents; VAR_9++)
 {
  if (VAR_6->events[VAR_9].resultInitialized)
  {
   PGEventResultCopy VAR_12;

   VAR_12.src = VAR_6;
   VAR_12.dest = VAR_8;
   if (!VAR_8->events[VAR_9].proc(VAR_0, &VAR_12,
           VAR_8->events[VAR_9].passThrough))
   {
    FUNC_0(VAR_8);
    return ((void*)0);
   }
   VAR_8->events[VAR_9].resultInitialized = 1;
  }
 }

 return VAR_8;
}
