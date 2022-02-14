
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int blockState; int state; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_4(void)
{
 TransactionState VAR_4 = VAR_0;

 switch (VAR_4->blockState)
 {
  case 143:
   if (VAR_4->state == VAR_1)
   {

   }
   else
   {







    if (VAR_4->state == VAR_3)
     VAR_4->state = VAR_2;
    FUNC_1();
    FUNC_3();
   }
   break;






  case 137:
  case 141:
   FUNC_1();
   FUNC_3();
   VAR_4->blockState = 143;
   break;
  case 144:
   FUNC_1();
   FUNC_3();
   VAR_4->blockState = 143;
   break;






  case 140:
  case 139:
   FUNC_1();
   VAR_4->blockState = 147;

   break;






  case 142:
   FUNC_1();
   FUNC_3();
   VAR_4->blockState = 143;
   break;






  case 147:
  case 136:
   break;






  case 146:
   FUNC_3();
   VAR_4->blockState = 143;
   break;





  case 145:
   FUNC_1();
   FUNC_3();
   VAR_4->blockState = 143;
   break;






  case 138:
   FUNC_1();
   FUNC_3();
   VAR_4->blockState = 143;
   break;






  case 130:
   FUNC_0();
   VAR_4->blockState = 136;
   break;






  case 132:
  case 129:
  case 131:
  case 134:
  case 128:
   FUNC_0();
   FUNC_2();
   FUNC_4();
   break;




  case 135:
  case 133:
   FUNC_2();
   FUNC_4();
   break;
 }
}
