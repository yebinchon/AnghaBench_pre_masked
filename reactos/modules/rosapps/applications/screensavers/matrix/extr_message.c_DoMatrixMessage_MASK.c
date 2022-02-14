
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* message; } ;
struct TYPE_9__ {int counter; int msgindex; } ;
typedef TYPE_1__ MATRIX_MESSAGE ;
typedef TYPE_2__ MATRIX ;
typedef int HDC ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

void FUNC_6(HDC VAR_6, MATRIX *VAR_7)
{
 MATRIX_MESSAGE *VAR_8 = VAR_7->message;

 int VAR_9 = FUNC_2();

 if(VAR_4 > 0)
 {

  if(VAR_8->counter++ < 0)
   return;


  if(VAR_8->counter++ == VAR_9 / 2 + (VAR_9/4))
   FUNC_0(VAR_8);


  if(VAR_8->counter >= VAR_9)
  {



   if(VAR_2)
    VAR_8->msgindex = FUNC_5() % VAR_4;
   else
    VAR_8->msgindex = (VAR_8->msgindex + 1) % VAR_4;


   FUNC_4(VAR_8, 0, VAR_5[VAR_8->msgindex]);

   VAR_8->counter = -(int)(FUNC_5() % VAR_0);
  }

  else if(VAR_8->counter < VAR_9 / 2)
  {
   int VAR_10 = (VAR_3 - VAR_1);
   VAR_10 = (1 << 16) + ((VAR_10<<16) / VAR_0);
   VAR_10 = (VAR_10 * 3 * VAR_3) >> 16;

   FUNC_3(VAR_8, VAR_10 + 100);
  }




  FUNC_1(VAR_7, VAR_8, VAR_6);
 }
}
