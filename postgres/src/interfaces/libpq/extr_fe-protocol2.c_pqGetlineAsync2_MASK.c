
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ asyncStatus; scalar_t__ inCursor; scalar_t__ inStart; scalar_t__ inEnd; char* inBuffer; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;

int
FUNC_0(PGconn *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1->asyncStatus != VAR_0)
  return -1;
 VAR_1->inCursor = VAR_1->inStart;

 VAR_4 = VAR_3;
 while (VAR_4 > 0 && VAR_1->inCursor < VAR_1->inEnd)
 {
  char VAR_5 = VAR_1->inBuffer[VAR_1->inCursor++];

  *VAR_2++ = VAR_5;
  --VAR_4;
  if (VAR_5 == '\n')
  {

   VAR_1->inStart = VAR_1->inCursor;

   if (VAR_3 - VAR_4 == 3 && VAR_2[-3] == '\\' && VAR_2[-2] == '.')
    return -1;

   return VAR_3 - VAR_4;
  }
 }
 if (VAR_4 == 0 && VAR_3 > 3)
 {
  VAR_1->inStart = VAR_1->inCursor - 3;
  return VAR_3 - 3;
 }
 return 0;
}
