
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
struct TYPE_10__ {int * noticeProcArg; int * noticeProc; int * noticeRecArg; int * noticeRec; } ;
struct TYPE_12__ {scalar_t__ nEvents; int events; TYPE_1__ errorMessage; int client_encoding; TYPE_2__ noticeHooks; } ;
struct TYPE_11__ {int resultStatus; char* cmdStatus; scalar_t__ nEvents; char* null_field; int memorySize; int client_encoding; TYPE_2__ noticeHooks; int * events; scalar_t__ spaceLeft; scalar_t__ curOffset; int * curBlock; int * errQuery; int * errFields; int * errMsg; scalar_t__ binary; int * paramDescs; scalar_t__ numParameters; scalar_t__ tupArrSize; int * tuples; int * attDescs; scalar_t__ numAttributes; scalar_t__ ntups; } ;
typedef TYPE_3__ PGresult ;
typedef TYPE_4__ PGconn ;
typedef int ExecStatusType ;
 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (int ,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ) ;

PGresult *
FUNC_4(PGconn *VAR_1, ExecStatusType VAR_2)
{
 PGresult *VAR_3;

 VAR_3 = (PGresult *) FUNC_2(sizeof(PGresult));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->ntups = 0;
 VAR_3->numAttributes = 0;
 VAR_3->attDescs = ((void*)0);
 VAR_3->tuples = ((void*)0);
 VAR_3->tupArrSize = 0;
 VAR_3->numParameters = 0;
 VAR_3->paramDescs = ((void*)0);
 VAR_3->resultStatus = VAR_2;
 VAR_3->cmdStatus[0] = '\0';
 VAR_3->binary = 0;
 VAR_3->events = ((void*)0);
 VAR_3->nEvents = 0;
 VAR_3->errMsg = ((void*)0);
 VAR_3->errFields = ((void*)0);
 VAR_3->errQuery = ((void*)0);
 VAR_3->null_field[0] = '\0';
 VAR_3->curBlock = ((void*)0);
 VAR_3->curOffset = 0;
 VAR_3->spaceLeft = 0;
 VAR_3->memorySize = sizeof(PGresult);

 if (VAR_1)
 {

  VAR_3->noticeHooks = VAR_1->noticeHooks;
  VAR_3->client_encoding = VAR_1->client_encoding;


  switch (VAR_2)
  {
   case 130:
   case 134:
   case 128:
   case 131:
   case 132:
   case 133:
   case 129:

    break;
   default:
    FUNC_3(VAR_3, VAR_1->errorMessage.data);
    break;
  }


  if (VAR_1->nEvents > 0)
  {
   VAR_3->events = FUNC_1(VAR_1->events, VAR_1->nEvents,
            &VAR_3->memorySize);
   if (!VAR_3->events)
   {
    FUNC_0(VAR_3);
    return ((void*)0);
   }
   VAR_3->nEvents = VAR_1->nEvents;
  }
 }
 else
 {

  VAR_3->noticeHooks.noticeRec = ((void*)0);
  VAR_3->noticeHooks.noticeRecArg = ((void*)0);
  VAR_3->noticeHooks.noticeProc = ((void*)0);
  VAR_3->noticeHooks.noticeProcArg = ((void*)0);
  VAR_3->client_encoding = VAR_0;
 }

 return VAR_3;
}
