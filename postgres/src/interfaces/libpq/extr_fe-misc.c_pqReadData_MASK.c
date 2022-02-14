
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sock; int inStart; int inEnd; scalar_t__ inBuffer; int inCursor; int inBufSize; int status; int errorMessage; scalar_t__ ssl_in_use; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (size_t,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_6 (int *,int ) ;

int
FUNC_7(PGconn *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_7->sock == VAR_5)
 {
  FUNC_6(&VAR_7->errorMessage,
        FUNC_0("connection not open\n"));
  return -1;
 }


 if (VAR_7->inStart < VAR_7->inEnd)
 {
  if (VAR_7->inStart > 0)
  {
   FUNC_1(VAR_7->inBuffer, VAR_7->inBuffer + VAR_7->inStart,
     VAR_7->inEnd - VAR_7->inStart);
   VAR_7->inEnd -= VAR_7->inStart;
   VAR_7->inCursor -= VAR_7->inStart;
   VAR_7->inStart = 0;
  }
 }
 else
 {

  VAR_7->inStart = VAR_7->inCursor = VAR_7->inEnd = 0;
 }
 if (VAR_7->inBufSize - VAR_7->inEnd < 8192)
 {
  if (FUNC_2(VAR_7->inEnd + (size_t) 8192, VAR_7))
  {



   if (VAR_7->inBufSize - VAR_7->inEnd < 100)
    return -1;
  }
 }


retry3:
 VAR_9 = FUNC_5(VAR_7, VAR_7->inBuffer + VAR_7->inEnd,
        VAR_7->inBufSize - VAR_7->inEnd);
 if (VAR_9 < 0)
 {
  if (VAR_6 == VAR_3)
   goto retry3;
  return -1;
 }
 if (VAR_9 > 0)
 {
  VAR_7->inEnd += VAR_9;
  if (VAR_7->inEnd > 32768 &&
   (VAR_7->inBufSize - VAR_7->inEnd) >= 8192)
  {
   VAR_8 = 1;
   goto retry3;
  }
  return 1;
 }

 if (VAR_8)
  return 1;
 switch (FUNC_4(VAR_7))
 {
  case 0:

   return 0;
  case 1:

   break;
  default:

   goto definitelyEOF;
 }





retry4:
 VAR_9 = FUNC_5(VAR_7, VAR_7->inBuffer + VAR_7->inEnd,
        VAR_7->inBufSize - VAR_7->inEnd);
 if (VAR_9 < 0)
 {
  if (VAR_6 == VAR_3)
   goto retry4;
  return -1;
 }
 if (VAR_9 > 0)
 {
  VAR_7->inEnd += VAR_9;
  return 1;
 }





definitelyEOF:
 FUNC_6(&VAR_7->errorMessage,
       FUNC_0(
         "server closed the connection unexpectedly\n"
         "\tThis probably means the server terminated abnormally\n"
         "\tbefore or while processing the request.\n"));


definitelyFailed:

 FUNC_3(VAR_7, 0);
 VAR_7->status = VAR_0;
 return -1;
}
