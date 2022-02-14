
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int inCursor; int inStart; int inEnd; void* asyncStatus; } ;
typedef TYPE_1__ PGconn ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char,int) ;
 scalar_t__ FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(PGconn *VAR_3)
{
 char VAR_4;
 int VAR_5;
 int VAR_6;

 for (;;)
 {





  VAR_3->inCursor = VAR_3->inStart;
  if (FUNC_6(&VAR_4, VAR_3))
   return 0;
  if (FUNC_5(&VAR_5, 4, VAR_3))
   return 0;
  if (VAR_5 < 4)
  {
   FUNC_2(VAR_3, VAR_4, VAR_5);
   return -2;
  }
  VAR_6 = VAR_3->inEnd - VAR_3->inCursor;
  if (VAR_6 < VAR_5 - 4)
  {




   if (FUNC_3(VAR_3->inCursor + (size_t) VAR_5 - 4,
          VAR_3))
   {






    FUNC_2(VAR_3, VAR_4, VAR_5);
    return -2;
   }
   return 0;
  }







  switch (VAR_4)
  {
   case 'A':
    if (FUNC_0(VAR_3))
     return 0;
    break;
   case 'N':
    if (FUNC_4(VAR_3, 0))
     return 0;
    break;
   case 'S':
    if (FUNC_1(VAR_3))
     return 0;
    break;
   case 'd':
    return VAR_5;
   case 'c':






    if (VAR_3->asyncStatus == VAR_1)
     VAR_3->asyncStatus = VAR_2;
    else
     VAR_3->asyncStatus = VAR_0;
    return -1;
   default:





    VAR_3->asyncStatus = VAR_0;
    return -1;
  }


  VAR_3->inStart = VAR_3->inCursor;
 }
}
