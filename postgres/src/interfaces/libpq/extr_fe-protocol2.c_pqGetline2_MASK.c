
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sock; scalar_t__ asyncStatus; scalar_t__ inStart; scalar_t__ inEnd; char* inBuffer; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int,TYPE_1__*) ;

int
FUNC_2(PGconn *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6 = 1;

 if (VAR_3->sock == VAR_2 ||
  VAR_3->asyncStatus != VAR_1)
 {
  *VAR_4 = '\0';
  return VAR_0;
 }





 while (VAR_5 > 1)
 {
  if (VAR_3->inStart < VAR_3->inEnd)
  {
   char VAR_7 = VAR_3->inBuffer[VAR_3->inStart++];

   if (VAR_7 == '\n')
   {
    VAR_6 = 0;
    break;
   }
   *VAR_4++ = VAR_7;
   VAR_5--;
  }
  else
  {

   if (FUNC_1(1, 0, VAR_3) ||
    FUNC_0(VAR_3) < 0)
   {
    VAR_6 = VAR_0;
    break;
   }
  }
 }
 *VAR_4 = '\0';

 return VAR_6;
}
