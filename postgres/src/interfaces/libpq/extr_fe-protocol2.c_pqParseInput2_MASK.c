
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int data; } ;
struct TYPE_16__ {scalar_t__ asyncStatus; int inCursor; int inStart; int inEnd; int errorMessage; int noticeHooks; TYPE_1__* result; TYPE_5__ workBuffer; int be_key; int be_pid; } ;
struct TYPE_15__ {int cmdStatus; } ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *,int,TYPE_2__*) ;
 scalar_t__ FUNC_8 (char*,TYPE_2__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *,int ,...) ;
 int FUNC_13 (int ,int ,int ) ;

void
FUNC_14(PGconn *VAR_8)
{
 char VAR_9;




 for (;;)
 {






  if (VAR_8->asyncStatus == VAR_3)
   return;




  VAR_8->inCursor = VAR_8->inStart;
  if (FUNC_8(&VAR_9, VAR_8))
   return;
  if (VAR_9 == 'A')
  {
   if (FUNC_3(VAR_8))
    return;
  }
  else if (VAR_9 == 'N')
  {
   if (FUNC_6(VAR_8, 0))
    return;
  }
  else if (VAR_8->asyncStatus != VAR_1)
  {

   if (VAR_8->asyncStatus != VAR_4)
    return;
   if (VAR_9 == 'E')
   {
    if (FUNC_6(VAR_8, 0 ))
     return;
   }
   else
   {
    FUNC_10(&VAR_8->noticeHooks,
         "message type 0x%02x arrived from server while idle",
         VAR_9);

    VAR_8->inStart = VAR_8->inEnd;
    break;
   }
  }
  else
  {



   switch (VAR_9)
   {
    case 'C':
     if (FUNC_9(&VAR_8->workBuffer, VAR_8))
      return;
     if (VAR_8->result == ((void*)0))
     {
      VAR_8->result = FUNC_0(VAR_8,
                 VAR_6);
      if (!VAR_8->result)
      {
       FUNC_12(&VAR_8->errorMessage,
             FUNC_5("out of memory"));
       FUNC_11(VAR_8);
      }
     }
     if (VAR_8->result)
     {
      FUNC_13(VAR_8->result->cmdStatus, VAR_8->workBuffer.data,
        VAR_0);
     }
     FUNC_1(VAR_8, VAR_8->workBuffer.data);
     VAR_8->asyncStatus = VAR_5;
     break;
    case 'E':
     if (FUNC_6(VAR_8, 1))
      return;
     VAR_8->asyncStatus = VAR_5;
     break;
    case 'Z':
     VAR_8->asyncStatus = VAR_4;
     break;
    case 'I':

     if (FUNC_8(&VAR_9, VAR_8))
      return;
     if (VAR_9 != '\0')
      FUNC_10(&VAR_8->noticeHooks,
           "unexpected character %c following empty query response (\"I\" message)",
           VAR_9);
     if (VAR_8->result == ((void*)0))
     {
      VAR_8->result = FUNC_0(VAR_8,
                 VAR_7);
      if (!VAR_8->result)
      {
       FUNC_12(&VAR_8->errorMessage,
             FUNC_5("out of memory"));
       FUNC_11(VAR_8);
      }
     }
     VAR_8->asyncStatus = VAR_5;
     break;
    case 'K':






     if (FUNC_7(&(VAR_8->be_pid), 4, VAR_8))
      return;
     if (FUNC_7(&(VAR_8->be_key), 4, VAR_8))
      return;
     break;
    case 'P':
     if (FUNC_9(&VAR_8->workBuffer, VAR_8))
      return;

     break;
    case 'T':
     if (VAR_8->result == ((void*)0))
     {

      if (FUNC_4(VAR_8))
       return;

      continue;
     }
     else
     {







      VAR_8->asyncStatus = VAR_5;
      return;
     }
     break;
    case 'D':
     if (VAR_8->result != ((void*)0))
     {

      if (FUNC_2(VAR_8, 0))
       return;

      continue;
     }
     else
     {
      FUNC_10(&VAR_8->noticeHooks,
           "server sent data (\"D\" message) without prior row description (\"T\" message)");

      VAR_8->inStart = VAR_8->inEnd;
      return;
     }
     break;
    case 'B':
     if (VAR_8->result != ((void*)0))
     {

      if (FUNC_2(VAR_8, 1))
       return;

      continue;
     }
     else
     {
      FUNC_10(&VAR_8->noticeHooks,
           "server sent binary data (\"B\" message) without prior row description (\"T\" message)");

      VAR_8->inStart = VAR_8->inEnd;
      return;
     }
     break;
    case 'G':
     VAR_8->asyncStatus = VAR_2;
     break;
    case 'H':
     VAR_8->asyncStatus = VAR_3;
     break;





    default:
     FUNC_12(&VAR_8->errorMessage,
           FUNC_5(
             "unexpected response from server; first received character was \"%c\"\n"),
           VAR_9);

     FUNC_11(VAR_8);

     VAR_8->inStart = VAR_8->inEnd;
     VAR_8->asyncStatus = VAR_5;
     return;
   }
  }

  VAR_8->inStart = VAR_8->inCursor;
 }
}
