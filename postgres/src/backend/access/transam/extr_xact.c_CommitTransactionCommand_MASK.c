
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int chain; int blockState; char* name; int savepointLevel; int * parent; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,char*,int ) ;

void
FUNC_17(void)
{
 TransactionState VAR_3 = VAR_0;

 if (VAR_3->chain)
  FUNC_13();

 switch (VAR_3->blockState)
 {






  case 143:
  case 139:
   FUNC_16(VAR_2, "CommitTransactionCommand: unexpected state %s",
     FUNC_4(VAR_3->blockState));
   break;





  case 137:
   FUNC_9();
   VAR_3->blockState = 143;
   break;







  case 144:
   VAR_3->blockState = 140;
   break;






  case 140:
  case 141:
  case 130:
   FUNC_7();
   break;





  case 142:
   FUNC_9();
   VAR_3->blockState = 143;
   if (VAR_3->chain)
   {
    FUNC_15();
    VAR_3->blockState = 140;
    VAR_3->chain = 0;
    FUNC_12();
   }
   break;






  case 147:
  case 136:
   break;






  case 146:
   FUNC_6();
   VAR_3->blockState = 143;
   if (VAR_3->chain)
   {
    FUNC_15();
    VAR_3->blockState = 140;
    VAR_3->chain = 0;
    FUNC_12();
   }
   break;






  case 145:
   FUNC_1();
   FUNC_6();
   VAR_3->blockState = 143;
   if (VAR_3->chain)
   {
    FUNC_15();
    VAR_3->blockState = 140;
    VAR_3->chain = 0;
    FUNC_12();
   }
   break;





  case 138:
   FUNC_11();
   VAR_3->blockState = 143;
   break;







  case 132:
   FUNC_14();
   VAR_3->blockState = 130;
   break;







  case 129:
   do
   {
    FUNC_8();
    VAR_3 = VAR_0;
   } while (VAR_3->blockState == 129);

   FUNC_2(VAR_3->blockState == 140 ||
       VAR_3->blockState == 130);
   break;
  case 131:
   do
   {
    FUNC_8();
    VAR_3 = VAR_0;
   } while (VAR_3->blockState == 131);

   if (VAR_3->blockState == 142)
   {
    FUNC_2(VAR_3->parent == ((void*)0));
    FUNC_9();
    VAR_3->blockState = 143;
   }
   else if (VAR_3->blockState == 138)
   {
    FUNC_2(VAR_3->parent == ((void*)0));
    FUNC_11();
    VAR_3->blockState = 143;
   }
   else
    FUNC_16(VAR_1, "CommitTransactionCommand: unexpected state %s",
      FUNC_4(VAR_3->blockState));
   break;






  case 135:
   FUNC_5();
   FUNC_17();
   break;




  case 134:
   FUNC_0();
   FUNC_5();
   FUNC_17();
   break;






  case 128:
   {
    char *VAR_4;
    int VAR_5;


    VAR_4 = VAR_3->name;
    VAR_3->name = ((void*)0);
    VAR_5 = VAR_3->savepointLevel;

    FUNC_0();
    FUNC_5();

    FUNC_10(((void*)0));
    VAR_3 = VAR_0;
    VAR_3->name = VAR_4;
    VAR_3->savepointLevel = VAR_5;


    FUNC_3(VAR_3->blockState == 132);
    FUNC_14();
    VAR_3->blockState = 130;
   }
   break;





  case 133:
   {
    char *VAR_6;
    int VAR_7;


    VAR_6 = VAR_3->name;
    VAR_3->name = ((void*)0);
    VAR_7 = VAR_3->savepointLevel;

    FUNC_5();

    FUNC_10(((void*)0));
    VAR_3 = VAR_0;
    VAR_3->name = VAR_6;
    VAR_3->savepointLevel = VAR_7;


    FUNC_3(VAR_3->blockState == 132);
    FUNC_14();
    VAR_3->blockState = 130;
   }
   break;
 }
}
