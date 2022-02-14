
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inBufSize; scalar_t__ inStart; scalar_t__ inEnd; char* inBuffer; scalar_t__ inCursor; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,int) ;

int
FUNC_3(size_t VAR_1, PGconn *VAR_2)
{
 int VAR_3 = VAR_2->inBufSize;
 char *VAR_4;


 if (VAR_1 <= (size_t) VAR_3)
  return 0;
 VAR_1 -= VAR_2->inStart;

 if (VAR_2->inStart < VAR_2->inEnd)
 {
  if (VAR_2->inStart > 0)
  {
   FUNC_0(VAR_2->inBuffer, VAR_2->inBuffer + VAR_2->inStart,
     VAR_2->inEnd - VAR_2->inStart);
   VAR_2->inEnd -= VAR_2->inStart;
   VAR_2->inCursor -= VAR_2->inStart;
   VAR_2->inStart = 0;
  }
 }
 else
 {

  VAR_2->inStart = VAR_2->inCursor = VAR_2->inEnd = 0;
 }


 if (VAR_1 <= (size_t) VAR_3)
  return 0;
 do
 {
  VAR_3 *= 2;
 } while (VAR_3 > 0 && VAR_1 > (size_t) VAR_3);

 if (VAR_3 > 0 && VAR_1 <= (size_t) VAR_3)
 {
  VAR_4 = FUNC_2(VAR_2->inBuffer, VAR_3);
  if (VAR_4)
  {

   VAR_2->inBuffer = VAR_4;
   VAR_2->inBufSize = VAR_3;
   return 0;
  }
 }

 VAR_3 = VAR_2->inBufSize;
 do
 {
  VAR_3 += 8192;
 } while (VAR_3 > 0 && VAR_1 > (size_t) VAR_3);

 if (VAR_3 > 0 && VAR_1 <= (size_t) VAR_3)
 {
  VAR_4 = FUNC_2(VAR_2->inBuffer, VAR_3);
  if (VAR_4)
  {

   VAR_2->inBuffer = VAR_4;
   VAR_2->inBufSize = VAR_3;
   return 0;
  }
 }


 FUNC_1(&VAR_2->errorMessage,
       "cannot allocate memory for input buffer\n");
 return VAR_0;
}
