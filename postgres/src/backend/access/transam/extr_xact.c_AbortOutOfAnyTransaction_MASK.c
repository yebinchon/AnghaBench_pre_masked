
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* TransactionState ;
struct TYPE_5__ {int blockState; TYPE_1__* parent; int curTransactionOwner; int subTransactionId; int state; } ;
struct TYPE_4__ {int curTransactionOwner; int subTransactionId; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_9(void)
{
 TransactionState VAR_4 = VAR_0;


 FUNC_3();




 do
 {
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
     FUNC_8();
    }
    break;
   case 137:
   case 144:
   case 140:
   case 141:
   case 139:
   case 142:
   case 145:
   case 138:

    FUNC_1();
    FUNC_8();
    VAR_4->blockState = 143;
    break;
   case 147:
   case 146:







    FUNC_4();
    FUNC_8();
    VAR_4->blockState = 143;
    break;




   case 132:
   case 130:
   case 129:
   case 131:
   case 134:
   case 128:
    FUNC_0();
    FUNC_7();
    VAR_4 = VAR_0;
    break;

   case 136:
   case 135:
   case 133:

    if (VAR_4->curTransactionOwner)
    {

     FUNC_6(VAR_4->subTransactionId,
            VAR_4->parent->subTransactionId,
            VAR_4->curTransactionOwner,
            VAR_4->parent->curTransactionOwner);
    }
    FUNC_7();
    VAR_4 = VAR_0;
    break;
  }
 } while (VAR_4->blockState != 143);


 FUNC_2(VAR_4->parent == ((void*)0));


 FUNC_5();
}
