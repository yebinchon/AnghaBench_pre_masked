
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {int data; } ;
struct TYPE_21__ {int inCursor; int inStart; int inEnd; scalar_t__ asyncStatus; int be_pid; int be_key; int errorMessage; int copy_already_done; TYPE_1__* result; int queryclass; TYPE_5__ workBuffer; int noticeHooks; } ;
struct TYPE_20__ {int resultStatus; int cmdStatus; } ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,char,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int,TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int) ;
 scalar_t__ FUNC_13 (int*,int,TYPE_2__*) ;
 scalar_t__ FUNC_14 (char*,TYPE_2__*) ;
 int FUNC_15 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_16 (int *,char*,char) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int *,int ,...) ;
 int FUNC_19 (int ,int ,int ) ;

void
FUNC_20(PGconn *VAR_16)
{
 char VAR_17;
 int VAR_18;
 int VAR_19;




 for (;;)
 {




  VAR_16->inCursor = VAR_16->inStart;
  if (FUNC_14(&VAR_17, VAR_16))
   return;
  if (FUNC_13(&VAR_18, 4, VAR_16))
   return;






  if (VAR_18 < 4)
  {
   FUNC_9(VAR_16, VAR_17, VAR_18);
   return;
  }
  if (VAR_18 > 30000 && !FUNC_1(VAR_17))
  {
   FUNC_9(VAR_16, VAR_17, VAR_18);
   return;
  }




  VAR_18 -= 4;
  VAR_19 = VAR_16->inEnd - VAR_16->inCursor;
  if (VAR_19 < VAR_18)
  {
   if (FUNC_11(VAR_16->inCursor + (size_t) VAR_18,
          VAR_16))
   {






    FUNC_9(VAR_16, VAR_17, VAR_18);
   }
   return;
  }
  if (VAR_17 == 'A')
  {
   if (FUNC_4(VAR_16))
    return;
  }
  else if (VAR_17 == 'N')
  {
   if (FUNC_12(VAR_16, 0))
    return;
  }
  else if (VAR_16->asyncStatus != VAR_1)
  {

   if (VAR_16->asyncStatus != VAR_5)
    return;
   if (VAR_17 == 'E')
   {
    if (FUNC_12(VAR_16, 0 ))
     return;
   }
   else if (VAR_17 == 'S')
   {
    if (FUNC_6(VAR_16))
     return;
   }
   else
   {
    FUNC_16(&VAR_16->noticeHooks,
         "message type 0x%02x arrived from server while idle",
         VAR_17);

    VAR_16->inCursor += VAR_18;
   }
  }
  else
  {



   switch (VAR_17)
   {
    case 'C':
     if (FUNC_15(&VAR_16->workBuffer, VAR_16))
      return;
     if (VAR_16->result == ((void*)0))
     {
      VAR_16->result = FUNC_0(VAR_16,
                 VAR_9);
      if (!VAR_16->result)
      {
       FUNC_18(&VAR_16->errorMessage,
             FUNC_10("out of memory"));
       FUNC_17(VAR_16);
      }
     }
     if (VAR_16->result)
      FUNC_19(VAR_16->result->cmdStatus, VAR_16->workBuffer.data,
        VAR_0);
     VAR_16->asyncStatus = VAR_6;
     break;
    case 'E':
     if (FUNC_12(VAR_16, 1))
      return;
     VAR_16->asyncStatus = VAR_6;
     break;
    case 'Z':
     if (FUNC_7(VAR_16))
      return;
     VAR_16->asyncStatus = VAR_5;
     break;
    case 'I':
     if (VAR_16->result == ((void*)0))
     {
      VAR_16->result = FUNC_0(VAR_16,
                 VAR_13);
      if (!VAR_16->result)
      {
       FUNC_18(&VAR_16->errorMessage,
             FUNC_10("out of memory"));
       FUNC_17(VAR_16);
      }
     }
     VAR_16->asyncStatus = VAR_6;
     break;
    case '1':

     if (VAR_16->queryclass == VAR_8)
     {
      if (VAR_16->result == ((void*)0))
      {
       VAR_16->result = FUNC_0(VAR_16,
                  VAR_9);
       if (!VAR_16->result)
       {
        FUNC_18(&VAR_16->errorMessage,
              FUNC_10("out of memory"));
        FUNC_17(VAR_16);
       }
      }
      VAR_16->asyncStatus = VAR_6;
     }
     break;
    case '2':
    case '3':

     break;
    case 'S':
     if (FUNC_6(VAR_16))
      return;
     break;
    case 'K':






     if (FUNC_13(&(VAR_16->be_pid), 4, VAR_16))
      return;
     if (FUNC_13(&(VAR_16->be_key), 4, VAR_16))
      return;
     break;
    case 'T':
     if (VAR_16->result != ((void*)0) &&
      VAR_16->result->resultStatus == VAR_14)
     {




      VAR_16->inCursor += VAR_18;
     }
     else if (VAR_16->result == ((void*)0) ||
        VAR_16->queryclass == VAR_7)
     {

      if (FUNC_8(VAR_16, VAR_18))
       return;

      continue;
     }
     else
     {







      VAR_16->asyncStatus = VAR_6;
      return;
     }
     break;
    case 'n':
     if (VAR_16->queryclass == VAR_7)
     {
      if (VAR_16->result == ((void*)0))
      {
       VAR_16->result = FUNC_0(VAR_16,
                  VAR_9);
       if (!VAR_16->result)
       {
        FUNC_18(&VAR_16->errorMessage,
              FUNC_10("out of memory"));
        FUNC_17(VAR_16);
       }
      }
      VAR_16->asyncStatus = VAR_6;
     }
     break;
    case 't':
     if (FUNC_5(VAR_16, VAR_18))
      return;

     continue;
    case 'D':
     if (VAR_16->result != ((void*)0) &&
      VAR_16->result->resultStatus == VAR_15)
     {

      if (FUNC_2(VAR_16, VAR_18))
       return;

      continue;
     }
     else if (VAR_16->result != ((void*)0) &&
        VAR_16->result->resultStatus == VAR_14)
     {




      VAR_16->inCursor += VAR_18;
     }
     else
     {

      FUNC_18(&VAR_16->errorMessage,
            FUNC_10("server sent data (\"D\" message) without prior row description (\"T\" message)\n"));
      FUNC_17(VAR_16);

      VAR_16->inCursor += VAR_18;
     }
     break;
    case 'G':
     if (FUNC_3(VAR_16, VAR_11))
      return;
     VAR_16->asyncStatus = VAR_3;
     break;
    case 'H':
     if (FUNC_3(VAR_16, VAR_12))
      return;
     VAR_16->asyncStatus = VAR_4;
     VAR_16->copy_already_done = 0;
     break;
    case 'W':
     if (FUNC_3(VAR_16, VAR_10))
      return;
     VAR_16->asyncStatus = VAR_2;
     VAR_16->copy_already_done = 0;
     break;
    case 'd':






     VAR_16->inCursor += VAR_18;
     break;
    case 'c':







     break;
    default:
     FUNC_18(&VAR_16->errorMessage,
           FUNC_10(
             "unexpected response from server; first received character was \"%c\"\n"),
           VAR_17);

     FUNC_17(VAR_16);

     VAR_16->asyncStatus = VAR_6;

     VAR_16->inCursor += VAR_18;
     break;
   }
  }

  if (VAR_16->inCursor == VAR_16->inStart + 5 + VAR_18)
  {

   VAR_16->inStart = VAR_16->inCursor;
  }
  else
  {

   FUNC_18(&VAR_16->errorMessage,
         FUNC_10("message contents do not agree with length in message type \"%c\"\n"),
         VAR_17);

   FUNC_17(VAR_16);
   VAR_16->asyncStatus = VAR_6;

   VAR_16->inStart += 5 + VAR_18;
  }
 }
}
